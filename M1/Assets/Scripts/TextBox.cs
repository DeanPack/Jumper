using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextBox: MonoBehaviour {

	public GameObject textBox;
	public float timeout;
	private float myTimeout;

	public void changeText(string newText)
	{
		textBox.active = true;
		myTimeout = timeout;
		textBox.GetComponent<UnityEngine.UI.Text>().text = newText;
		InvokeRepeating("Timeout", 0, 1f);
	}
	public void refreshText()
	{
		textBox.active = true;
		InvokeRepeating("Timeout", 0, 1f);
	}
	void Timeout()
	{
		myTimeout--;
		if (myTimeout <= 0)
		{
			textBox.active = false;
			CancelInvoke();
		}
	}
}
