using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//Holds all relevent player info from the database
public static class DBManager
{
    //The number of levels + the tutorial (level 0)
    public const int NUM_OF_LEVELS = 4;

    //Username
    public static string username;
    //Number of levels beaten
    public static int levelsBeaten;
    //The Score of each level
    public static int[] scorePerLevel = new int[NUM_OF_LEVELS];
    //The combined highscore of the levels
    public static int highscore;
    //The players chosen charachter
    public static int playerSprite;

    //Checks if a new personal highscore has been reached
    public static bool CheckHighscore()
    { 
        if(scorePerLevel[LevelManager.levelNum] < LevelManager.currentScore)
        {
            scorePerLevel[LevelManager.levelNum] = LevelManager.currentScore;
            UpdateHighscore();

            return true;
        }

        return false;
    }

    //updates the highscore locally not on the database
    public static void UpdateHighscore()
    {
        int temp = 0;

        for(int i = 1; i < NUM_OF_LEVELS; ++i)
        {
            temp += scorePerLevel[i];
        }

        highscore = temp;
    }

    //Returns if a user is logged in
    public static bool LoggedIn { get { return username != null; } }

    //logs the user out and sends them to the main menu
    public static void LogOut()
    {
        username = null;
        SceneManager.LoadScene("Main Menu");
    }
}
