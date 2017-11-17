using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BreakingStalactite : MonoBehaviour {

	public GameObject player;
	public GameObject particles;
	public GameObject stalactite;
	// Update is called once per frame
	void Update () {
		if (Mathf.Abs(player.transform.position.x) - Mathf.Abs(transform.position.x) < 2 && Mathf.Abs(player.transform.position.y) - Mathf.Abs(transform.position.y) < 4)
		{
			GetComponent<Animator>().SetInteger("State", 1);
		}
	}

	void Fall()
	{
		//Create the particles
		GameObject particle = Instantiate(particles, (transform.position + transform.up/2), Quaternion.identity) as GameObject;
		particle.tag = "Untagged";
		GameObject fall = Instantiate(stalactite, transform.position, Quaternion.identity) as GameObject;
		fall.AddComponent<Rigidbody2D>();
		fall.GetComponent<Rigidbody2D>().mass = 1000;
		Destroy(gameObject);
	}
}
