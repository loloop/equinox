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

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RigidbodyConstraints1472919062.h"
#include "UnityEngine_UnityEngine_ForceMode759713627.h"
#include "UnityEngine_UnityEngine_Rigidbody1972007546.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C"  Vector3_t3525329789  Rigidbody_get_velocity_m2696244068 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m799562119 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_velocity_m1063590501 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_velocity_m484592601 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C"  Vector3_t3525329789  Rigidbody_get_angularVelocity_m1572208282 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_angularVelocity_m3510265645 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_angularVelocity_m3705279231 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_angularVelocity_m1952192267 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C"  float Rigidbody_get_drag_m3710595753 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C"  void Rigidbody_set_drag_m4061586082 (Rigidbody_t1972007546 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C"  float Rigidbody_get_angularDrag_m2925737411 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C"  void Rigidbody_set_angularDrag_m2909317064 (Rigidbody_t1972007546 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C"  bool Rigidbody_get_isKinematic_m3963857442 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody_set_isKinematic_m294703295 (Rigidbody_t1972007546 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C"  void Rigidbody_set_constraints_m3626026339 (Rigidbody_t1972007546 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m557267180 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3682301239 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForce_m3651654387 (Object_t * __this /* static, unused */, Rigidbody_t1972007546 * ___self, Vector3_t3525329789 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m3012148388 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___torque, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddTorque_m4194065160 (Object_t * __this /* static, unused */, Rigidbody_t1972007546 * ___self, Vector3_t3525329789 * ___torque, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForceAtPosition_m1266619363 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___force, Vector3_t3525329789  ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForceAtPosition_m1572987758 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___force, Vector3_t3525329789  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m1493622644 (Object_t * __this /* static, unused */, Rigidbody_t1972007546 * ___self, Vector3_t3525329789 * ___force, Vector3_t3525329789 * ___position, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddExplosionForce_m196999228 (Rigidbody_t1972007546 * __this, float ___explosionForce, Vector3_t3525329789  ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C"  void Rigidbody_INTERNAL_CALL_AddExplosionForce_m3109367769 (Object_t * __this /* static, unused */, Rigidbody_t1972007546 * ___self, float ___explosionForce, Vector3_t3525329789 * ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_centerOfMass_m760020516 (Rigidbody_t1972007546 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_centerOfMass(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_set_centerOfMass_m1759559900 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C"  Vector3_t3525329789  Rigidbody_get_position_m1751901360 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Rigidbody_INTERNAL_get_position_m428733873 (Rigidbody_t1972007546 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C"  Quaternion_t1891715979  Rigidbody_get_rotation_m3846953477 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern "C"  void Rigidbody_set_rotation_m3622714110 (Rigidbody_t1972007546 * __this, Quaternion_t1891715979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_get_rotation_m1932073294 (Rigidbody_t1972007546 * __this, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Rigidbody_INTERNAL_set_rotation_m1594295130 (Rigidbody_t1972007546 * __this, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C"  void Rigidbody_Sleep_m4049131361 (Rigidbody_t1972007546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_Sleep(UnityEngine.Rigidbody)
extern "C"  void Rigidbody_INTERNAL_CALL_Sleep_m1292822714 (Object_t * __this /* static, unused */, Rigidbody_t1972007546 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C"  void Rigidbody_set_maxAngularVelocity_m3320880411 (Rigidbody_t1972007546 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
