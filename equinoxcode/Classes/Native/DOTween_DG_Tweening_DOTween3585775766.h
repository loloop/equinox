#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_t1733909190;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_t288468127;

#include "mscorlib_System_Object837106420.h"
#include "DOTween_DG_Tweening_LogBehaviour3180954095.h"
#include "DOTween_DG_Tweening_UpdateType2719692729.h"
#include "DOTween_DG_Tweening_AutoPlay2525396377.h"
#include "DOTween_DG_Tweening_LoopType3344295956.h"
#include "DOTween_DG_Tweening_Ease1024295940.h"

// DG.Tweening.DOTween
struct  DOTween_t3585775766  : public Object_t
{
};
struct DOTween_t3585775766_StaticFields{
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_2;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_3;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_4;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_5;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_6;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_7;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_8;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_9;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_10;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_11;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_12;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_13;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_14;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_t1733909190 * ___instance_15;
	// System.Boolean DG.Tweening.DOTween::isUnityEditor
	bool ___isUnityEditor_16;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_17;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_18;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_t288468127 * ___GizmosDelegates_19;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_20;
	// System.Boolean DG.Tweening.DOTween::isQuitting
	bool ___isQuitting_21;
};
