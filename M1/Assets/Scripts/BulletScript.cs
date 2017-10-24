using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour {

	public GameObject player;

	void OnCollisionEnter2D(Collision2D coll)
     {
     	//If the player lands on a platform, play the landing animation and set onGround to true
		if (coll.gameObject.tag == "Platform" || coll.gameObject.tag == "Untagged")
		{
			Destroy(gameObject);
		}
		//If the player hits the death plane, then reset the level
		if (coll.gameObject.tag == "Enemy")
		{
			Destroy(gameObject);
			Destroy(coll.gameObject);
			player.GetComponent<CharMovement>().hasJump++;
		}
		if (coll.gameObject.tag == "breakableWall")
		{
			Destroy(gameObject);
			Destroy(coll.gameObject);
		}
     }
}
