using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BouncyMushroom : MonoBehaviour {

	public void stopBouncing()
	{
		GetComponent<Animator>().SetInteger("State", 0);
	}
}
