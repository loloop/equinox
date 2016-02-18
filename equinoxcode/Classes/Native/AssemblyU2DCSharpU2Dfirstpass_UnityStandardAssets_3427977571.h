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
// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t4130645234;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1015180880.h"

// UnityStandardAssets.Vehicles.Car.CarAIControl
struct  CarAIControl_t3427977571  : public MonoBehaviour_t3012272455
{
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousSpeedFactor
	float ___m_CautiousSpeedFactor_2;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousMaxAngle
	float ___m_CautiousMaxAngle_3;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousMaxDistance
	float ___m_CautiousMaxDistance_4;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_CautiousAngularVelocityFactor
	float ___m_CautiousAngularVelocityFactor_5;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_SteerSensitivity
	float ___m_SteerSensitivity_6;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AccelSensitivity
	float ___m_AccelSensitivity_7;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_BrakeSensitivity
	float ___m_BrakeSensitivity_8;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_LateralWanderDistance
	float ___m_LateralWanderDistance_9;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_LateralWanderSpeed
	float ___m_LateralWanderSpeed_10;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AccelWanderAmount
	float ___m_AccelWanderAmount_11;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AccelWanderSpeed
	float ___m_AccelWanderSpeed_12;
	// UnityStandardAssets.Vehicles.Car.CarAIControl/BrakeCondition UnityStandardAssets.Vehicles.Car.CarAIControl::m_BrakeCondition
	int32_t ___m_BrakeCondition_13;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAIControl::m_Driving
	bool ___m_Driving_14;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Car.CarAIControl::m_Target
	Transform_t284553113 * ___m_Target_15;
	// System.Boolean UnityStandardAssets.Vehicles.Car.CarAIControl::m_StopWhenTargetReached
	bool ___m_StopWhenTargetReached_16;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_ReachTargetThreshold
	float ___m_ReachTargetThreshold_17;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_RandomPerlin
	float ___m_RandomPerlin_18;
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.CarAIControl::m_CarController
	CarController_t4130645234 * ___m_CarController_19;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AvoidOtherCarTime
	float ___m_AvoidOtherCarTime_20;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AvoidOtherCarSlowdown
	float ___m_AvoidOtherCarSlowdown_21;
	// System.Single UnityStandardAssets.Vehicles.Car.CarAIControl::m_AvoidPathOffset
	float ___m_AvoidPathOffset_22;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Car.CarAIControl::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_23;
};
