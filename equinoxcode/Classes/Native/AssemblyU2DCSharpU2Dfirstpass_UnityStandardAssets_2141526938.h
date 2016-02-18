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
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2265160319;
// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController
struct AeroplaneController_t3995336886;
// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator
struct  AeroplanePropellerAnimator_t2141526938  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModel
	Transform_t284553113 * ___m_PropellorModel_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlur
	Transform_t284553113 * ___m_PropellorBlur_4;
	// UnityEngine.Texture2D[] UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurTextures
	Texture2DU5BU5D_t2265160319* ___m_PropellorBlurTextures_5;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurStart
	float ___m_ThrottleBlurStart_6;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_ThrottleBlurEnd
	float ___m_ThrottleBlurEnd_7;
	// System.Single UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_MaxRpm
	float ___m_MaxRpm_8;
	// UnityStandardAssets.Vehicles.Aeroplane.AeroplaneController UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_Plane
	AeroplaneController_t3995336886 * ___m_Plane_9;
	// System.Int32 UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurState
	int32_t ___m_PropellorBlurState_10;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorModelRenderer
	Renderer_t1092684080 * ___m_PropellorModelRenderer_11;
	// UnityEngine.Renderer UnityStandardAssets.Vehicles.Aeroplane.AeroplanePropellerAnimator::m_PropellorBlurRenderer
	Renderer_t1092684080 * ___m_PropellorBlurRenderer_12;
};
