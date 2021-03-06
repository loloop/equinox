﻿using UnityEngine;
using System.Collections;
using CocoaHeadsBR.Constants;

namespace  CocoaHeadsBR{    
    
    namespace Constants{ //to-do: make constants be their own files
        public enum Scenes{ 
            MainMenu,
            GeniusGame,            
        }
    }
    
    
    public class EquinociOSManager : MonoBehaviour {
                
        bool isDoneLoading{
            get{
                return false;                
            }
        }

        public static void LoadScene(Scenes sceneName){
            Debug.Log("EquinociOSManager not done yet lol");
            //equinocios manager to be sowewhat based on this idea https://gist.github.com/Democide/beba5fd2603b268a8f72                    
            //Application.backgroundLoadingPriority = ThreadPriority.High;            
        }        
        
        IEnumerator LoadLevelAsync(string sceneName){
            ShowLoadingScreen();
            yield return null;
            
            while(!isDoneLoading){
                yield return null;
                
            }   
            
            
        }
        
        void ShowLoadingScreen(){
            GameObject ls = (GameObject) Resources.Load("LoadingScreen");            
            if(ls==null){
                Debug.LogError("LoadingScreen prefab not found");
                return;
            }          
            Instantiate(ls, Vector3.zero, Quaternion.identity);
        }

        
    }
}