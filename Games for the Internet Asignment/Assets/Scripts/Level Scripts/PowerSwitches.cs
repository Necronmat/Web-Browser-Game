using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class PowerSwitches : MonoBehaviour
{
    public AudioSource switchSound;

    //Bool for if the switch is on
    public bool isOn = false;

    //bool for if the player is near
    private bool isNear = false;

    //The tilemap of the switch
    [SerializeField]
    private Tilemap map;

    //The on buuton sprite
    [SerializeField]
    private TileBase onButton;

    //The on buuton sprite
    [SerializeField]
    private TileBase offButton;

    //Sets the correct sprite when first made
    private void Start()
    {
        if (isOn)
        {
            map.SetTile(new Vector3Int(0,-1,0), onButton);
        }
        else
        {
            map.SetTile(new Vector3Int(0, -1, 0), offButton);
        }
    }

    //Sets is near to true when the player enters near it
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            isNear = true;
        }
    }

    //Set is near to false when the player leaves
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Player")
        {
            isNear = false;
        }
    }

    //Spawns the ison position and the correct sprite
    private void Update()
    {
        if (isNear && Input.GetKey(KeyCode.E))
        {
            switchSound.Play();
            isOn = !isOn;

            if (isOn)
            {
                map.SetTile(new Vector3Int(0, -1, 0), onButton);
            }
            else
            {
                map.SetTile(new Vector3Int(0, -1, 0), offButton);
            }
            isNear = false;
        }
    }
}
