using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace CocoaHeadsBR{
    public class AccelGameManager : MonoBehaviour {

        public static AccelGameManager sharedInstance;
        
        public Sprite background;
        public Text scoreText;
        public GameObject target;
        
        int score = 0;
        
        void Awake(){
            sharedInstance = this;
        }
        
        public void Start(){
            RestartGame();    
        }
        
        public void Score(){
            score++;
            scoreText.text = score.ToString();
        }
        
        public void RestartGame(){
            score = 0;
            scoreText.text = score.ToString();
        }
        
        void InstantiateTarget(){
            
        }

        
        
    }
}