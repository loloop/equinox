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
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings
struct AdvancedSetttings_t202546193;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3995336886;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio
struct  AeroplaneAudio_t1870980186  : public MonoBehaviour_t3012272455
{
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineSound
	AudioClip_t3714538611 * ___m_EngineSound_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineMinThrottlePitch
	float ___m_EngineMinThrottlePitch_3;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineMaxThrottlePitch
	float ___m_EngineMaxThrottlePitch_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineFwdSpeedMultiplier
	float ___m_EngineFwdSpeedMultiplier_5;
	// UnityEngine.AudioClip UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSound
	AudioClip_t3714538611 * ___m_WindSound_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindBasePitch
	float ___m_WindBasePitch_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSpeedPitchFactor
	float ___m_WindSpeedPitchFactor_8;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindMaxSpeedVolume
	float ___m_WindMaxSpeedVolume_9;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio/AdvancedSetttings UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_AdvancedSetttings
	AdvancedSetttings_t202546193 * ___m_AdvancedSetttings_10;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_EngineSoundSource
	AudioSource_t3628549054 * ___m_EngineSoundSource_11;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_WindSoundSource
	AudioSource_t3628549054 * ___m_WindSoundSource_12;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_Plane
	AeroplaneController_t3995336886 * ___m_Plane_13;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAudio::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_14;
};
