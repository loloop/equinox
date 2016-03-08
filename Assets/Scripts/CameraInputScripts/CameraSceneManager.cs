using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace CocoaHeadsBR.Camera{
    public class CameraSceneManager : MonoBehaviour {
        
        public static CameraSceneManager sharedInstance;
        
        public List<Standard> standards;
        
        void Awake(){
            sharedInstance = this;
        }
        
        public void PostPictureIntoStandard(Texture photo){
            foreach(Standard s in standards){
                s.ApplyPhoto(photo);    
            }
        }
        
        
    }
}