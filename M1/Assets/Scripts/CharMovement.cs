using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//This script manages the characters movement and actions
public class CharMovement : MonoBehaviour {

	public float speed = 6f;
	public float height = 300f;
	//A reference to the bullet object so we can replicate it
 	public GameObject bullet;
 	//This is the characters rigidbody, how we access the physics of the character
 	public Rigidbody2D rb;
 	public int hasJump = 0;
 	//This reference to the animator allows us to access the animations and state variables
 	public Animator animator;
 	public Animator assimAnimator;
 	public bool moving = false;
 	private bool facingRight = true;
 	public bool playAnim = false;
	public GameObject assimilator;
	private HeartSystem heartScript;
	private ChargeSystem chargeScript;
	private GroundTester groundScript;
	public GameObject soundHandler;
	public GameObject groundTester;
	private SoundHandler soundScript;
	private TextBox textScript;
	public AudioSource audioSource;
	public AudioClip[] audioClip;
	public int jumpID = 0;
	public float startTime = 0;
	private bool hasGun = false;
	public Texture2D cursorTexture;
	public int firstTime = 0;
	private int tutorialTime;

	void Start()
	{
		//Get the heart system
		heartScript = gameObject.GetComponent<HeartSystem>();
		//get the text box
		textScript = gameObject.GetComponent<TextBox>();
		//Get the charge system
		chargeScript = gameObject.GetComponent<ChargeSystem>();
		soundScript = soundHandler.GetComponent<SoundHandler>();
		groundScript = groundTester.GetComponent<GroundTester>();
	}

