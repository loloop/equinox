﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Shader
struct Shader_t3998140498;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2786816979.h"

// UnityStandardAssets.ImageEffects.ContrastEnhance
struct  ContrastEnhance_t873637612  : public PostEffectsBase_t2786816979
{
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::intensity
	float ___intensity_5;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::threshold
	float ___threshold_6;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurMaterial
	Material_t1886596500 * ___separableBlurMaterial_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeMaterial
	Material_t1886596500 * ___contrastCompositeMaterial_8;
	// System.Single UnityStandardAssets.ImageEffects.ContrastEnhance::blurSpread
	float ___blurSpread_9;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::separableBlurShader
	Shader_t3998140498 * ___separableBlurShader_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastEnhance::contrastCompositeShader
	Shader_t3998140498 * ___contrastCompositeShader_11;
};
