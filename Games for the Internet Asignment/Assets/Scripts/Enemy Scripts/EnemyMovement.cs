using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    //The Players respawn point
    private GameObject PlayerSpawnPoint;

    //The hitbox of this enemy
    public GameObject hitbox;

    //Souns to be played on death
    public AudioSource playerDeathSound;
    public AudioSource deathSound;

    //the enemys animations
    public Animator ani;
    
    //The enemys particles
    private ParticleSystem deathParticles;
    

    //Spawn point of the enemy
    public Vector3 spawn = new Vector3(0, 0, 0);
    //How far from its spawn point the enemy will move
    public float patrolRange = 5;
    //The current direction the enemy is travelling
    public float direction = 1;
    //The enemys movement speed
    public float enemySpeed = 1;

    //Bool to know when to move
    public bool isMoving = true;

    //Bool to know if the enemy is grounded
    private bool isGrounded = false;

    // Start is called before the first frame update
    void Start()
    {
        //move the ememy to its spawn location
        transform.position = spawn;

        PlayerSpawnPoint = GameObject.Find("Spawn");
        ani = GetComponent<Animator>();
        ani.SetInteger("AnimationState", 1);
        deathParticles = GetComponent<ParticleSystem>();
    }

    // Update is called once per frame
    void Update()
    {
        //Change direction if the enemy has gone to its patrol range
        if(isMoving)
        {
            //If the enemy reaches either of its patrol limits, turn around and wait a couple seconds 
            if (transform.position.x <= spawn.x - patrolRange)
            {
                direction = 1;
                ani.SetInteger("AnimationState", 0);
                isMoving = false;
                StartCoroutine(Wait(2));
                transform.localScale = new Vector3(1, 1, 1);
            }
            else if (transform.position.x >= spawn.x + patrolRange)
            {
                direction = -1;
                ani.SetInteger("AnimationState", 0);
                isMoving = false;
                StartCoroutine(Wait(2));
                transform.localScale = new Vector3(-1, 1, 1);
            }

            //Moves the enemy
            transform.position += new Vector3(direction * enemySpeed * Time.deltaTime, 0, 0);
        }        
    }

    //Makes the enemy wait for a given amount of time
    IEnumerator Wait(float time)
    {
        yield return new WaitForSeconds(time);

        ani.SetInteger("AnimationState", 1);
        isMoving = true;

    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        //Sends the player back to their spawn point on collision
        if (collision.gameObject.name == "Player")
        {
            if(LevelManager.isDying == false)
            {
                playerDeathSound.Play();
                collision.gameObject.GetComponent<ParticleSystem>().Play();
                collision.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
                collision.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
                LevelManager.isDying = true;
                StartCoroutine(RespawnPlayer(collision));
            }            
        }

        //Sets the rigidbody type once the enemy hits the floor
        if(!isGrounded && collision.gameObject.tag == "Platform")
        {
            GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
        }
    }

    //Respawns the player after a given amount of time
    private IEnumerator RespawnPlayer(Collision2D player)
    {
        yield return new WaitForSeconds(1.0f);
        player.gameObject.transform.position = PlayerSpawnPoint.transform.position;
        player.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
        LevelManager.isDying = false;
    }

    //Kills this enemy if the player jumps on its trigger
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.name == "PlayerFeet")
        {
            deathSound.Play();
            deathParticles.Play();
            hitbox.SetActive(false);
            LevelManager.numOfEnemies--;
            StartCoroutine(DestroyEnemy());
        }
    }

    //Destroys this after a given amount of time
    private IEnumerator DestroyEnemy()
    {
        yield return new WaitForSeconds(1.0f);
        Destroy(transform.gameObject);
    }
}
