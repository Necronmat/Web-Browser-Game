using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;


public class ChangeCharacterMenuManager : MonoBehaviour
{
    public AudioSource buttonSound;

    [System.Serializable]
    public class Player
    {
        public string Username;
        public int PlayerSprite;
    }

    public void Sprite()
    {
        buttonSound.Play();
        DBManager.playerSprite = 0;

        StartCoroutine(UpdatePlayerSpriteRequest("http://localhost/UnityProjects/updatePlayerSprite.php"));
    }

    public void Sprite2()
    {
        buttonSound.Play();
        DBManager.playerSprite = 1;

        StartCoroutine(UpdatePlayerSpriteRequest("http://localhost/UnityProjects/updatePlayerSprite.php"));
    }

    public void Sprite3()
    {
        buttonSound.Play();
        DBManager.playerSprite = 2;

        StartCoroutine(UpdatePlayerSpriteRequest("http://localhost/UnityProjects/updatePlayerSprite.php"));
    }

    public void Sprite4()
    {
        buttonSound.Play();
        DBManager.playerSprite = 3;

        StartCoroutine(UpdatePlayerSpriteRequest("http://localhost/UnityProjects/updatePlayerSprite.php"));
    }

    public void Sprite5()
    {
        buttonSound.Play();
        DBManager.playerSprite = 4;

        StartCoroutine(UpdatePlayerSpriteRequest("http://localhost/UnityProjects/updatePlayerSprite.php"));
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

    //Updates the database with the players charachter choice
    IEnumerator UpdatePlayerSpriteRequest(string url)
    {
        Player myData = new Player();
        myData.Username = DBManager.username;
        myData.PlayerSprite = DBManager.playerSprite;

        string jsonData = JsonUtility.ToJson(myData);

        UnityWebRequest uwr = UnityWebRequest.Post(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        //If there is an network error
        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        //if there is an error in the php code
        else if (uwr.downloadHandler.text[0] != '0')
        {
            Debug.Log("Player Sprite Update Failed Error #" + uwr.downloadHandler.text);
        }
        //If sucsessful return to the main menu
        else
        {
            Debug.Log("Player Sprite Updated");
            SceneManager.LoadScene("Main Menu");
        }
    }
}
