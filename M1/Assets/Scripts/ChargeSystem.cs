using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChargeSystem : MonoBehaviour {

	public Image[] chargeImages;
	public Sprite[] chargeSprites;
	private int nextSprite = 23;
	// Use this for initialization
	void Start () {
		foreach(Image image in chargeImages)
		{
			image.enabled = false;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void useCharge(string chargeType)
	{
		int startingIndex = 0;
		int length = 0;
		switch (chargeType)
		{
			case "Bat":
				InvokeRepeating("fillBat",2f,.01f);
			break;
			case "Porcupine":
				startingIndex = 24;
			break;
		}
	}
	void fillBat()
	{
		chargeImages[1].sprite = chargeSprites[nextSprite];
		//nextSprite--;
	}
}
