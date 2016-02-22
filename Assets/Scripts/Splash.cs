using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms;
using System.Collections;
using CocoaHeadsBR.Constants;

namespace CocoaHeadsBR{
    public class Splash : MonoBehaviour {

        // Use this for initialization
        void Start () {
            Application.targetFrameRate = 60;
            Social.localUser.Authenticate(SocialUserLogin);
            EquinociOSManager.LoadScene(Scenes.MainMenu.ToString());
            SceneManager.LoadScene(Scenes.MainMenu.ToString());
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