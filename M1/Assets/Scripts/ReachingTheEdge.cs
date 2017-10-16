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
		}
	}
	void OnCollisionEnter2D(Collision2D coll)
     {
     	if(coll.gameObject.tag == "Enemy" || coll.gameObject.tag == "Porcupine")
     	{
     		turn = true;
     	}
		if(coll.gameObject.tag == "Wall")
     	{
     		turn = true;
     	}
     }
}
