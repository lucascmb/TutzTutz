using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeTimer : MonoBehaviour {

    private Animator timerAnim;
    public float interval;
    public float duration;

	// Use this for initialization
	void Start () {
        timerAnim = gameObject.GetComponent<Animator>();
        timerAnim.speed = 1 / duration;
	}
	
	// Update is called once per frame
	void Update () {

        if (Input.GetKeyDown(KeyCode.C))
        {
            timerAnim.SetBool("OffsetCheck", true);
        }

        if(timerAnim.GetBool("OffsetCheck") == false)
        {


        }
    }

}
