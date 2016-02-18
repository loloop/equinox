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
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3995336886;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl
struct  AeroplaneAiControl_t2206831129  : public MonoBehaviour_t3012272455
{
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_RollSensitivity
	float ___m_RollSensitivity_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_PitchSensitivity
	float ___m_PitchSensitivity_3;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_LateralWanderDistance
	float ___m_LateralWanderDistance_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_LateralWanderSpeed
	float ___m_LateralWanderSpeed_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_MaxClimbAngle
	float ___m_MaxClimbAngle_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_MaxRollAngle
	float ___m_MaxRollAngle_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_SpeedEffect
	float ___m_SpeedEffect_8;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_TakeoffHeight
	float ___m_TakeoffHeight_9;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_Target
	Transform_t284553113 * ___m_Target_10;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_AeroplaneController
	AeroplaneController_t3995336886 * ___m_AeroplaneController_11;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_RandomPerlin
	float ___m_RandomPerlin_12;
	// System.Boolean UnityStandardAssets.Vehicles.Aeroplane.AeroplaneAiControl::m_TakenOff
	bool ___m_TakenOff_13;
};
