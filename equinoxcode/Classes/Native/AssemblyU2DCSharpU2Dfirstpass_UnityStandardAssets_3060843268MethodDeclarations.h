#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Vehicles.Car.CarAudio
struct CarAudio_t3060843268;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::.ctor()
extern "C"  void CarAudio__ctor_m3294751021 (CarAudio_t3060843268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StartSound()
extern "C"  void CarAudio_StartSound_m2179873924 (CarAudio_t3060843268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StopSound()
extern "C"  void CarAudio_StopSound_m3621930040 (CarAudio_t3060843268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::Update()
extern "C"  void CarAudio_Update_m784928640 (CarAudio_t3060843268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::SetUpEngineAudioSource(UnityEngine.AudioClip)
extern "C"  AudioSource_t3628549054 * CarAudio_SetUpEngineAudioSource_m3865487699 (CarAudio_t3060843268 * __this, AudioClip_t3714538611 * ___clip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::ULerp(System.Single,System.Single,System.Single)
extern "C"  float CarAudio_ULerp_m2652158450 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
