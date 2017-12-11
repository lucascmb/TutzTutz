using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameBehaviour : MonoBehaviour {

    float turn, gameTime;
    public float delayTime = 3f;

    private ChangeTimer timer;

    // Use this for initialization
    void Start()
    {
        turn = 1;
        timer = GameObject.FindObjectOfType<ChangeTimer>();
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
        timer.ResetTime();
    }

    public float GetTurn()
    {
        return turn;
    }

    public float GetDelayTime()
    {
        return delayTime;
    }
}
