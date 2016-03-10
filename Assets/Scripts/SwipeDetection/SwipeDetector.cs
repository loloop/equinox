using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace CocoaHeadsBR.Swiping{
    public class SwipeDetector : MonoBehaviour {
        
        public Text swipeText;
        public Image background;

        // Use this for initialization
        void Start () {            
            TKSwipeRecognizer recognizer = new TKSwipeRecognizer(TKSwipeDirection.All);    
            
            recognizer.gestureRecognizedEvent += (r) => {
                    //Ação desejada no swipe vem aqui
                    Debug.Log(r);
                    swipeText.text = r.completedSwipeDirection.ToString();
                    Color color = Color.black;
                    switch (r.completedSwipeDirection){
                        case TKSwipeDirection.Down:
                            color = Color.green;
                            break;
                        case TKSwipeDirection.Up:
                            color = Color.blue;
                            break;
                        case TKSwipeDirection.Left:
                            color = Color.magenta;
                            break;
                        case TKSwipeDirection.Right:
                            color = Color.yellow;
                            break;
                        default:
                            break;
                    }
                    background.color = color;
            }; 
                  
            TouchKit.addGestureRecognizer(recognizer);
        }


    }
}