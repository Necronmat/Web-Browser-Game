using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class GameOverMenuManager : MonoBehaviour
{
    public AudioSource buttonSound;

    //Data to be updated
    [System.Serializable]
    public class Player
    {
        public string Username;
        public int LevelsBeaten;
        public int Highscore;
        public int Level1;
        public int Level2;
        public int Level3;
    }

    // Start is called before the first frame update
    void Start()
    {
        //If a new level has been beaten update the levels beaten
        if (LevelManager.levelNum >= DBManager.levelsBeaten)
        {
            DBManager.levelsBeaten = LevelManager.levelNum + 1;
        }

        //If a new highscore has been reached request to update it
       if(DBManager.CheckHighscore())
       {
            Player myData = new Player();
            myData.Username = DBManager.username;
            myData.LevelsBeaten = DBManager.levelsBeaten;
            myData.Highscore = DBManager.highscore;
            myData.Level1 = DBManager.scorePerLevel[1];
            myData.Level2 = DBManager.scorePerLevel[2];
            myData.Level3 = DBManager.scorePerLevel[3];

            string jsonData = JsonUtility.ToJson(myData);

            StartCoroutine(UpdateHighscoreRequest("http://localhost/UnityProjects/updateHighscore.php", jsonData));
        }
    }

    public void LevelSelect()
    {
        buttonSound.Play();
        StartCoroutine(LoadLevelSelect());
    }

    private IEnumerator LoadLevelSelect()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Level Select");
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

    public void QuitGame()
    {
        buttonSound.Play();
        StartCoroutine(LoadQuitGame());
    }
    private IEnumerator LoadQuitGame()
    {
        yield return new WaitForSeconds(0.2f);
        DBManager.LogOut();
    }

    IEnumerator UpdateHighscoreRequest(string url, string json)
    {
        UnityWebRequest uwr = UnityWebRequest.Post(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        //If there is a network erro
        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        //If there is an error in th php code
        else if (uwr.downloadHandler.text[0] != '0')
        {
            Debug.Log("Highscore Update Failed Error #" + uwr.downloadHandler.text);
        }
        //If sucsessful
        else
        {
            Debug.Log("Highscore Updated");
        }
    }
}
