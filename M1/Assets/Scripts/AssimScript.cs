using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssimScript : MonoBehaviour {

	public GameObject player;
	private Vector3 v3Pos;
	private float angle;
	private float distance = .24f;

	// Update is called once per frame
	void Update () {
		// Project the mouse point into world space at
		//   at the distance of the player.
		v3Pos = Input.mousePosition;
		v3Pos.z = (player.transform.position.z - Camera.main.transform.position.z);
		v3Pos = Camera.main.ScreenToWorldPoint(v3Pos);
		v3Pos = v3Pos - player.transform.position;
		angle = Mathf.Atan2(v3Pos.y, v3Pos.x) * Mathf.Rad2Deg;
		if (angle < 0.0f) angle += 360.0f;
		transform.localEulerAngles = new Vector3(0, 0, angle);
		//As I'm transforming the position, I need to make sure that the hypotenuse remains .24 units
		float xPos = Mathf.Cos(Mathf.Deg2Rad * angle) * distance;
		float yPos = Mathf.Sin(Mathf.Deg2Rad * angle) * distance;
		transform.localPosition = new Vector3(player.transform.position.x + xPos * 4, player.transform.position.y + yPos * 4, 0);
	}

	void stopShooting()
	{
		GetComponent<Animator>().SetInteger("State",0);
	}
}
