using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenuManager : MonoBehaviour
{
    //login text
    public Text loggedInDisplay;

    //Button sound
    public AudioSource buttonSound;

    //Menu buttons
    public Button registerBtn;
    public Button loginBtn;
    public Button startBtn;
    public Button changeCharacterBtn;
    public Button fbLoginBtn;
    public Button logoutBtn;

    //Changes what buttons are active based on if the player is logged in or not
    private void Start()
    {
        if(DBManager.LoggedIn)
        {
            loggedInDisplay.text = "Player: " + DBManager.username + " Logged in\nHighscore: " + DBManager.highscore + "\nLevel 1 Score: " + DBManager.scorePerLevel[1] + "\nLevel 2 Score: " + DBManager.scorePerLevel[2] + "\nLevel 3 Score: " + DBManager.scorePerLevel[3];
            startBtn.interactable = true;
            registerBtn.interactable = false;
            loginBtn.interactable = false;
            changeCharacterBtn.interactable = true;
            fbLoginBtn.interactable = false;
            logoutBtn.interactable = true;
        }
    }

    public void StartGame()
    {
        buttonSound.Play();

        if(DBManager.levelsBeaten > 0)
        {
            StartCoroutine(LoadLevelSelect());
        }
        else
        {
            StartCoroutine(LoadTutorial());
        }
    }
    private IEnumerator LoadLevelSelect()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Level Select");
    }

    private IEnumerator LoadTutorial()
    {
        yield return new WaitForSeconds(0.2f);
        LevelManager.currentScore = 9999;
        LevelManager.scoreMultiplier = 1;
        LevelManager.levelNum = 0;
        LevelManager.timer = 0;
        SceneManager.LoadScene("Tutorial");
    }

    public void LoginMenu()
    {
        buttonSound.Play();
        StartCoroutine(LoadLoginMenu());
    }

    private IEnumerator LoadLoginMenu()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Login Menu");
    }

    public void RegisterMenu()
    {
        buttonSound.Play();
        StartCoroutine(LoadRegisterMenu());
    }
    private IEnumerator LoadRegisterMenu()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Register Menu");
    }

    public void Logout()
    {
        buttonSound.Play();
        StartCoroutine(LoadLogOut());
    }

    private IEnumerator LoadLogOut()
    {
        yield return new WaitForSeconds(0.2f);
        DBManager.LogOut();
    }

    public void HighScores()
    {
        buttonSound.Play();
        StartCoroutine(LoadHighScores());
    }

    private IEnumerator LoadHighScores()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Highscores");
    }

    public void ChangeCharacter()
    {
        buttonSound.Play();
        StartCoroutine(LoadChangeCharacter());
    }

    private IEnumerator LoadChangeCharacter()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Change Character");
    }
}
