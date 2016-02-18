using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

namespace CocoaHeadsBR.Camera{
    public class DeviceCamera : MonoBehaviour {
        
        [DllImport ("__Internal")] private static extern float FooPluginFunction();
        
        public static void CallCamera(){
            FooPluginFunction();
        }
	        
    }
}