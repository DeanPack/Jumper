using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReachingTheEdge : MonoBehaviour {

	public bool turn= false;
	void OnCollisionExit2D(Collision2D coll)
	{
		if (coll.gameObject.tag == "Platform")
		{
			turn = true;
			Debug.Log("WOAH!");
		}
		Debug.Log("WOAH!");
	}
}
