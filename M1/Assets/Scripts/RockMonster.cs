using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RockMonster : MonoBehaviour {

	public bool facingRight = false;
	private float oldPos;
	public Animator animator;
	public float distance;
	public GameObject player;
	public float speed;
	public GameObject TurnSensor;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		oldPos = transform.position.x;
		if (this.animator.GetCurrentAnimatorStateInfo(0).IsName("PorcupineUndefending"))
		{
    			// Avoid any reload.
 		}
		else if(distance > Vector3.Distance(player.transform.position, this.transform.position) && player.transform.position.y >= this.transform.position.y)
		{
			//animator.SetInteger("State",1);
		}
		else if(!TurnSensor.GetComponent<ReachingTheEdge>().turn)
		{
			//animator.SetInteger("State",0);
			transform.position += Vector3.right * speed;
		}
		else
		{
			//animator.SetInteger("State",0);
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
}
