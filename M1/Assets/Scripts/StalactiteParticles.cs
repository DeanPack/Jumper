using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StalactiteParticles : MonoBehaviour {

	public void Done()
	{
		if(gameObject.tag != "EditorOnly")
		Destroy(this.gameObject);
	}
}
