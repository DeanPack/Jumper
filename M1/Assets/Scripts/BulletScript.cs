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
		if (coll.gameObject.tag == "Bat")
		{
			if (player.GetComponent<CharMovement>().firstTime == 0)
			{
				player.GetComponent<CharMovement>().firstTime++;
				player.GetComponent<TextBox>().changeText("Press shift while midair to use bat powers");
			}
			Destroy(gameObject);
			Destroy(coll.gameObject);
			//enable Bat images
			player.GetComponent<ChargeSystem>().chargeImages[0].enabled = true;
			player.GetComponent<ChargeSystem>().chargeImages[1].enabled = true;
			player.GetComponent<ChargeSystem>().chargeType = "Bat";
			player.GetComponent<ChargeSystem>().charges = 2;
		}
		if (coll.collider.gameObject.tag == "rockGem")
		{
			Debug.Log("HERE");
			Destroy(gameObject);
			Destroy(coll.collider.gameObject.transform.parent.gameObject);
			Destroy(coll.collider.gameObject);
			//enable Bat images
		}
		if (coll.gameObject.tag == "breakableWall")
		{
			Destroy(gameObject);
			Destroy(coll.gameObject);
		}
		Destroy(gameObject);
     }
}
