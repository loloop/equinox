using UnityEngine;
using CocoaHeadsBR.Constants;
using System.Collections;

namespace CocoaHeadsBR{
    
    namespace Constants{ //to-do: make constants be their own files
        public enum Content{
            basics,
            layout,
            multitouch,
            accelerometer,
            social,            
            interop
        }
    }
    
    namespace MainMenu{
        public class BasicMenu : MonoBehaviour {

            public void LoadContentViewFor(Content articleContent){
                //populate content view with article excerpt
                //redirect example button to go to the selected scene
                //show content view    
            }
        }
        
    }
}