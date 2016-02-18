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

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t1337929242;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem56787138.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetSafeCollisionEventSize(UnityEngine.ParticleSystem)
extern "C"  int32_t ParticleSystemExtensionsImpl_GetSafeCollisionEventSize_m1273158050 (Object_t * __this /* static, unused */, ParticleSystem_t56787138 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,UnityEngine.ParticleCollisionEvent[])
extern "C"  int32_t ParticleSystemExtensionsImpl_GetCollisionEvents_m1931324682 (Object_t * __this /* static, unused */, ParticleSystem_t56787138 * ___ps, GameObject_t4012695102 * ___go, ParticleCollisionEventU5BU5D_t1337929242* ___collisionEvents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
