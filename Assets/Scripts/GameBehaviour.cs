using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameBehaviour : MonoBehaviour {

    float turn, gameTime;
    public float delayTime = 1f;

	// Use this for initialization
	void Start () {
        turn = 1;
	}
	
	// Update is called once per frame
	void Update () {
        if(gameTime <= Time.time)
        {
            UpdateGameTime();
        }
    }

    void UpdateGameTime()
    {
        gameTime = Time.time + delayTime;
        turn++;
    }

    public float GetTurn()
    {
        return turn;
    }
}
