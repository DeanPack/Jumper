using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundTester : MonoBehaviour {

	public bool onGround = false;
	public bool falling = true;
	public Animator animator;
	public GameObject player;
	public GameObject soundHandler;
	private SoundHandler soundScript;
	private CharMovement charScript;
	public AudioSource audioSource;
	public AudioClip[] audioClip;

	void Start()
	{
		soundScript = soundHandler.GetComponent<SoundHandler>();
		charScript = player.GetComponent<CharMovement>();
	}

	void OnCollisionEnter2D(Collision2D coll)
	{
		if (coll.gameObject.tag == "Platform")
		{
			onGround = true;
			falling = false;
			animator.SetInteger("State", 4);
			charScript.playAnim = true;
			soundScript.PlaySound(1);
		}
	}
	void OnCollisionExit2D(Collision2D coll)
	{
		if (coll.gameObject.tag == "Platform")
		{
			onGround = false;
			charScript.moving = false;
		}
	}

}
