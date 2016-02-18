﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.WheelCollider
struct WheelCollider_t331071644;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WheelHit3622741669.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Single UnityEngine.WheelCollider::get_radius()
extern "C"  float WheelCollider_get_radius_m3068772649 (WheelCollider_t331071644 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern "C"  void WheelCollider_set_motorTorque_m3783058721 (WheelCollider_t331071644 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern "C"  void WheelCollider_set_brakeTorque_m2819145771 (WheelCollider_t331071644 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern "C"  void WheelCollider_set_steerAngle_m2024038962 (WheelCollider_t331071644 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern "C"  bool WheelCollider_GetGroundHit_m3646379857 (WheelCollider_t331071644 * __this, WheelHit_t3622741669 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void WheelCollider_GetWorldPose_m154559413 (WheelCollider_t331071644 * __this, Vector3_t3525329789 * ___pos, Quaternion_t1891715979 * ___quat, const MethodInfo* method) IL2CPP_METHOD_ATTR;