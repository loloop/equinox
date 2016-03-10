using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms;
using System.Collections;
using CocoaHeadsBR.Constants;


using System.Runtime.InteropServices;

namespace CocoaHeadsBR{
    public class Splash : MonoBehaviour {
        
        [DllImport ("__Internal")] private static extern string _ImagePickerOpen();

        // Use this for initialization
        void Start () {
            Application.targetFrameRate = DeviceManager.isLowPowerActive? 60: 30;
            Social.localUser.Authenticate(SocialUserLogin);
            Debug.Log(_ImagePickerOpen());            
            // SceneManager.LoadScene("Camera");
        }
        
        void SocialUserLogin(bool success){
            if(success){
                Debug.Log("do stuff with logged user here");
            } else {                
                Debug.Log("disable gamecenter features until player logs in");
            }
        }
        
    }
}