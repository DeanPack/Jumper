using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundHandler : MonoBehaviour {

	public AudioClip[] audioClips;
	public AudioSource Audio;
	// Update is called once per frame
	public void PlaySound(int index)
	{
		Audio.clip = audioClips[index];
		Audio.Play();
	}
}
