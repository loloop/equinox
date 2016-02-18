#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3995336886;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3982375970.h"

// UnityStandardAssets.Vehicles.Aeroplane.LandingGear
struct  LandingGear_t1289805157  : public MonoBehaviour_t3012272455
{
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::raiseAtAltitude
	float ___raiseAtAltitude_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.LandingGear::lowerAtAltitude
	float ___lowerAtAltitude_3;
	// UnityStandardAssets.Vehicles.Aeroplane.LandingGear/GearState UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_State
	int32_t ___m_State_4;
	// UnityEngine.Animator UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Animator
	Animator_t792326996 * ___m_Animator_5;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_6;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.LandingGear::m_Plane
	AeroplaneController_t3995336886 * ___m_Plane_7;
};
