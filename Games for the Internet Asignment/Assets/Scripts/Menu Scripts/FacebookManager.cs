using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Facebook.Unity;
using UnityEngine.Networking;


public class FacebookManager : MonoBehaviour
{
    public GameObject loginTxt;

    //Facebook data
    [System.Serializable]
    public class FBInfo
    {
        public string name;
        public string email;
        public string id;
    }

    //Database data
    [System.Serializable]
    public class Player
    {
        public string Username;
        public string Password;
        public int PlayerSprite;
        public int LevelsBeaten;
        public int Highscore;
        public int Level1;
        public int Level2;
        public int Level3;
    }

    //Registration data
    [System.Serializable]
    public class DataToSend
    {
        public string Username;
        public string Password;
    }

    // Awake function from Unity's MonoBehavior
    void Awake()
    {
        if (!FB.IsInitialized)
        {
            // Initialize the Facebook SDK
            FB.Init(InitCallback, OnHideUnity);
        }
        else
        {
            // Already initialized, signal an app activation App Event
            FB.ActivateApp();
        }
    }

    private void InitCallback()
    {
        if (FB.IsInitialized)
        {
            // Signal an app activation App Event
            FB.ActivateApp();
            // Continue with Facebook SDK
            // ...
        }
        else
        {
            Debug.Log("Failed to Initialize the Facebook SDK");
        }
    }

    private void OnHideUnity(bool isGameShown)
    {
        if (!isGameShown)
        {
            // Pause the game - we will need to hide
            Time.timeScale = 0;
        }
        else
        {
            // Resume the game - we're getting focus again
            Time.timeScale = 1;
        }
    }

    //Waits for initilzation before trying to login
    public void FacebookLogin()
    {
        StartCoroutine (FbLoginWait ());
    }

    IEnumerator FbLoginWait()
    {
        yield return new WaitUntil(() => FB.IsInitialized);

        var perms = new List<string>() { "public_profile", "email" };
        FB.LogInWithReadPermissions(perms, AuthCallback);
    }

    private void AuthCallback(ILoginResult result)
    {
        if (FB.IsLoggedIn)
        {
            // AccessToken class will have session details
            var aToken = Facebook.Unity.AccessToken.CurrentAccessToken;
            // Print current access token's User ID
            Debug.Log(aToken.UserId);
            // Print current access token's granted permissions
            foreach (string perm in aToken.Permissions)
            {
                Debug.Log(perm);
            }

            FB.API("/me?fields=id,name,email", HttpMethod.GET, DealWithInfoResponse);
        }
        else
        {
            Debug.Log("User cancelled login");
        }

    }

    //Attempt to login using the facebook data
    private void DealWithInfoResponse(IGraphResult result)
    {
        FBInfo playerInfo = JsonUtility.FromJson<FBInfo>(result.RawResult);

        Player myData = new Player();
        myData.Username = playerInfo.name;
        myData.Password = playerInfo.id + playerInfo.email;
        myData.LevelsBeaten = 0;
        myData.Highscore = 0;
        myData.Level1 = 0;
        myData.Level2 = 0;
        myData.Level3 = 0;

        StartCoroutine(LoginRequest("http://localhost/UnityProjects/login.php", myData));
    }

    IEnumerator LoginRequest(string url, Player playerInfo)
    {
        string jsonData = JsonUtility.ToJson(playerInfo);

        UnityWebRequest uwr = UnityWebRequest.Post(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        //If there is a network error
        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        //If there is an error loggin in it may need to register to will attempt registering
        //Using facebook data
        else if (uwr.downloadHandler.text[0] != '0')
        {
            Debug.Log("Login Failed Error #" + uwr.downloadHandler.text);

            StartCoroutine(RegistrationRequest("http://localhost/UnityProjects/register.php", playerInfo));
        }
        //If succsessful Log the player in 
        else
        {
            Debug.Log("User Logged in");
            Player myNewPlayer = JsonUtility.FromJson<Player>(uwr.downloadHandler.text.Split('\t')[1]);

            DBManager.username = myNewPlayer.Username;
            DBManager.playerSprite = myNewPlayer.PlayerSprite;
            DBManager.levelsBeaten = myNewPlayer.LevelsBeaten;
            DBManager.highscore = myNewPlayer.Highscore;
            DBManager.scorePerLevel[1] = myNewPlayer.Level1;
            DBManager.scorePerLevel[2] = myNewPlayer.Level2;
            DBManager.scorePerLevel[3] = myNewPlayer.Level3;

            SceneManager.LoadScene("Main Menu");
        }
    }

    //Register the player using facebook info
    IEnumerator RegistrationRequest(string url, Player playerInfo)
    {
        DataToSend myData = new DataToSend();
        myData.Username = playerInfo.Username;
        myData.Password = playerInfo.Password;

        string jsonData = JsonUtility.ToJson(myData);

        UnityWebRequest uwr = UnityWebRequest.Post(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        //If there is a network error
        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        //If there is an error in the php script
        else if (uwr.downloadHandler.text != "0")
        {
            Debug.Log("User Creation Failed Error #" + uwr.downloadHandler.text);
        }
        //If succeful in registering, attempt to log in again using the facebook info
        else
        {
            Debug.Log("User Registered");
            StartCoroutine(LoginRequest("http://localhost/UnityProjects/login.php", playerInfo));
        }
    }
}
