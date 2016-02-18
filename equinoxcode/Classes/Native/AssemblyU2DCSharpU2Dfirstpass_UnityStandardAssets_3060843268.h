#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t4130645234;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3368050026.h"

// UnityStandardAssets.Vehicles.Car.CarAudio
struct  CarAudio_t3060843268  : public MonoBehaviour_t3012272455
{
	// UnityStandardAssets.Vehicles.Car.CarAudio/EngineAudioOptions UnityStandardAssets.Vehicles.Car.CarAudio::engineSoundStyle
	int32_t ___engineSoundStyle_2;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::lowAccelClip
	AudioClip_t3714538611 * ___lowAccelClip_3;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::lowDecelClip
	AudioClip_t3714538611 * ___lowDecelClip_4;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::highAccelClip
	AudioClip_t3714538611 * ___highAccelClip_5;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Car.CarAudio::highDecelClip
	AudioClip_t3714538611 * ___highDecelClip_6;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::pitchMultiplier
	float ___pitchMultiplier_7;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::lowPitchMin
	float ___lowPitchMin_8;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::lowPitchMax
	float ___lowPitchMax_9;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::highPitchMultiplier
	float ___highPitchMultiplier_10;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::maxRolloffDistance
	float ___maxRolloffDistance_11;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::dopplerLevel
	float ___dopplerLevel_12;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAudio::useDoppler
	bool ___useDoppler_13;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_LowAccel
	AudioSource_t3628549054 * ___m_LowAccel_14;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_LowDecel
	AudioSource_t3628549054 * ___m_LowDecel_15;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_HighAccel
	AudioSource_t3628549054 * ___m_HighAccel_16;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::m_HighDecel
	AudioSource_t3628549054 * ___m_HighDecel_17;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAudio::m_StartedSound
	bool ___m_StartedSound_18;
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.CarAudio::m_CarController
	CarController_t4130645234 * ___m_CarController_19;
};
