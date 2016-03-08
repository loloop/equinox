using UnityEngine;
using System.Collections;

namespace CocoaHeadsBR.Camera{
    public class Standard : MonoBehaviour {

        public MeshRenderer meshToApplyPhoto;
        
        public void ApplyPhoto(Texture photo){
            meshToApplyPhoto.material.mainTexture = photo;
        }
        
    }
}