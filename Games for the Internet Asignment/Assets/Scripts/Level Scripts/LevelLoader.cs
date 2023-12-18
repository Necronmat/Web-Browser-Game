using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelLoader : MonoBehaviour
{
    //Txt to be displayed
    public GameObject levelText;

    //Level info for the level manager
    public string level;
    public string levelName;
    public int levelNum;
    public int startingScore;
    public int maxNumOfEnemies;

    //If the player is near
    private bool isNear = false;

    //Displays the door is locked if the correct number of levels has not been beaten
    private void Start()
    {
        if(DBManager.levelsBeaten < levelNum)
        {
            levelName = "Locked";
        }

        //Sets the display text to the level and its name
        levelText.GetComponent<Text>().text = "Level: " + levelNum + "\n" + levelName;
    }

    //Shows the level text when the player is near
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            isNear = true;
            levelText.SetActive(true);
        }
    }

    //Hides the level text when the player leaves
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            isNear = false;
            levelText.SetActive(false);
        }
    }

    //If the player enters the level set the level manager data to the correct data for this level
    private void Update()
    {
        if (isNear && DBManager.levelsBeaten >= levelNum && Input.GetKey(KeyCode.E))
        {
            LevelManager.currentScore = startingScore;
            LevelManager.scoreMultiplier = 1;
            LevelManager.levelNum = levelNum;
            LevelManager.timer = 0;
            LevelManager.maxNumOfEnemies = maxNumOfEnemies;
            LevelManager.isDying = false;
            SceneManager.LoadScene(level);

            isNear = false;
        }
    }
}
