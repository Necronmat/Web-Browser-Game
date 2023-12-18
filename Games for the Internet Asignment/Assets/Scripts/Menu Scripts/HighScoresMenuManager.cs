using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class HighScoresMenuManager : MonoBehaviour
{
    public Text loggedInDisplay;
    public Text highScoreTxtBox;
    public AudioSource buttonSound;

    [System.Serializable]
    public class ScoreWrapper
    {
        public List<Player> scoreTable;
    }

    //Data to be recived
    [System.Serializable]
    public class Player
    {
        public string Username;
        public string Highscore;
    }

    //Request the database info stright away
    void Start()
    {
        if (DBManager.LoggedIn)
        {
            loggedInDisplay.text = "Player: " + DBManager.username + " Logged in\nHighscore: " + DBManager.highscore + "\nLevel 1 Score: " + DBManager.scorePerLevel[1] + "\nLevel 2 Score: " + DBManager.scorePerLevel[2] + "\nLevel 3 Score: " + DBManager.scorePerLevel[3];
        }

        StartCoroutine(GetHighscoresRequest("http://localhost/UnityProjects/GetScores.php"));
    }

    IEnumerator GetHighscoresRequest(string url)
    {
        UnityWebRequest uwr = UnityWebRequest.Get(url);
        yield return uwr.SendWebRequest();

        //If there is a network error
        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        //If succseful display the highscores
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            ScoreWrapper highScores = JsonUtility.FromJson<ScoreWrapper>(uwr.downloadHandler.text);

            string highScoreText = "";

            for(int i = 0; i < highScores.scoreTable.Count; ++i)
            {
                highScoreText += highScores.scoreTable[i].Username + ": " + highScores.scoreTable[i].Highscore.ToString() + "\n";
            }

            highScoreTxtBox.text = highScoreText;
        }
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
