using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    //Player RigidBody
    private Rigidbody2D rb;
    //Players Animations
    private Animator ani;
    //Players particles
    private ParticleSystem deathParticles;

    //Is the player on the ground
    public bool isGrounded = false;
    //The players movement speed
    public float playerSpeed = 1;
    //The Players jump height
    public float playerJumpHeight = 10;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        ani = GetComponent<Animator>();
        deathParticles = GetComponent<ParticleSystem>();
        ani.SetInteger("PlayerSprite", DBManager.playerSprite);
    }

    // Update is called once per frame
    void Update()
    {
        //Movement Controls
        //Can't move if dying
        if(!LevelManager.isDying)
        {
            //Moves the player right
            if (Input.GetKey(KeyCode.D))
            {
                transform.localScale = new Vector3(1, 1, 1);
                rb.velocity = new Vector2(playerSpeed, rb.velocity.y);
                ani.SetInteger("AnimationState", 1);
            }
            //Moves the player Left
            else if (Input.GetKey(KeyCode.A))
            {
                transform.localScale = new Vector3(-1, 1, 1);
                rb.velocity = new Vector2(playerSpeed * -1.0f, rb.velocity.y);
                ani.SetInteger("AnimationState", 1);
            }
            //Sets the idle animation if standing still
            else if (rb.velocity == Vector2.zero)
            {
                ani.SetInteger("AnimationState", 0);
                isGrounded = true;
            }
            //Makes the player jump
            if (Input.GetKeyDown(KeyCode.W))
            {
                //Can only jump if on the ground
                if (isGrounded)
                {
                    rb.AddForce(Vector3.up * playerJumpHeight, ForceMode2D.Impulse);
                    isGrounded = false;
                }
            }
        }        
    }
}
