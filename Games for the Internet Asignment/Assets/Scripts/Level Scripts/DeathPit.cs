using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathPit : MonoBehaviour
{
    private GameObject PlayerSpawnPoint;

    public AudioSource deathSound;

    private void Start()
    {
        PlayerSpawnPoint = GameObject.Find("Spawn");
    }

    //Respawns the player if they hit this
    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Sends the player back to their spawn point
        if(collision.gameObject.name == "Player")
        {
            deathSound.Play();
            collision.gameObject.GetComponent<ParticleSystem>().Play();
            collision.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
            collision.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
            LevelManager.isDying = true;
            StartCoroutine(RespawnPlayer(collision));
        }
    }

    private IEnumerator RespawnPlayer(Collider2D player)
    {
        yield return new WaitForSeconds(1.0f);
        player.gameObject.transform.position = PlayerSpawnPoint.transform.position;
        player.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
        LevelManager.isDying = false;
    }
}
