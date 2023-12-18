using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Holds all relevent information about the level
//Is set when loading a level.
public static class LevelManager
{
    public static int levelNum;

    public static int currentScore;
    public static int scoreMultiplier;
    public static float timer;

    public static int numOfEnemies;
    public static int maxNumOfEnemies;

    public static bool isDying = false;
}
