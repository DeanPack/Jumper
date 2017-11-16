using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BreakingStalactite : MonoBehaviour {

	public GameObject player;
	public GameObject particles;
	public GameObject stalactite;
	// Update is called once per frame
	void Update () {
		if (Mathf.Abs(player.transform.position.x) - Mathf.Abs(transform.position.x) < 2)
		{
			GetComponent<Animator>().SetInteger("State", 1);
		}
	}

	void Fall()
	{
		//Create the particles
		GameObject particle = (GameObject)Instantiate(particles, transform.position + transform.up/2, Quaternion.identity);
		particle.tag = "Untagged";
		GameObject fall = (GameObject)Instantiate(stalactite, transform.position, Quaternion.identity);
		fall.AddComponent<Rigidbody2D>();
		Destroy(gameObject);
	}
}
