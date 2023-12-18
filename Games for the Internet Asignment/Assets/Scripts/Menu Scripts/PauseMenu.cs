using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    //IF the game is paused or not
    public static bool isPaused = false;

    //The pause menu
    public GameObject pauseMenu;

    //The normal game UI
    public GameObject normalUI;

    //Button sound
    public AudioSource buttonSound;
    //Level and puase music
    public AudioSource pauseMusic;
    public AudioSource LevelMusic;

    //Start unpaused
    private void Start()
    {
        Continue();
        pauseMusic.Play();
        pauseMusic.Pause();
    }

    //On esc press change if the game is paused
    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            if(isPaused)
            {
                Continue();
            }
            else
            {
                Pause();
            }
        }
    }

    //change the Music time sclae and set whcih UI is active
    public void Continue()
    {
        LevelMusic.UnPause();
        pauseMusic.Pause();
        pauseMenu.SetActive(false);
        normalUI.SetActive(true);
        Time.timeScale = 1.0f;
        isPaused = false;
    }

    //change the Music time sclae and set whcih UI is active
    public void Pause()
    {
        LevelMusic.Pause();
        pauseMusic.UnPause();
        pauseMenu.SetActive(true);
        normalUI.SetActive(false);
        Time.timeScale = 0.0f;
        isPaused = true;
    }

    //Loads the level selcet
    public void LevelSelect()
    {
        Continue();
        buttonSound.Play();
        StartCoroutine(LoadLevelSelect());
    }

    private IEnumerator LoadLevelSelect()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Level Select");
    }

    //Loads the Main Menu
    public void MainMenu()
    {
        Continue();
        buttonSound.Play();
        StartCoroutine(LoadMainMenu());
    }

    private IEnumerator LoadMainMenu()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Main Menu");
    }

    //Logs the player out and returns to the main menu
    public void Logout()
    {
        Continue();
        buttonSound.Play();
        StartCoroutine(LoadLogOut());
    }

    private IEnumerator LoadLogOut()
    {
        yield return new WaitForSeconds(0.2f);
        DBManager.LogOut();
    }
}
