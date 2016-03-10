using UnityEngine;
using System.Runtime.InteropServices;

namespace CocoaHeadsBR{   
    public class DeviceManager {        
        [DllImport ("__Internal")] private static extern bool getLowPowerMode();        
        
        public static bool isLowPowerActive{
            get{                                
                return getLowPowerMode();
            }
        }
    }
}

