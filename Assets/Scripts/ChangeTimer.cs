using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeTimer : MonoBehaviour {

    private Animator timerAnim;
    private GameBehaviour gb;

    // Use this for initialization
    void Start () {
        gb = GameObject.FindObjectOfType<GameBehaviour>();
        timerAnim = gameObject.GetComponent<Animator>();
        timerAnim.speed = 1 / gb.GetDelayTime();

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

    public void ResetTime()
    {
        timerAnim.SetBool("OffsetCheck", true);
    }

}
