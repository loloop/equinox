#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.WheelCollider
struct WheelCollider_t331071644;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.Vehicles.Car.WheelEffects
struct  WheelEffects_t2015079369  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::SkidTrailPrefab
	Transform_t284553113 * ___SkidTrailPrefab_2;
	// UnityEngine.ParticleSystem UnityStandardAssets.Vehicles.Car.WheelEffects::skidParticles
	ParticleSystem_t56787138 * ___skidParticles_4;
	// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.WheelEffects::m_AudioSource
	AudioSource_t3628549054 * ___m_AudioSource_5;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::m_SkidTrail
	Transform_t284553113 * ___m_SkidTrail_6;
	// UnityEngine.WheelCollider UnityStandardAssets.Vehicles.Car.WheelEffects::m_WheelCollider
	WheelCollider_t331071644 * ___m_WheelCollider_7;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<skidding>k__BackingField
	bool ___U3CskiddingU3Ek__BackingField_8;
	// System.Boolean UnityStandardAssets.Vehicles.Car.WheelEffects::<PlayingAudio>k__BackingField
	bool ___U3CPlayingAudioU3Ek__BackingField_9;
};
struct WheelEffects_t2015079369_StaticFields{
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.WheelEffects::skidTrailsDetachedParent
	Transform_t284553113 * ___skidTrailsDetachedParent_3;
};
