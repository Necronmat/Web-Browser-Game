using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class LevelExit : MonoBehaviour
{
    
    public GameObject doorText;

    //List of switches on the level
    public List<GameObject> switches;

    //The logic gate type
    public enum GateType
    {
        AND,
        OR,
        NOT
    }

    public GateType logicGate;

    //If the door is open
    private bool isOpen = true;

    //If the player is near
    private bool isNear = false;

    //When the player is near the door check if the correct logic gate settings have been met by the swwitches
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            //Lets the player finish the level if the correct logic gate inputs have been met
            int numOn = 0;

            switch (logicGate)
            {
                //If any switch is tunred off do not exit
                case GateType.AND:
                    foreach (GameObject go in switches)
                    {
                        if (!go.GetComponent<PowerSwitches>().isOn)
                        {
                            isOpen = false;
                        }
                        else
                        {
                            numOn++;
                        }
                    }

                    if(numOn == switches.Count)
                    {
                        isOpen = true;
                    }
                    break;

                //If any switch is turned on, the player can exit
                case GateType.OR:
                    foreach (GameObject go in switches)
                    {
                        if (go.GetComponent<PowerSwitches>().isOn)
                        {
                            numOn++;
                        }
                    }

                    if (numOn == 0)
                    {
                        isOpen = false;
                    }
                    else
                    {
                        isOpen = true;
                    }
                    break;

                //If any gate is turned on, do not exit
                case GateType.NOT:
                    foreach (GameObject go in switches)
                    {
                        if (go.GetComponent<PowerSwitches>().isOn)
                        {
                            isOpen = false;
                            numOn++;
                        }
                    }

                    if(numOn == 0)
                    {
                        isOpen = true;
                    }
                    break;
            }

            //Display if the door is open of not
            if (isOpen)
            {
                doorText.GetComponent<Text>().text = "Open";
            }
            else
            {
                doorText.GetComponent<Text>().text = "Locked";
            }

            isNear = true;
            doorText.SetActive(true);
        }
    }

    //Hide the door text
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            isNear = false;
            doorText.SetActive(false);
        }
    }

    //If the door is open the player can leave the level
    //Sets the final score of the level when levaing
    private void Update()
    {
        if (isNear && Input.GetKey(KeyCode.E))
        {
            if(isOpen)
            {
                LevelManager.currentScore -= (int)LevelManager.timer;
                LevelManager.currentScore *= LevelManager.scoreMultiplier;

                if(LevelManager.currentScore < 0)
                {
                    LevelManager.currentScore = 0;
                }

                SceneManager.LoadScene("Game Over");
            }

            isNear = false;
        }
    }
}


