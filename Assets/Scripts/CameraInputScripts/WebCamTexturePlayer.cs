using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace CocoaHeadsBR.Camera{
    public class WebCamTexturePlayer : MonoBehaviour {
        
        public GameObject cameraOverlay;
        public RawImage camImage; 
        
        WebCamTexture wct;
        
        void Awake(){
            wct = new WebCamTexture();                                               
        }           
                
        public void StartCamera(){
            camImage.texture = wct;            
            camImage.material.mainTexture = wct;            
            wct.Play();           
            cameraOverlay.SetActive(true);
        }
        
        public void CaptureImage(){
            cameraOverlay.SetActive(false);
            wct.Stop();
            CameraSceneManager.sharedInstance.PostPictureIntoStandard(camImage.texture);     
        }               

    }
}