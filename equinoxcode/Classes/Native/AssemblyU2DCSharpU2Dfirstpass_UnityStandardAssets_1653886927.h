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
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect
struct  JetParticleEffect_t1653886927  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Color UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::minColour
	Color_t1588175760  ___minColour_2;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_Jet
	AeroplaneController_t3995336886 * ___m_Jet_3;
	// UnityEngine.ParticleSystem UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_System
	ParticleSystem_t56787138 * ___m_System_4;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalStartSize
	float ___m_OriginalStartSize_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalLifetime
	float ___m_OriginalLifetime_6;
	// UnityEngine.Color UnityStandardAssets.Vehicles.Aeroplane.JetParticleEffect::m_OriginalStartColor
	Color_t1588175760  ___m_OriginalStartColor_7;
};
