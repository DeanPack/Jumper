using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PunchingMushroom : MonoBehaviour {
	public float distance = 2f;
	public GameObject leftArm;
	public GameObject rightArm;
	public GameObject player;
	bool facingRight = false;
	void Update()
	{
		if (distance > Vector3.Distance(player.transform.position, this.transform.position) && player.transform.position.y < this.transform.position.y + .1f)
		{
			GetComponent<Animator>().SetInteger("State", 2);
		}
		flip(player.transform.position.x - transform.position.x);
	}

	public void throwPunch()
	{
		if (facingRight)
			rightArm.active = true;
		else
			leftArm.active = true;
		GetComponent<Animator>().SetInteger("State", 0);
	}

	public void deactivatePunch()
	{
		rightArm.active = false;
		leftArm.active = false;
	}
	public void stopBouncing()
	{
		GetComponent<Animator>().SetInteger("State", 0);
		Debug.Log("here");
	}

	void flip(float direction)
	{
		if (direction > 0 && !facingRight || direction < 0 && facingRight)
		{
			facingRight = !facingRight;
			Vector3 scale = transform.localScale;
			scale.x *= -1;
			transform.localScale = scale;
		}
	}
}
