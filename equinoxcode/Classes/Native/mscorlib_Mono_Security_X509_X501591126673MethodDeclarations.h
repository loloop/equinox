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
// Mono.Security.ASN1
struct ASN1_t1254135646;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void Mono.Security.X509.X501::.cctor()
extern "C"  void X501__cctor_m1545850908 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C"  String_t* X501_ToString_m3743123940 (Object_t * __this /* static, unused */, ASN1_t1254135646 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C"  String_t* X501_ToString_m823511368 (Object_t * __this /* static, unused */, ASN1_t1254135646 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C"  void X501_AppendEntry_m827206706 (Object_t * __this /* static, unused */, StringBuilder_t3822575854 * ___sb, ASN1_t1254135646 * ___entry, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
