using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour
{
    //List of enemy prefabs that can be spawned
    public List<GameObject> enemyList;

    //How far from its spawn point the enemy will move
    public float patrolRange = 5;
    //The enemys movement speed
    public float enemySpeedRange = 5;
    //Countdown for spawning a new enemy
    private float countdown;
    //The latest enemy spawned
    private GameObject newEnemy;

    //Sets the initail countdown for the first enemy spawn
    void Start()
    {
        countdown = 2.0f;
    }

    void Update()
    {
        //lowers the countdoawn
        countdown -= Time.deltaTime;

        //Only spawn a new enemy if the countdown has been reached and the max number of enemys for
        //this level has not been reached
        if (countdown <= 0 && LevelManager.numOfEnemies < LevelManager.maxNumOfEnemies)
        {
            //Randomly set the stats of the new enemy
            newEnemy = Instantiate(enemyList[Random.Range(0, enemyList.Count)]);

            newEnemy.GetComponent<EnemyMovement>().spawn = transform.position;

            newEnemy.GetComponent<EnemyMovement>().patrolRange = Random.Range(0, patrolRange);

            newEnemy.GetComponent<EnemyMovement>().direction = Random.Range(0, 10);

            if(newEnemy.GetComponent<EnemyMovement>().direction >= 5)
            {
                newEnemy.GetComponent<EnemyMovement>().direction = 1;
                newEnemy.transform.localScale = new Vector3(1, 1, 1);
            }
            else
            {
                newEnemy.GetComponent<EnemyMovement>().direction = -1;
                newEnemy.transform.localScale = new Vector3(-1, 1, 1);
            }

            newEnemy.GetComponent<EnemyMovement>().enemySpeed = Random.Range(1, enemySpeedRange);

            //Makes the enemy affected by gravity for a short time so it lands on the floor
            newEnemy.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;

            LevelManager.numOfEnemies++;

            countdown = Random.Range(5.0f, 20.0f);
        }
    }
}
