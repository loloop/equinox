using UnityEngine;
using System.Collections;

namespace CocoaHeadsBR{    
    public class AccelTarget : MonoBehaviour {
        
        void OnTriggerEnter(Collider2D col){
            AccelGameManager.sharedInstance.Score();
            ResetPosition();
        }
        
        public void ResetPosition(){
            //randomize position values            
        }

    }
}