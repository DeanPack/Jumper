using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallingStalactite : MonoBehaviour {

	public GameObject stalactitePlatform;
	public GameObject particles;
	void OnCollisionEnter2D(Collision2D coll)
	{
		if (coll.gameObject.tag == "Platform")
		{
			GameObject particle = Instantiate(particles, transform.position + transform.up * -0.8f, Quaternion.identity) as GameObject;
			particle.transform.localScale *= -1;
			particle.tag = "Untagged";
			GameObject platform = (GameObject)Instantiate(stalactitePlatform, transform.position, Quaternion.identity);
			Destroy(gameObject);
		}
	}
}
