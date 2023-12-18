using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class LoginMenuManager : MonoBehaviour
{
    //Input fields
    public InputField nameInput;
    public InputField passwordInput;

    //login button
    public Button loginBtn;

    //login text
    public Text loggedInDisplay;

    //Button sound
    public AudioSource buttonSound;

    //sets the login text if the player is logged in
    private void Start()
    {
        if (DBManager.LoggedIn)
        {
            loggedInDisplay.text = "Player: " + DBManager.username + " Logged in\nHighscore: " + DBManager.highscore;
        }

        //Starts in the name input field
        nameInput.ActivateInputField();
    }

    //The player dat to be retrived
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

    public void Login()
    {
        buttonSound.Play();

        Player myData = new Player();
        myData.Username = nameInput.text;
        myData.Password = passwordInput.text;
        myData.LevelsBeaten = 0;
        myData.Highscore = 0;
        myData.Level1 = 0;
        myData.Level2 = 0;
        myData.Level3 = 0;

        string jsonData = JsonUtility.ToJson(myData);

        StartCoroutine(LoginRequest("http://localhost/UnityProjects/login.php", jsonData));
    }

    IEnumerator LoginRequest(string url, string json)
    {
        UnityWebRequest uwr = UnityWebRequest.Post(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        //If there is a network error
        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        //If there is an error in the php code
        else if (uwr.downloadHandler.text[0] != '0')
        {
            Debug.Log("Login Failed Error #" + uwr.downloadHandler.text);
        }
        //If sucessful Update the database manager and set the player as logged in 
        //before returning to the main menu
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

    public void VerifyInputs()
    {
        loginBtn.interactable = (nameInput.text.Length > 0 && passwordInput.text.Length >= 3);
    }

    public void MainMenu()
    {
        buttonSound.Play();
        StartCoroutine(LoadMainMenu());
    }

    private IEnumerator LoadMainMenu()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Main Menu");
    }
}
