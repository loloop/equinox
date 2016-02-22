using UnityEngine;
using System.Collections;

namespace CocoaHeadsBR.GeniusGame{
    public class InputVerification : MonoBehaviour {
        
        bool verifyForTouches;

        IEnumerator CheckTouchCount(){            
            while(verifyForTouches){
                int touchCount = Input.touchCount;                               
                yield return new WaitForEndOfFrame();
                if(touchCount!=Input.touchCount && Input.touchCount > 0){
                    //touch count has changed and it is not zero
                    //(yes it can change from 2 to 3 we need to address that too)
                }                                
                yield return new WaitForEndOfFrame();
            }
        }
                
    }
}