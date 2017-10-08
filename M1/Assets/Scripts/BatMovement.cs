using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BatMovement : MonoBehaviour {

	//get the player object
	public GameObject player;
	public float speed = .03f;
	public float distance = 10f;
	private bool facingRight = false;
	// Update is called once per frame
	void Update () {
		//See if the player is close
		if(distance > Vector3.Distance(player.transform.position, this.transform.position))
		{
			//if the player is close, move towards the player
			float oldPos = this.transform.position.x;
			this.transform.position = Vector3.MoveTowards(this.transform.position, player.transform.position, speed);
			float newPos = this.transform.position.x;
			flip(oldPos - newPos);
		}
	}

	void flip(float direction)
     {
     	if(direction > 0 && !facingRight || direction < 0 && facingRight)
     	{
     		facingRight = !facingRight;
     		Vector3 scale = transform.localScale;
     		scale.x *= -1;
     		transform.localScale = scale;
     	}
     }
}
