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

// UnityStandardAssets.Vehicles.Car.CarAIControl
struct CarAIControl_t3427977571;
// UnityEngine.Collision
struct Collision_t1119538015;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::.ctor()
extern "C"  void CarAIControl__ctor_m703874990 (CarAIControl_t3427977571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::Awake()
extern "C"  void CarAIControl_Awake_m941480209 (CarAIControl_t3427977571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::FixedUpdate()
extern "C"  void CarAIControl_FixedUpdate_m2280204969 (CarAIControl_t3427977571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::OnCollisionStay(UnityEngine.Collision)
extern "C"  void CarAIControl_OnCollisionStay_m6764063 (CarAIControl_t3427977571 * __this, Collision_t1119538015 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAIControl::SetTarget(UnityEngine.Transform)
extern "C"  void CarAIControl_SetTarget_m656116094 (CarAIControl_t3427977571 * __this, Transform_t284553113 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
