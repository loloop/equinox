#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct  MovementSettings_t2310751762  : public Object_t
{
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::ForwardSpeed
	float ___ForwardSpeed_0;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::BackwardSpeed
	float ___BackwardSpeed_1;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::StrafeSpeed
	float ___StrafeSpeed_2;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunMultiplier
	float ___RunMultiplier_3;
	// UnityEngine.KeyCode UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::RunKey
	int32_t ___RunKey_4;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::JumpForce
	float ___JumpForce_5;
	// UnityEngine.AnimationCurve UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::SlopeCurveModifier
	AnimationCurve_t3342907448 * ___SlopeCurveModifier_6;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings::CurrentTargetSpeed
	float ___CurrentTargetSpeed_7;
};
