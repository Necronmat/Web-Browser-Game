using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGrounded : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        //The player is grounded if on a platform
        if(collision.tag == "Platform")
        {
            GetComponentInParent<PlayerMovement>().isGrounded = true;
        }
    }
}
