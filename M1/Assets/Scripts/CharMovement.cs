using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//This script manages the characters movement and actions
public class CharMovement : MonoBehaviour {

	public float speed = 4f;
	public float height = 250f;
	//A reference to the bullet object so we can replicate it
 	public GameObject bullet;
 	//This is the characters rigidbody, how we access the physics of the character
 	public Rigidbody2D rb;
 	public int hasJump = 0;
 	//This reference to the animator allows us to access the animations and state variables
 	public Animator animator;
 	public bool moving = false;
 	private bool facingRight = true;
 	public bool playAnim = false;
	private HeartSystem heartScript;
	private GroundTester groundScript;
	public GameObject soundHandler;
	public GameObject groundTester;
	private SoundHandler soundScript;
	public AudioSource audioSource;
	public AudioClip[] audioClip;
	public int jumpID = 0;
	public float startTime = 0;
	private bool hasGun = false;
	private bool canMidair = false;

	void Start()
	{
		//Get the heart system
		heartScript = gameObject.GetComponent<HeartSystem>();
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
			transform.position += Vector3.left * speed * Time.deltaTime;
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
			transform.position += Vector3.right * speed * Time.deltaTime;
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
		if (Input.GetKeyDown(KeyCode.LeftShift) && !groundScript.onGround && hasJump > 0)
		{
			animator.SetInteger("State", 2);
			soundScript.PlaySound(0);
			rb.velocity = new Vector2(0, 0);
			rb.AddForce(Vector3.up * height);
			hasJump--;
		}
		if (hasGun)
		{
			if (Input.GetMouseButtonDown(0))
			{
				Vector3 direction = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
				direction.Normalize();
				//Spawn the bullet in front of the player
				GameObject projectile = (GameObject)Instantiate(bullet, transform.position + direction * 2, Quaternion.identity);
				projectile.GetComponent<Rigidbody2D>().velocity = direction * speed * 5;
			}
		}
         //If nothing is being pressed, play the idle animation
      	 changeAnimation(0);
     }

     //This is to make sure that the landing animation finishes before starting another animation
     void changeAnimation(int state)
     {
		if (groundScript.onGround && !moving && !playAnim && !groundScript.falling)
         {
         	animator.SetInteger("State",state);
         }
         else
         {
			playAnim = false;
         }
     }

     //This is automatically called when the player enters a collision with an object
     void OnCollisionEnter2D(Collision2D coll)
     {
		//Pick up a coin
		if (coll.gameObject.tag == "Coin")
		{
			Destroy(coll.gameObject);
			soundScript.PlaySound(2);
		}
		if (coll.gameObject.tag == "Gun")
		{
			Destroy(coll.gameObject);
			hasGun = true;
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
		if (coll.gameObject.tag == "Enemy")
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
			SceneManager.LoadScene("Level2");
		}
		if (coll.gameObject.tag == "HeartContainer")
		{
			Debug.Log("newHeart");
			Destroy(coll.gameObject);
			heartScript.pickupHeart();
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
     	else if(currJump == jumpID && Time.time - startTime < .3)
     	{
     		Debug.Log(Time.time - startTime);
			rb.AddForce(Vector3.up * height * (Time.time - startTime)/2);
			rb.gravityScale -= .00000005f;
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
}
