using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

//This script manages the characters movement and actions
public class CharMovement : MonoBehaviour {

	public float speed = 4f;
	public float height = 400f;
	//A reference to the bullet object so we can replicate it
 	public GameObject bullet;
 	//This is the characters rigidbody, how we access the physics of the character
 	public Rigidbody2D rb;
 	public int hasJump = 0;
 	public bool onGround = true;
 	//This reference to the animator allows us to access the animations and state variables
 	public Animator animator;
 	public bool moving = false;
 	private bool facingRight = true;
 	private bool playAnim = false;

 	//this update function is run every frame
     void Update ()
     {
     	moving = false;
     	//This means the character is falling
		if (rb.velocity.y < -0.1)
 		{
   			animator.SetInteger("State", 3);
 		}
		if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
         {
             transform.position += Vector3.left * speed * Time.deltaTime;
             //only play the running animation if the user is on the ground
             if(onGround)
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
             if(onGround)
             {
				changeAnimation(1);
			 }
			moving = true;
			//flip the animation to face right
			flip(1);
         }
		 if (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.Space))
         {
         	jump();
         	//Play the jumping animation
			moving = true;
         }
         if (Input.GetMouseButtonDown(0))
         {
			Vector3 direction = Camera.main.ScreenToWorldPoint(Input.mousePosition)- transform.position;
 			direction.Normalize();
 			//Spawn the bullet in front of the player
			GameObject projectile = (GameObject)Instantiate(bullet, transform.position + direction*2 , Quaternion.identity);
 			projectile.GetComponent<Rigidbody2D>().velocity = direction * speed * 5;
         }
         //If nothing is being pressed, play the idle animation
      	 changeAnimation(0);
     }

     //This is to make sure that the landing animation finishes before starting another animation
     void changeAnimation(int state)
     {
		if (onGround && !moving && !playAnim)
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
     	//If the player lands on a platform, play the landing animation and set onGround to true
		if (coll.gameObject.tag == "Platform")
		{
			onGround = true;
			animator.SetInteger("State", 4);
			playAnim = true;
		}
		//If the player hits the death plane, then reset the level
		if (coll.gameObject.tag == "Respawn" || coll.gameObject.tag == "Enemy")
		{
			SceneManager.LoadScene("Level1");
		}
     }

	void OnCollisionExit2D(Collision2D coll)
     {
		if (coll.gameObject.tag == "Platform")
		{
			onGround = false;
			moving = false;
		}
     }

     void jump()
     {
		if(!onGround && hasJump > 0)
		{
			rb.velocity = new Vector2(0,0);
			rb.AddForce(Vector3.up * height);
			hasJump--;
			onGround = false;
			animator.SetInteger("State", 2);
     	}
     	if (onGround)
     	{
			rb.AddForce(Vector3.up * height);
			onGround = false;
			animator.SetInteger("State", 2);
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
}
