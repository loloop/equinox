using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace CocoaHeadsBR.Multitouch{
    public class TouchCountManager : MonoBehaviour {
        
        public Text touchCount;
        public IndividualTouch[] touches;
                

        // Update is called once per frame
        void Update () {
            touchCount.text = "Touch count: " + Input.touchCount.ToString();
            for(int i = 0; i < Input.touchCount; i++){                                
                touches[i].UpdateTouchLabels(Input.touches[i]);
            }            
        }
        
        
    }
}