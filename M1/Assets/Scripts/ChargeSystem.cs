using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChargeSystem : MonoBehaviour {

	public Image[] chargeImages;
	public Sprite[] batSprites;
	private int nextSprite = 23;
	private int currentImg;
	private int maxImg;
	public int charges;
	public string chargeType;

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

	public void useCharge()
	{
		switch (chargeType)
		{
			case "Bat":
				maxImg = 2;
				if (chargeImages[1].sprite != batSprites[0])
				{
					//Set 2nd image to empty, and put first image to the place that the first image is.
					chargeImages[currentImg].sprite = batSprites[23];
					currentImg = 0;
					CancelInvoke();
				}
				else
				{
					currentImg = 1;
				}
				charges--;
				InvokeRepeating("fillBat",0,.1f);	
			break;
			case "Porcupine":
				maxImg = 1;
				//startingIndex = 24;
			break;
		}
	}
	void fillBat()
	{
		if (nextSprite >= 0)
		{
			chargeImages[currentImg].sprite = batSprites[nextSprite];
			nextSprite--;
		}
		if (nextSprite == -1)
		{
			nextSprite = 23;
			charges++;
			if (currentImg == 0)
			{
				currentImg++;
			}
			else
			{
				CancelInvoke();
			}
			Debug.Log("Current image" + currentImg);
			Debug.Log("Charges" + charges);
		}
	}
}
