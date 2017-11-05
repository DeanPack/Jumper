using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class HeartSystem : MonoBehaviour {

	private int maxHearts = 18;
	public int startHearts = 3;
	public int currentHealth;
	public int maxHealth;
	public int healthPerHeart = 4;
	public Image[] heartImages;
	public Sprite[] heartSprites;
	// Use this for initialization
	void Start ()
	{
		//set current health
		currentHealth = startHearts * healthPerHeart;
		//set max health
		maxHealth = maxHearts * healthPerHeart;
		checkHealthAmount();
	}

	void checkHealthAmount()
	{
		for (int i = 0; i < maxHearts; i++)
		{
			if (startHearts <= i)
			{
				//If we are at three hearts, disable the image for the other ones
				heartImages[i].enabled = false;
			}
			else
			{
				heartImages[i].enabled = true;
			}
		}
		updateHearts();
	}

	void updateHearts()
	{
		bool empty = false;
		int i = 0;

		foreach (Image image in heartImages)
		{
			if (empty)
			{
				image.sprite = heartSprites[0];
			}
			else
			{
				i++;
				if (currentHealth >= i * healthPerHeart)
				{
					image.sprite = heartSprites[heartSprites.Length - 1];
				}
				else
				{
					//this will give us how full the current heart we are on should be
					int currentHeartHealth = (int)(healthPerHeart - (healthPerHeart * i - currentHealth));
					int healthPerImage = healthPerHeart / (heartSprites.Length - 1);
					int imageIndex = currentHeartHealth / healthPerImage;
					image.sprite = heartSprites[imageIndex];
					empty = true;
				}
			}
		}
	}

	public void takeDamage(int damage)
	{
		currentHealth += damage;
		currentHealth = Mathf.Clamp(currentHealth, 0, startHearts * healthPerHeart);
		if (currentHealth < 1)
		{
			//The Player is dead
			SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		}
		updateHearts();
	}

	public void pickupHeart()
	{
		startHearts++;
		currentHealth += 4;
		checkHealthAmount();
	}
}
