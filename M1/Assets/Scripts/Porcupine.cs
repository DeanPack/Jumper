using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Porcupine : MonoBehaviour {

	//get the player object
	public GameObject player;
	public float speed = .05f;
	public float distance = 3.5f;
	private bool facingRight = false;
	public GameObject TurnSensor;
	private float oldPos;
	public Animator animator;

	// Update is called once per frame
	void Update () {
		oldPos = transform.position.x;
		if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("PorcupineUndefending"))
		{
    			// Avoid any reload.
 		}
		else if(distance > Vector3.Distance(player.transform.position, this.transform.position))
		{
			animator.SetInteger("State",1);
		}
		else if(!TurnSensor.GetComponent<ReachingTheEdge>().turn)
		{
			animator.SetInteger("State",0);
			transform.position += Vector3.right * speed;
		}
		else
		{
			animator.SetInteger("State",0);
			speed *= -1;
			transform.position += Vector3.right * speed;
			TurnSensor.GetComponent<ReachingTheEdge>().turn = false;
		}
		flip(oldPos - transform.position.x);
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

     void OnCollisionEnter2D(Collision2D coll)
     {
     	if(coll.gameObject.tag == "Player")
     	{
     		//maybe if I want it to react to the player later
     	}
     	if(coll.gameObject.tag == "Enemy" || coll.gameObject.tag == "Porcupine")
     	{
     		TurnSensor.GetComponent<ReachingTheEdge>().turn = true;
     	}
     	if(coll.gameObject.tag == "Wall")
     	{
     		TurnSensor.GetComponent<ReachingTheEdge>().turn = true;
     	}
     }
}
