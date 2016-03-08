using UnityEngine;
using System.Collections;

namespace CocoaHeadsBR{
    public class AccelControl : MonoBehaviour {
        
        public float strength;
        Vector3 baseline;

        // Use this for initialization
        void Start () {            
            StartCoroutine(Accelerate());
        }

        IEnumerator Accelerate(){
            Vector3 lastFramePosition = transform.localPosition;
            Vector3 velocity = Vector3.zero;            
            while(true){
                baseline = Input.acceleration;
                Vector3 accelData = Vector3.SmoothDamp(lastFramePosition, baseline, ref velocity, 0.1f); //Inputs do sensor devem ser "limpos", senão ele fica pulando loucamente por aí              
                Vector2 ad = (Vector2) accelData;  
                transform.Translate(ad * strength * Time.deltaTime);
                lastFramePosition = transform.localPosition;            
                yield return new WaitForEndOfFrame();                
            }
        }
        
        IEnumerator NonSmoothedAccelerate(){
            while(true){
                transform.localPosition = Input.acceleration * strength;
                yield return new WaitForEndOfFrame();                
            }
        }
        
        float CleanNumber(float f){
            return f = Mathf.Round(f*100) / 100;                       
        }

    }
}