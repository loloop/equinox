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

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3374395064;
struct AsyncOperation_t3374395064_marshaled;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene2772977204.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2068802481.h"

// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2772977204  SceneManager_GetActiveScene_m3062973092 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::INTERNAL_CALL_GetActiveScene(UnityEngine.SceneManagement.Scene&)
extern "C"  void SceneManager_INTERNAL_CALL_GetActiveScene_m3594338006 (Object_t * __this /* static, unused */, Scene_t2772977204 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m3907168970 (Object_t * __this /* static, unused */, String_t* ___sceneName, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m2455768283 (Object_t * __this /* static, unused */, int32_t ___sceneBuildIndex, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  AsyncOperation_t3374395064 * SceneManager_LoadSceneAsync_m1685951617 (Object_t * __this /* static, unused */, String_t* ___sceneName, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  AsyncOperation_t3374395064 * SceneManager_LoadSceneAsyncNameIndexInternal_m3775081569 (Object_t * __this /* static, unused */, String_t* ___sceneName, int32_t ___sceneBuildIndex, bool ___isAdditive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
