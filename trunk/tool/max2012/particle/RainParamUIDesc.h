/********************************************************************
**	file: 		RainParamUIDesc.h
**	author:		cpzhang <chengpengzhang@gmail.com>
**	created:	2011-4-25
**	purpose:	
*********************************************************************/
#ifndef __RainParamUIDesc_h__
#define __RainParamUIDesc_h__

#include "MaxParticleCommon.h"
#include "BirthRateDimension.h"

static ParamUIDesc tParamUIDesc[] = 
{
	// 
	ParamUIDesc(
	eParamUID_Enable,
	TYPE_SINGLECHEKBOX,
	IDC_ENABLE
	),

	//
	ParamUIDesc(
	eParamUID_Visible,
	TYPE_SINGLECHEKBOX,
	IDC_VISIBLE
	),

	//
	ParamUIDesc(
	eParamUID_Speed,
	EDITTYPE_FLOAT,
	IDC_PARTICLE_SPEED, IDC_PARTICLE_SPEEDSPIN,
	-1000.0f, 1000.0f,
	1.0f
	),	

	//
	ParamUIDesc(
	eParamUID_SpeedVariation,
	EDITTYPE_FLOAT,
	IDC_SPEED_VARIATION, IDC_SPINNER_SPEED_VARIATIONSPIN,
	0.0f, 100.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_ConeAngle,
	EDITTYPE_FLOAT,
	IDC_CONE_ANGLE, IDC_CONE_ANGLE_SPINNER,
	0.0f, 180.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_Gravity,
	EDITTYPE_FLOAT,
	IDC_GRAVITY, IDC_GRAVITY_SPINNER,
	-1000.0f, 1000.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_ExplosiveForce,
	EDITTYPE_FLOAT,
	IDC_EXPLOSIVE_FORCE, IDC_EXPLOSIVE_FORCE_SPINNER,
	-100.0f, 100.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_Life,
	EDITTYPE_FLOAT,
	IDC_LIFE, IDC_LIFE_SPINNER,
	0.0f, 1000.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_LifeVariation,
	EDITTYPE_FLOAT,
	IDC_LIFE_VARIATION, IDC_LIFE_VARIATION_SPINNER,
	-16.0f, 16.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_EmissionRate,
	EDITTYPE_FLOAT,
	IDC_EMISSION_RATE, IDC_EMISSION_RATE_SPINNER,
	0.0f, 1000.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_InitialNum,
	EDITTYPE_INT,
	IDC_INITIAL_NUM, IDC_INITIAL_NUM_SPINNER,
	0.0f, 512.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_LimitNum,
	EDITTYPE_INT,
	IDC_LIMIT_NUM, IDC_LIMIT_NUM_SPINNER,
	1.0f, 512.0f,
	1.0f
	),

	// 
	ParamUIDesc(
	eParamUID_AttachToEmitter,
	TYPE_SINGLECHEKBOX,
	IDC_ATTACH_TO_EMITTER
	),

	// 
	ParamUIDesc(
	eParamUID_MoveWithEmitter,
	TYPE_SINGLECHEKBOX,
	IDC_MOVE_WITH_EMITTER
	),

	// 
	ParamUIDesc(
	eParamUID_Sword,
	TYPE_SINGLECHEKBOX,
	IDC_FOR_THE_SWORD
	),

	//
	ParamUIDesc(
	eParamUID_SwordInitialAngle,
	EDITTYPE_FLOAT,
	IDC_SWORD_INITIAL_ANGLE, IDC_SPINNER_SWORD_INITIAL_ANGLE,
	-180.0f, 180.0f,
	1.0f
	),

	// 
	ParamUIDesc(
	eParamUID_Wander,
	TYPE_SINGLECHEKBOX,
	IDC_HEAD2
	),

	//
	ParamUIDesc(
	eParamUID_WanderRadius,
	EDITTYPE_FLOAT,
	IDC_ROTATION_SPEED2, IDC_SPINNER_ROTATION_SPEED2,
	0.0f, 1024.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_WanderSpeed,
	EDITTYPE_FLOAT,
	IDC_ROTATION_SPEED3, IDC_SPINNER_ROTATION_SPEED3,
	0.0f, 16.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_AspectRatio,
	EDITTYPE_FLOAT,
	IDC_ASPECT_RATIOI, IDC_SPINNER_ASPECT_RATIO,
	0.063f, 16.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_InitialAngleBegin,
	EDITTYPE_FLOAT,
	IDC_INIT_ANGLE_BEGIN, IDC_SPINNER_INIT_ANGLE_BEGIN,
	-180.0f, 180.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_InitialAngleEnd,
	EDITTYPE_FLOAT,
	IDC_INIT_ANGLE_END, IDC_SPINNER_INIT_ANGLE_END,
	-180.0f, 180.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_RotationSpeed,
	EDITTYPE_FLOAT,
	IDC_ROTATION_SPEED, IDC_SPINNER_ROTATION_SPEED,
	-64.0f, 64.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_RotationSpeedVariation,
	EDITTYPE_FLOAT,
	IDC_ROTATION_SPEED_VARIATION, IDC_SPINNER_ROTATION_SPEED_VARIATION,
	0.0f, 64.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_EmitterWidth,
	EDITTYPE_FLOAT,
	IDC_EMITTER_WIDTH, IDC_SPINNER_EMITTER_WIDTH,
	0.0f, 1000.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_EmitterLength,
	EDITTYPE_FLOAT,
	IDC_EMITTER_LENGTH, IDC_SPINNER_EMITTER_LENGTH,
	0.0f, 1000.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_EmitterHeight,
	EDITTYPE_FLOAT,
	IDC_EMITTER_HEIGHT, IDC_SPINNER_EMITTER_HEIGHT,
	0.0f, 1000.0f,
	1.0f
	),

	//
	ParamUIDesc(
	eParamUID_TailLength,
	EDITTYPE_FLOAT,
	IDC_TAIL_LENGTH, IDC_SPINNER_TAIL_LENGTH,
	0.0f, 10.0f,
	0.05f
	),

	//
	ParamUIDesc(
	eParamUID_TimeMiddle,
	EDITTYPE_FLOAT,
	IDC_TIME_MIDDLE, IDC_SPINNER_TIME_MIDDLE,
	0.05f, 0.95f,
	0.05f
	),

	//
	ParamUIDesc(
	eParamUID_ColorStart,
	TYPE_COLORSWATCH,
	IDC_COLOR_START
	),

	//
	ParamUIDesc(
	eParamUID_ColorMiddle,
	TYPE_COLORSWATCH,
	IDC_COLOR_MIDDLE
	),

	//
	ParamUIDesc(
	eParamUID_ColorEnd,
	TYPE_COLORSWATCH,
	IDC_COLOR_END
	),

	//
	ParamUIDesc(
	eParamUID_Alpha,
	EDITTYPE_FLOAT,
	IDC_ALPHA_R, IDC_SPINNER_ALPHA_R,
	IDC_ALPHA_GREEN, IDC_SPINNER_ALPHA_G,
	IDC_ALPHA_B, IDC_SPINNER_ALPHA_B,
	0.0f, 1.0f,
	SPIN_AUTOSCALE
	),

	//
	ParamUIDesc(
	eParamUID_Scale,
	EDITTYPE_FLOAT,
	IDC_SCALE_X, IDC_SPINNER_SCALE_X,
	IDC_SCALE_Y, IDC_SPINNER_SCALE_Y,
	IDC_SCALE_Z, IDC_SPINNER_SCALE_Z,
	0.001f, 1500.0f,
	SPIN_AUTOSCALE
	),

	//
	ParamUIDesc(
	eParamUID_ScaleVariation,
	EDITTYPE_FLOAT,
	IDC_SCALE_VARIATION_X, IDC_SPINNER_SCALE_VARIATION_X,
	IDC_SCALE_VARIATION_Y, IDC_SPINNER_SCALE_VARIATION_Y,
	IDC_SCALE_VARIATION_Z, IDC_SPINNER_SCALE_VARIATION_Z,
	0.0f, 500.0f,
	SPIN_AUTOSCALE
	),

	// 
	ParamUIDesc(
	eParamUID_FixedSize,
	TYPE_SINGLECHEKBOX,
	IDC_FIXED_SIZE
	),
#ifdef No_Something
	//
	ParamUIDesc(
	eParamUID_HeadLifeSpan,
	EDITTYPE_FLOAT,
	IDC_HEAD_LIFE_SPAN_X, IDC_SPINNER_HEAD_LIFE_SPAN_X,
	IDC_HEAD_LIFE_SPAN_Y, IDC_SPINNER_HEAD_LIFE_SPAN_Y,
	IDC_HEAD_LIFE_SPAN_Z, IDC_SPINNER_HEAD_LIFE_SPAN_Z,
	0.0f, 255.0f,
	SPIN_AUTOSCALE
	),

	//
	ParamUIDesc(
	eParamUID_HeadDecay,
	EDITTYPE_FLOAT,
	IDC_HEAD_DECAY_X, IDC_SPINNER_HEAD_DECAY_X,
	IDC_HEAD_DECAY_Y, IDC_SPINNER_HEAD_DECAY_Y,
	IDC_HEAD_DECAY_Z, IDC_SPINNER_HEAD_DECAY_Z,
	0.0f, 255.0f,
	SPIN_AUTOSCALE
	),

	//
	ParamUIDesc(
	eParamUID_TailLifeSpan,
	EDITTYPE_FLOAT,
	IDC_TAIL_LIFE_SPAN_X, IDC_SPINNER_TAIL_LIFE_SPAN_X,
	IDC_TAIL_LIFE_SPAN_Y, IDC_SPINNER_TAIL_LIFE_SPAN_Y,
	IDC_TAIL_LIFE_SPAN_Z, IDC_SPINNER_TAIL_LIFE_SPAN_Z,
	0.0f, 255.0f,
	SPIN_AUTOSCALE
	),

	//
	ParamUIDesc(
	eParamUID_TailDecay,
	EDITTYPE_FLOAT,
	IDC_TAIL_DECAY_X, IDC_SPINNER_TAIL_DECAY_X,
	IDC_TAIL_DECAY_Y, IDC_SPINNER_TAIL_DECAY_Y,
	IDC_TAIL_DECAY_Z, IDC_SPINNER_TAIL_DECAY_Z,
	0.0f, 255.0f,
	SPIN_AUTOSCALE
	),
#endif

	// 
	ParamUIDesc(
	eParamUID_Head,
	TYPE_SINGLECHEKBOX,
	IDC_HEAD
	),

	// 
	ParamUIDesc(
	eParamUID_Tail,
	TYPE_SINGLECHEKBOX,
	IDC_TAIL
	),

	// 
	ParamUIDesc(
	eParamUID_UnShaded,
	TYPE_SINGLECHEKBOX,
	IDC_UNSHADED
	),

	// 
	ParamUIDesc(
	eParamUID_UnFogged,
	TYPE_SINGLECHEKBOX,
	IDC_UNFOGGED
	),

	// 
	ParamUIDesc(
	eParamUID_BlockByY0,
	TYPE_SINGLECHEKBOX,
	IDC_BLOCKBYY0
	),
};

#endif // __RainParamUIDesc_h__