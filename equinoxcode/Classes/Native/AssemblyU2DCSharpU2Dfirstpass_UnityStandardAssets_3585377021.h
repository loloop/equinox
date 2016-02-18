#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3995336886;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis
struct  AeroplaneUserControl4Axis_t3585377021  : public MonoBehaviour_t3012272455
{
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::maxRollAngle
	float ___maxRollAngle_2;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::maxPitchAngle
	float ___maxPitchAngle_3;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_Aeroplane
	AeroplaneController_t3995336886 * ___m_Aeroplane_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_Throttle
	float ___m_Throttle_5;
	// System.Boolean UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_AirBrakes
	bool ___m_AirBrakes_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplaneUserControl4Axis::m_Yaw
	float ___m_Yaw_7;
};
