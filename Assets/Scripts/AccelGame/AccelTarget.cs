using UnityEngine;
using System.Collections;

namespace CocoaHeadsBR{    
    public class AccelTarget : MonoBehaviour {        
        
        void OnTriggerEnter2D(Collider2D col){
            AccelGameManager.sharedInstance.Score();
            ResetPosition();
        }
        
        public void ResetPosition(){
            //randomize position values
            //-2.5x
            //+2.5x
            float x = Random.Range(-2.5f, 2.5f);            
            //+2y
            //-4.5y
            float y = Random.Range(-4.5f, 2f);
            transform.localPosition = new Vector2(x,y);
        }

    }
}