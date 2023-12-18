using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyDefend : MonoBehaviour
{
    public GameObject shield;

    private float cooldown = 0;
    private bool shieldOn = false;

    private void Update()
    {
        if(!shieldOn)
        {
            cooldown -= Time.deltaTime;
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.name == "Player" && cooldown <= 0)
        {
            cooldown = 13;
            shieldOn = true;
            shield.SetActive(true);
            StartCoroutine(Wait(3));
        }
    }

    //Makes the enemy wait for a given amount of time
    IEnumerator Wait(float time)
    {
        yield return new WaitForSeconds(time);

        //If the player isn't currently dying turn the shield off
        if(!LevelManager.isDying)
        {
            shieldOn = false;
            shield.SetActive(false);
        }
        else
        {
            Wait(0.5f);
        }
    }
}