	//this update function is run every frame
	void Update()
	{
		moving = false;
		//This means the character is falling
		if (rb.velocity.y < -0.1)
		{
			rb.gravityScale = 1f;
			animator.SetInteger("State", 3);
			groundScript.falling = true;
		}
		if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
		{
			rb.velocity = new Vector2(-speed, rb.velocity.y);
			//only play the running animation if the user is on the ground
			if (groundScript.onGround)
			{
				changeAnimation(1);
			}
			moving = true;
			//flip the animation to face left
			flip(-1);
		}
		if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
		{
			rb.velocity = new Vector2(speed, rb.velocity.y);
			//only play the running animation if the user is on the ground
			if (groundScript.onGround)
			{
				changeAnimation(1);
			}
			moving = true;
			//flip the animation to face right
			flip(1);
		}
		if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.Space))
		{
			jump((float)Time.time, jumpID);
			//Play the jumping animation
			moving = true;
		}
		if (Input.GetKeyDown(KeyCode.LeftShift))
		{
			useAbility();
		}
		if (hasGun)
		{
			Cursor.SetCursor(cursorTexture, new Vector2(cursorTexture.width / 2, cursorTexture.height / 2), CursorMode.Auto);
			if (Input.GetMouseButtonDown(0))
			{
				Vector3 direction = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
				direction.Normalize();
				float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
				//show the assimilator firing animation
				assimAnimator.SetInteger("State", 1);
				soundScript.PlaySound(3);
				//Spawn the bullet in front of the assimilator
				GameObject projectile = (GameObject)Instantiate(bullet, assimilator.transform.position + direction * 2, Quaternion.identity);
				projectile.GetComponent<Rigidbody2D>().velocity = new Vector2(Mathf.Cos(Mathf.Deg2Rad * angle),Mathf.Sin(Mathf.Deg2Rad * angle)) * speed * 5;
			}
		}
		//If nothing is being pressed, play the idle animation
		if (rb.velocity.x < (speed) && rb.velocity.x >(-speed))
			rb.velocity = new Vector2(0, rb.velocity.y);
		changeAnimation(0);
     }

     //This is to make sure that the landing animation finishes before starting another animation
     void changeAnimation(int state)
     {
		if (groundScript.onGround && !moving && !playAnim && !groundScript.falling)
         {
         	animator.SetInteger("State",state);
			//InvokeRepeating("Timeout", 0, 1f);
         }
         else
         {
			//CancelInvoke();
			playAnim = false;
         }
     }

     //This is automatically called when the player enters a collision with an object
     void OnCollisionEnter2D(Collision2D coll)
     {
		if (coll.gameObject.tag == "TutorialControls")
		{
			textScript.changeText("Use A and D to move left and right");
			Destroy(coll.gameObject);
		}
		if (coll.gameObject.tag == "TutorialJump")
		{
			textScript.changeText("Press space to jump");
			Destroy(coll.gameObject);
		}
		//Pick up a coin
		if (coll.gameObject.tag == "MushroomTop")
		{
			rb.AddForce(new Vector2(0, 500));
			coll.gameObject.GetComponent<Animator>().SetInteger("State", 1);
			animator.SetInteger("State", 2);
			soundScript.PlaySound(0);
		}
		if (coll.gameObject.tag == "MushroomPunch")
		{
			heartScript.takeDamage(-1);
			rb.AddForce(new Vector3(transform.localScale.x / -10, 8, 0) * 50);
		}
		if (coll.gameObject.tag == "Coin")
		{
			Destroy(coll.gameObject);
			soundScript.PlaySound(2);
		}
		if (coll.gameObject.tag == "Gun")
		{
			//pick up the gun
			Destroy(coll.gameObject);
			hasGun = true;
			assimilator.active = true;
			textScript.changeText("Left click to shoot");
		}
		//If the player hits the death plane, then reset the level
		if (coll.gameObject.tag == "Respawn")
		{
			SceneManager.LoadScene("Level1");
		}
		if (coll.gameObject.tag == "Porcupine")
		{
			//Take Damage
			heartScript.takeDamage(-1);
			rb.AddForce(new Vector3(transform.localScale.x/-4,1,0) * 50);
		}
		if (coll.gameObject.tag == "rockMonster")
		{
			//Take Damage
			heartScript.takeDamage(-1);
			rb.AddForce(new Vector3(transform.localScale.x/-4,1,0) * 50);
		}
		if (coll.gameObject.tag == "Bat")
		{
			//Take Damage
			heartScript.takeDamage(-2);
			rb.AddForce(new Vector3(transform.localScale.x / -4, 1, 0) * 50);
		}

		if (coll.gameObject.tag == "Spike")
		{
			//Take Damage
			heartScript.takeDamage(-1);
			rb.AddForce(new Vector3(transform.localScale.x / -1, 4, 0) * 50);
		}
		//The Player has reached the exit
		if (coll.gameObject.tag == "Finish")
		{
			Debug.Log("exit");
			SceneManager.LoadScene("Level 2");
		}
		if (coll.gameObject.tag == "HeartContainer")
		{
			Debug.Log("newHeart");
			Destroy(coll.gameObject);
			heartScript.pickupHeart();
		}
		if (coll.gameObject.tag == "Heart")
		{
			Destroy(coll.gameObject);
			heartScript.takeDamage(4);
		}
	}

     void jump(float time, int currJump)
     {
		if (groundScript.onGround)
     	{
			startTime = time;
			groundScript.onGround= false;
			animator.SetInteger("State", 2);
			soundScript.PlaySound(0);
			rb.AddForce(Vector3.up * height);
			rb.gravityScale = 1f;
		}
		//See if the player is still on the same jump
     	else if(currJump == jumpID && Time.time - startTime < .25)
     	{
			rb.gravityScale = 1 - (Time.time - startTime);
			rb.AddForce(Vector3.up * 5);
		}
     }

     void flip(int direction)
     {
     	if(direction > 0 && !facingRight || direction < 0 && facingRight)
     	{
     		facingRight = !facingRight;
     		Vector3 scale = transform.localScale;
     		scale.x *= -1;
     		transform.localScale = scale;
     	}
     }

	void playFootstep()
	{
		soundScript.PlaySound(4);
	}

	void useAbility()
	{
		if(!groundScript.onGround && chargeScript.charges > 0)
		{
			animator.SetInteger("State", 5);
			//soundScript.PlaySound(0);
			rb.velocity = new Vector2(0, 0);
			rb.AddForce(Vector3.up * height*1f);
			assimAnimator.SetInteger("State", 2);
			chargeScript.useCharge();
		}
	}
	/*
	void Timeout()
	{
		tutorialTime--;
		if (tutorialTime < 0)
		{
			textScript.refreshText();
			tutorialTime = 5;
			CancelInvoke();
		}
	}
	*/
}
