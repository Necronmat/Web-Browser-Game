using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    public AudioSource pickUpSound;

    public GameObject collider;

    public int rotationSpeed = 20;

    private bool pickedUp = false;

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0, rotationSpeed * Time.deltaTime, 0);
    }

    //Incrase the levels score multipleir by 1 when picked up then dissapear
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(!pickedUp)
        {
            if (collision.tag == "Player")
            {
                pickedUp = true;
                collider.SetActive(false);
                pickUpSound.Play();
                LevelManager.scoreMultiplier++;
                StartCoroutine(DestroyCoin());
            }
        }                   
    }

    private IEnumerator DestroyCoin()
    {
        yield return new WaitForSeconds(0.3f);
        Destroy(transform.gameObject);
    }
}
