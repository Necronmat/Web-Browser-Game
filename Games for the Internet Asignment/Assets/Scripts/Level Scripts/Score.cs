using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    private Text ScoreText;

    // Start is called before the first frame update
    void Start()
    {
        ScoreText = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        //Makes sure the score isn't negative
        if(LevelManager.currentScore - (int)LevelManager.timer < 0)
        {
            ScoreText.text = "SCORE: 0";
        }
        else
        {
            ScoreText.text = "SCORE: " + ((LevelManager.currentScore - (int)LevelManager.timer) * LevelManager.scoreMultiplier);
        }
    }
}
