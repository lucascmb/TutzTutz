using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour, Entity
{

    public float health;

    private bool movementUp, movementDown, movementLeft, movementRight, walking, act;

    private Rigidbody2D rb;
    private Animator anim;
    private SpriteRenderer sr;

    public Sprite[] sprites;

    private Vector3 exPos;

    private string comeFrom;

    private GameBehaviour gb;

    private float myTurn;

    public float speed;

    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        gb = GameObject.FindObjectOfType<GameBehaviour>();
        anim = this.transform.GetComponent<Animator>();
        sr = this.transform.GetComponent<SpriteRenderer>();
        myTurn = 0;
    }

    void Update()
    {
        verifyClick();
        movement();
        checkObjects();
    }

    void verifyClick()
    {
        if(myTurn == gb.GetTurn() && Input.anyKeyDown)
        {
            print("Wait for the next turn");
        }
    }

    /*void DrawRaysForCollisions()
    {
       *Debug.DrawRay(transform.position, Vector3.up, Color.green);
        Debug.DrawRay(transform.position, Vector3.down, Color.green);
        Debug.DrawRay(transform.position, Vector3.left, Color.green);
        Debug.DrawRay(transform.position, Vector3.right, Color.green);
    } */

    private void checkObjects()
    {
        //DrawRaysForCollisions();

        if (Physics2D.Raycast(this.transform.position, Vector2.up, 1f)) { movementUp = false; }
        else { movementUp = true; }

        if (Physics2D.Raycast(this.transform.position, Vector2.down, 1f)) { movementDown = false; }
        else { movementDown = true; }

        if (Physics2D.Raycast(this.transform.position, Vector2.right, 1f)) { movementRight = false; }
        else { movementRight = true; }

        if (Physics2D.Raycast(this.transform.position, Vector2.left, 1f)) { movementLeft = false; }
        else { movementLeft = true; }
    }

    private void movement()
    {
        if (!walking)
        {
            if (myTurn != gb.GetTurn())
            {
                if (Input.GetKeyDown(KeyCode.LeftArrow) && movementLeft)
                {
                    walking = true;
                    anim.SetInteger("walking", 1);
                    myTurn = gb.GetTurn();
                    comeFrom = "Right";
                    rb.velocity = Vector2.left * speed;
                }
                else if (Input.GetKeyDown(KeyCode.RightArrow) && movementRight)
                {
                    walking = true;
                    anim.SetInteger("walking", 2);
                    myTurn = gb.GetTurn();
                    comeFrom = "Left";
                    rb.velocity = Vector2.right * speed;
                }
                else if (Input.GetKeyDown(KeyCode.UpArrow) && movementUp)
                {
                    walking = true;
                    anim.SetInteger("walking", 3);
                    myTurn = gb.GetTurn();
                    comeFrom = "Down";
                    rb.velocity = Vector2.up * speed;
                }
                else if (Input.GetKeyDown(KeyCode.DownArrow) && movementDown)
                {
                    walking = true;
                    anim.SetInteger("walking", 4);
                    myTurn = gb.GetTurn();
                    comeFrom = "Up";
                    rb.velocity = Vector2.down * speed;
                }
                exPos = this.transform.position;
            }
        }
        else
        {
            if(comeFrom == "Right" && this.transform.position.x <= exPos.x - 1f ) {
                this.transform.position = new Vector3(exPos.x - 1f, exPos.y, exPos.z);
                rb.velocity = Vector3.up * 0;
                sr.sprite = sprites[anim.GetInteger("walking") - 1];
                anim.SetInteger("walking", 0);
                walking = false;
            }
            else if (comeFrom == "Left" && this.transform.position.x >= exPos.x + 1f)
            {
                this.transform.position = new Vector3(exPos.x + 1f, exPos.y, exPos.z);
                rb.velocity = Vector3.up * 0;
                sr.sprite = sprites[anim.GetInteger("walking") - 1];
                anim.SetInteger("walking", 0);
                walking = false;
            }
            else if (comeFrom == "Down" && this.transform.position.y >= exPos.y + 1f)
            {
                this.transform.position = new Vector3(exPos.x, exPos.y + 1f, exPos.z);
                rb.velocity = Vector3.up * 0;
                sr.sprite = sprites[anim.GetInteger("walking") - 1];
                anim.SetInteger("walking", 0);
                walking = false;
            }
            else if (comeFrom == "Up" && this.transform.position.y <= exPos.y - 1f)
            {
                this.transform.position = new Vector3(exPos.x, exPos.y - 1f, exPos.z);
                rb.velocity = Vector3.up * 0;
                sr.sprite = sprites[anim.GetInteger("walking") - 1];
                anim.SetInteger("walking", 0);
                walking = false;
            }
        }
    }

    public void GetDamage() {  }

    public void GetHeal() { }
}
