using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace CocoaHeadsBR.Multitouch{
    [RequireComponent(typeof(CanvasGroup))]
    public class IndividualTouch : MonoBehaviour {
        
        public Text position;
        
        bool show = false;
        CanvasGroup cg;

        void Start(){
            cg = GetComponent<CanvasGroup>();
            StartCoroutine(Hide());
        }

        public void UpdateTouchLabels(Touch touch){
            transform.position = touch.position;
            position.text = touch.position.ToString();
            cg.alpha = 1;
        }
        
        public IEnumerator Hide(){
            yield return new WaitForEndOfFrame();
            cg.alpha = 0;
        }
                
    }
}