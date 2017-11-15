#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t1625295921;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t243638650;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1612828713;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4176517891;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// SoundHandler
struct SoundHandler_t454119645;
// CharMovement
struct CharMovement_t3115874077;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// HeartSystem
struct HeartSystem_t3448635605;
// ChargeSystem
struct ChargeSystem_t321195793;
// GroundTester
struct GroundTester_t2202519556;
// TextBox
struct TextBox_t3430507396;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_t1304606600;
// Tiled2Unity.TiledMap
struct TiledMap_t4203693682;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T3783534221_H
#define U3CMODULEU3E_T3783534221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534221 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534221_H
#ifndef U3CMODULEU3E_T3783534220_H
#define U3CMODULEU3E_T3783534220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534220 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534220_H
#ifndef LOG_T1784328146_H
#define LOG_T1784328146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.Log
struct  Log_t1784328146  : public RuntimeObject
{
public:

public:
};

struct Log_t1784328146_StaticFields
{
public:
	// System.Boolean Tiled2Unity.Log::Enabled
	bool ___Enabled_0;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(Log_t1784328146_StaticFields, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOG_T1784328146_H
#ifndef TRACKABLEPROPERTY_T1304606600_H
#define TRACKABLEPROPERTY_T1304606600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty
struct  TrackableProperty_t1304606600  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t1625295921 * ___m_Fields_1;

public:
	inline static int32_t get_offset_of_m_Fields_1() { return static_cast<int32_t>(offsetof(TrackableProperty_t1304606600, ___m_Fields_1)); }
	inline List_1_t1625295921 * get_m_Fields_1() const { return ___m_Fields_1; }
	inline List_1_t1625295921 ** get_address_of_m_Fields_1() { return &___m_Fields_1; }
	inline void set_m_Fields_1(List_1_t1625295921 * value)
	{
		___m_Fields_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Fields_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEPROPERTY_T1304606600_H
#ifndef FIELDWITHTARGET_T2256174789_H
#define FIELDWITHTARGET_T2256174789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct  FieldWithTarget_t2256174789  : public RuntimeObject
{
public:
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_Target
	Object_t1021602117 * ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;

public:
	inline static int32_t get_offset_of_m_ParamName_0() { return static_cast<int32_t>(offsetof(FieldWithTarget_t2256174789, ___m_ParamName_0)); }
	inline String_t* get_m_ParamName_0() const { return ___m_ParamName_0; }
	inline String_t** get_address_of_m_ParamName_0() { return &___m_ParamName_0; }
	inline void set_m_ParamName_0(String_t* value)
	{
		___m_ParamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParamName_0), value);
	}

	inline static int32_t get_offset_of_m_Target_1() { return static_cast<int32_t>(offsetof(FieldWithTarget_t2256174789, ___m_Target_1)); }
	inline Object_t1021602117 * get_m_Target_1() const { return ___m_Target_1; }
	inline Object_t1021602117 ** get_address_of_m_Target_1() { return &___m_Target_1; }
	inline void set_m_Target_1(Object_t1021602117 * value)
	{
		___m_Target_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_1), value);
	}

	inline static int32_t get_offset_of_m_FieldPath_2() { return static_cast<int32_t>(offsetof(FieldWithTarget_t2256174789, ___m_FieldPath_2)); }
	inline String_t* get_m_FieldPath_2() const { return ___m_FieldPath_2; }
	inline String_t** get_address_of_m_FieldPath_2() { return &___m_FieldPath_2; }
	inline void set_m_FieldPath_2(String_t* value)
	{
		___m_FieldPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_FieldPath_2), value);
	}

	inline static int32_t get_offset_of_m_TypeString_3() { return static_cast<int32_t>(offsetof(FieldWithTarget_t2256174789, ___m_TypeString_3)); }
	inline String_t* get_m_TypeString_3() const { return ___m_TypeString_3; }
	inline String_t** get_address_of_m_TypeString_3() { return &___m_TypeString_3; }
	inline void set_m_TypeString_3(String_t* value)
	{
		___m_TypeString_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeString_3), value);
	}

	inline static int32_t get_offset_of_m_DoStatic_4() { return static_cast<int32_t>(offsetof(FieldWithTarget_t2256174789, ___m_DoStatic_4)); }
	inline bool get_m_DoStatic_4() const { return ___m_DoStatic_4; }
	inline bool* get_address_of_m_DoStatic_4() { return &___m_DoStatic_4; }
	inline void set_m_DoStatic_4(bool value)
	{
		___m_DoStatic_4 = value;
	}

	inline static int32_t get_offset_of_m_StaticString_5() { return static_cast<int32_t>(offsetof(FieldWithTarget_t2256174789, ___m_StaticString_5)); }
	inline String_t* get_m_StaticString_5() const { return ___m_StaticString_5; }
	inline String_t** get_address_of_m_StaticString_5() { return &___m_StaticString_5; }
	inline void set_m_StaticString_5(String_t* value)
	{
		___m_StaticString_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StaticString_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDWITHTARGET_T2256174789_H
#ifndef LOGGER_T1657802550_H
#define LOGGER_T1657802550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.Logger
struct  Logger_t1657802550  : public RuntimeObject
{
public:
	// System.String Tiled2Unity.Logger::message
	String_t* ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(Logger_t1657802550, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((&___message_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T1657802550_H
#ifndef GAMEOBJECTEXTENSIONS_T2804000149_H
#define GAMEOBJECTEXTENSIONS_T2804000149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.GameObjectExtensions
struct  GameObjectExtensions_t2804000149  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTEXTENSIONS_T2804000149_H
#ifndef BASEVERTEXEFFECT_T2504093552_H
#define BASEVERTEXEFFECT_T2504093552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseVertexEffect
struct  BaseVertexEffect_t2504093552  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEVERTEXEFFECT_T2504093552_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2020392075_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef VECTOR4_T2243707581_H
#define VECTOR4_T2243707581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t2243707581 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t2243707581, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t2243707581_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t2243707581  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t2243707581  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t2243707581  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t2243707581  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___zeroVector_5)); }
	inline Vector4_t2243707581  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t2243707581 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t2243707581  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___oneVector_6)); }
	inline Vector4_t2243707581  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t2243707581 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t2243707581  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t2243707581  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t2243707581 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t2243707581  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t2243707581_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t2243707581  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t2243707581 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t2243707581  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T2243707581_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef U24ARRAYTYPEU3D12_T1568637717_H
#define U24ARRAYTYPEU3D12_T1568637717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t1568637717 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t1568637717__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T1568637717_H
#ifndef MAPSTAGGERINDEX_T1842809421_H
#define MAPSTAGGERINDEX_T1842809421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TiledMap/MapStaggerIndex
struct  MapStaggerIndex_t1842809421 
{
public:
	// System.Int32 Tiled2Unity.TiledMap/MapStaggerIndex::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MapStaggerIndex_t1842809421, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPSTAGGERINDEX_T1842809421_H
#ifndef MAPSTAGGERAXIS_T1991880926_H
#define MAPSTAGGERAXIS_T1991880926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TiledMap/MapStaggerAxis
struct  MapStaggerAxis_t1991880926 
{
public:
	// System.Int32 Tiled2Unity.TiledMap/MapStaggerAxis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MapStaggerAxis_t1991880926, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPSTAGGERAXIS_T1991880926_H
#ifndef VERTEXHELPER_T385374196_H
#define VERTEXHELPER_T385374196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t385374196  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t1612828712 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t243638650 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t1612828711 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t1612828711 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t1612828711 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t1612828711 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t1612828712 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t1612828713 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t1440998580 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Positions_0)); }
	inline List_1_t1612828712 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t1612828712 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t1612828712 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Colors_1)); }
	inline List_1_t243638650 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t243638650 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t243638650 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv0S_2)); }
	inline List_1_t1612828711 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t1612828711 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t1612828711 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv1S_3)); }
	inline List_1_t1612828711 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t1612828711 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t1612828711 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv2S_4)); }
	inline List_1_t1612828711 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t1612828711 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t1612828711 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Uv3S_5)); }
	inline List_1_t1612828711 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t1612828711 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t1612828711 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Normals_6)); }
	inline List_1_t1612828712 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t1612828712 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t1612828712 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Tangents_7)); }
	inline List_1_t1612828713 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t1612828713 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t1612828713 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196, ___m_Indices_8)); }
	inline List_1_t1440998580 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t1440998580 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t1440998580 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t385374196_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t2243707581  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t2243707580  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t2243707581  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t2243707581 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t2243707581  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t385374196_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t2243707580  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t2243707580 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t2243707580  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T385374196_H
#ifndef MAPORIENTATION_T2782890834_H
#define MAPORIENTATION_T2782890834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TiledMap/MapOrientation
struct  MapOrientation_t2782890834 
{
public:
	// System.Int32 Tiled2Unity.TiledMap/MapOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MapOrientation_t2782890834, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPORIENTATION_T2782890834_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef TRIGGER_T1068911718_H
#define TRIGGER_T1068911718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker/Trigger
struct  Trigger_t1068911718 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker/Trigger::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Trigger_t1068911718, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGER_T1068911718_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305141_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1486305141  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46
	U24ArrayTypeU3D12_t1568637717  ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields, ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0)); }
	inline U24ArrayTypeU3D12_t1568637717  get_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() const { return ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline U24ArrayTypeU3D12_t1568637717 * get_address_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return &___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline void set_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(U24ArrayTypeU3D12_t1568637717  value)
	{
		___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305141_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef GETRAYINTERSECTIONALLCALLBACK_T2213949596_H
#define GETRAYINTERSECTIONALLCALLBACK_T2213949596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct  GetRayIntersectionAllCallback_t2213949596  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYINTERSECTIONALLCALLBACK_T2213949596_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef HEARTSYSTEM_T3448635605_H
#define HEARTSYSTEM_T3448635605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeartSystem
struct  HeartSystem_t3448635605  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HeartSystem::maxHearts
	int32_t ___maxHearts_2;
	// System.Int32 HeartSystem::startHearts
	int32_t ___startHearts_3;
	// System.Int32 HeartSystem::currentHealth
	int32_t ___currentHealth_4;
	// System.Int32 HeartSystem::maxHealth
	int32_t ___maxHealth_5;
	// System.Int32 HeartSystem::healthPerHeart
	int32_t ___healthPerHeart_6;
	// UnityEngine.UI.Image[] HeartSystem::heartImages
	ImageU5BU5D_t590162004* ___heartImages_7;
	// UnityEngine.Sprite[] HeartSystem::heartSprites
	SpriteU5BU5D_t3359083662* ___heartSprites_8;

public:
	inline static int32_t get_offset_of_maxHearts_2() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___maxHearts_2)); }
	inline int32_t get_maxHearts_2() const { return ___maxHearts_2; }
	inline int32_t* get_address_of_maxHearts_2() { return &___maxHearts_2; }
	inline void set_maxHearts_2(int32_t value)
	{
		___maxHearts_2 = value;
	}

	inline static int32_t get_offset_of_startHearts_3() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___startHearts_3)); }
	inline int32_t get_startHearts_3() const { return ___startHearts_3; }
	inline int32_t* get_address_of_startHearts_3() { return &___startHearts_3; }
	inline void set_startHearts_3(int32_t value)
	{
		___startHearts_3 = value;
	}

	inline static int32_t get_offset_of_currentHealth_4() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___currentHealth_4)); }
	inline int32_t get_currentHealth_4() const { return ___currentHealth_4; }
	inline int32_t* get_address_of_currentHealth_4() { return &___currentHealth_4; }
	inline void set_currentHealth_4(int32_t value)
	{
		___currentHealth_4 = value;
	}

	inline static int32_t get_offset_of_maxHealth_5() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___maxHealth_5)); }
	inline int32_t get_maxHealth_5() const { return ___maxHealth_5; }
	inline int32_t* get_address_of_maxHealth_5() { return &___maxHealth_5; }
	inline void set_maxHealth_5(int32_t value)
	{
		___maxHealth_5 = value;
	}

	inline static int32_t get_offset_of_healthPerHeart_6() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___healthPerHeart_6)); }
	inline int32_t get_healthPerHeart_6() const { return ___healthPerHeart_6; }
	inline int32_t* get_address_of_healthPerHeart_6() { return &___healthPerHeart_6; }
	inline void set_healthPerHeart_6(int32_t value)
	{
		___healthPerHeart_6 = value;
	}

	inline static int32_t get_offset_of_heartImages_7() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___heartImages_7)); }
	inline ImageU5BU5D_t590162004* get_heartImages_7() const { return ___heartImages_7; }
	inline ImageU5BU5D_t590162004** get_address_of_heartImages_7() { return &___heartImages_7; }
	inline void set_heartImages_7(ImageU5BU5D_t590162004* value)
	{
		___heartImages_7 = value;
		Il2CppCodeGenWriteBarrier((&___heartImages_7), value);
	}

	inline static int32_t get_offset_of_heartSprites_8() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___heartSprites_8)); }
	inline SpriteU5BU5D_t3359083662* get_heartSprites_8() const { return ___heartSprites_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_heartSprites_8() { return &___heartSprites_8; }
	inline void set_heartSprites_8(SpriteU5BU5D_t3359083662* value)
	{
		___heartSprites_8 = value;
		Il2CppCodeGenWriteBarrier((&___heartSprites_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEARTSYSTEM_T3448635605_H
#ifndef GROUNDTESTER_T2202519556_H
#define GROUNDTESTER_T2202519556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GroundTester
struct  GroundTester_t2202519556  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GroundTester::onGround
	bool ___onGround_2;
	// System.Boolean GroundTester::falling
	bool ___falling_3;
	// UnityEngine.Animator GroundTester::animator
	Animator_t69676727 * ___animator_4;
	// UnityEngine.GameObject GroundTester::player
	GameObject_t1756533147 * ___player_5;
	// UnityEngine.GameObject GroundTester::soundHandler
	GameObject_t1756533147 * ___soundHandler_6;
	// SoundHandler GroundTester::soundScript
	SoundHandler_t454119645 * ___soundScript_7;
	// CharMovement GroundTester::charScript
	CharMovement_t3115874077 * ___charScript_8;
	// UnityEngine.AudioSource GroundTester::audioSource
	AudioSource_t1135106623 * ___audioSource_9;
	// UnityEngine.AudioClip[] GroundTester::audioClip
	AudioClipU5BU5D_t2203355011* ___audioClip_10;

public:
	inline static int32_t get_offset_of_onGround_2() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___onGround_2)); }
	inline bool get_onGround_2() const { return ___onGround_2; }
	inline bool* get_address_of_onGround_2() { return &___onGround_2; }
	inline void set_onGround_2(bool value)
	{
		___onGround_2 = value;
	}

	inline static int32_t get_offset_of_falling_3() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___falling_3)); }
	inline bool get_falling_3() const { return ___falling_3; }
	inline bool* get_address_of_falling_3() { return &___falling_3; }
	inline void set_falling_3(bool value)
	{
		___falling_3 = value;
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___animator_4)); }
	inline Animator_t69676727 * get_animator_4() const { return ___animator_4; }
	inline Animator_t69676727 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t69676727 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___player_5)); }
	inline GameObject_t1756533147 * get_player_5() const { return ___player_5; }
	inline GameObject_t1756533147 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t1756533147 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((&___player_5), value);
	}

	inline static int32_t get_offset_of_soundHandler_6() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___soundHandler_6)); }
	inline GameObject_t1756533147 * get_soundHandler_6() const { return ___soundHandler_6; }
	inline GameObject_t1756533147 ** get_address_of_soundHandler_6() { return &___soundHandler_6; }
	inline void set_soundHandler_6(GameObject_t1756533147 * value)
	{
		___soundHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___soundHandler_6), value);
	}

	inline static int32_t get_offset_of_soundScript_7() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___soundScript_7)); }
	inline SoundHandler_t454119645 * get_soundScript_7() const { return ___soundScript_7; }
	inline SoundHandler_t454119645 ** get_address_of_soundScript_7() { return &___soundScript_7; }
	inline void set_soundScript_7(SoundHandler_t454119645 * value)
	{
		___soundScript_7 = value;
		Il2CppCodeGenWriteBarrier((&___soundScript_7), value);
	}

	inline static int32_t get_offset_of_charScript_8() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___charScript_8)); }
	inline CharMovement_t3115874077 * get_charScript_8() const { return ___charScript_8; }
	inline CharMovement_t3115874077 ** get_address_of_charScript_8() { return &___charScript_8; }
	inline void set_charScript_8(CharMovement_t3115874077 * value)
	{
		___charScript_8 = value;
		Il2CppCodeGenWriteBarrier((&___charScript_8), value);
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___audioSource_9)); }
	inline AudioSource_t1135106623 * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_t1135106623 * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_9), value);
	}

	inline static int32_t get_offset_of_audioClip_10() { return static_cast<int32_t>(offsetof(GroundTester_t2202519556, ___audioClip_10)); }
	inline AudioClipU5BU5D_t2203355011* get_audioClip_10() const { return ___audioClip_10; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_audioClip_10() { return &___audioClip_10; }
	inline void set_audioClip_10(AudioClipU5BU5D_t2203355011* value)
	{
		___audioClip_10 = value;
		Il2CppCodeGenWriteBarrier((&___audioClip_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUNDTESTER_T2202519556_H
#ifndef FOLLOWPLAYER_T782862732_H
#define FOLLOWPLAYER_T782862732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// followPlayer
struct  followPlayer_t782862732  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject followPlayer::player
	GameObject_t1756533147 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(followPlayer_t782862732, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWPLAYER_T782862732_H
#ifndef PORCUPINE_T1858591195_H
#define PORCUPINE_T1858591195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Porcupine
struct  Porcupine_t1858591195  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Porcupine::player
	GameObject_t1756533147 * ___player_2;
	// System.Single Porcupine::speed
	float ___speed_3;
	// System.Single Porcupine::distance
	float ___distance_4;
	// System.Boolean Porcupine::facingRight
	bool ___facingRight_5;
	// UnityEngine.GameObject Porcupine::TurnSensor
	GameObject_t1756533147 * ___TurnSensor_6;
	// System.Single Porcupine::oldPos
	float ___oldPos_7;
	// UnityEngine.Animator Porcupine::animator
	Animator_t69676727 * ___animator_8;
	// UnityEngine.Rigidbody2D Porcupine::rb
	Rigidbody2D_t502193897 * ___rb_9;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_facingRight_5() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___facingRight_5)); }
	inline bool get_facingRight_5() const { return ___facingRight_5; }
	inline bool* get_address_of_facingRight_5() { return &___facingRight_5; }
	inline void set_facingRight_5(bool value)
	{
		___facingRight_5 = value;
	}

	inline static int32_t get_offset_of_TurnSensor_6() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___TurnSensor_6)); }
	inline GameObject_t1756533147 * get_TurnSensor_6() const { return ___TurnSensor_6; }
	inline GameObject_t1756533147 ** get_address_of_TurnSensor_6() { return &___TurnSensor_6; }
	inline void set_TurnSensor_6(GameObject_t1756533147 * value)
	{
		___TurnSensor_6 = value;
		Il2CppCodeGenWriteBarrier((&___TurnSensor_6), value);
	}

	inline static int32_t get_offset_of_oldPos_7() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___oldPos_7)); }
	inline float get_oldPos_7() const { return ___oldPos_7; }
	inline float* get_address_of_oldPos_7() { return &___oldPos_7; }
	inline void set_oldPos_7(float value)
	{
		___oldPos_7 = value;
	}

	inline static int32_t get_offset_of_animator_8() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___animator_8)); }
	inline Animator_t69676727 * get_animator_8() const { return ___animator_8; }
	inline Animator_t69676727 ** get_address_of_animator_8() { return &___animator_8; }
	inline void set_animator_8(Animator_t69676727 * value)
	{
		___animator_8 = value;
		Il2CppCodeGenWriteBarrier((&___animator_8), value);
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(Porcupine_t1858591195, ___rb_9)); }
	inline Rigidbody2D_t502193897 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_t502193897 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((&___rb_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PORCUPINE_T1858591195_H
#ifndef PUNCHINGMUSHROOM_T3604644754_H
#define PUNCHINGMUSHROOM_T3604644754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PunchingMushroom
struct  PunchingMushroom_t3604644754  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PunchingMushroom::distance
	float ___distance_2;
	// UnityEngine.GameObject PunchingMushroom::arm
	GameObject_t1756533147 * ___arm_3;
	// UnityEngine.GameObject PunchingMushroom::player
	GameObject_t1756533147 * ___player_4;
	// System.Boolean PunchingMushroom::facingRight
	bool ___facingRight_5;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(PunchingMushroom_t3604644754, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_arm_3() { return static_cast<int32_t>(offsetof(PunchingMushroom_t3604644754, ___arm_3)); }
	inline GameObject_t1756533147 * get_arm_3() const { return ___arm_3; }
	inline GameObject_t1756533147 ** get_address_of_arm_3() { return &___arm_3; }
	inline void set_arm_3(GameObject_t1756533147 * value)
	{
		___arm_3 = value;
		Il2CppCodeGenWriteBarrier((&___arm_3), value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PunchingMushroom_t3604644754, ___player_4)); }
	inline GameObject_t1756533147 * get_player_4() const { return ___player_4; }
	inline GameObject_t1756533147 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1756533147 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_facingRight_5() { return static_cast<int32_t>(offsetof(PunchingMushroom_t3604644754, ___facingRight_5)); }
	inline bool get_facingRight_5() const { return ___facingRight_5; }
	inline bool* get_address_of_facingRight_5() { return &___facingRight_5; }
	inline void set_facingRight_5(bool value)
	{
		___facingRight_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUNCHINGMUSHROOM_T3604644754_H
#ifndef IMPORTBEHAVIOUR_T1918973942_H
#define IMPORTBEHAVIOUR_T1918973942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.ImportBehaviour
struct  ImportBehaviour_t1918973942  : public MonoBehaviour_t1158329972
{
public:
	// System.String Tiled2Unity.ImportBehaviour::Tiled2UnityXmlPath
	String_t* ___Tiled2UnityXmlPath_2;
	// System.String Tiled2Unity.ImportBehaviour::ExporterTiled2UnityVersion
	String_t* ___ExporterTiled2UnityVersion_3;

public:
	inline static int32_t get_offset_of_Tiled2UnityXmlPath_2() { return static_cast<int32_t>(offsetof(ImportBehaviour_t1918973942, ___Tiled2UnityXmlPath_2)); }
	inline String_t* get_Tiled2UnityXmlPath_2() const { return ___Tiled2UnityXmlPath_2; }
	inline String_t** get_address_of_Tiled2UnityXmlPath_2() { return &___Tiled2UnityXmlPath_2; }
	inline void set_Tiled2UnityXmlPath_2(String_t* value)
	{
		___Tiled2UnityXmlPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___Tiled2UnityXmlPath_2), value);
	}

	inline static int32_t get_offset_of_ExporterTiled2UnityVersion_3() { return static_cast<int32_t>(offsetof(ImportBehaviour_t1918973942, ___ExporterTiled2UnityVersion_3)); }
	inline String_t* get_ExporterTiled2UnityVersion_3() const { return ___ExporterTiled2UnityVersion_3; }
	inline String_t** get_address_of_ExporterTiled2UnityVersion_3() { return &___ExporterTiled2UnityVersion_3; }
	inline void set_ExporterTiled2UnityVersion_3(String_t* value)
	{
		___ExporterTiled2UnityVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___ExporterTiled2UnityVersion_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMPORTBEHAVIOUR_T1918973942_H
#ifndef TMXOBJECT_T815040978_H
#define TMXOBJECT_T815040978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TmxObject
struct  TmxObject_t815040978  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Tiled2Unity.TmxObject::TmxId
	int32_t ___TmxId_2;
	// System.String Tiled2Unity.TmxObject::TmxName
	String_t* ___TmxName_3;
	// System.String Tiled2Unity.TmxObject::TmxType
	String_t* ___TmxType_4;
	// UnityEngine.Vector2 Tiled2Unity.TmxObject::TmxPosition
	Vector2_t2243707579  ___TmxPosition_5;
	// UnityEngine.Vector2 Tiled2Unity.TmxObject::TmxSize
	Vector2_t2243707579  ___TmxSize_6;
	// System.Single Tiled2Unity.TmxObject::TmxRotation
	float ___TmxRotation_7;

public:
	inline static int32_t get_offset_of_TmxId_2() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxId_2)); }
	inline int32_t get_TmxId_2() const { return ___TmxId_2; }
	inline int32_t* get_address_of_TmxId_2() { return &___TmxId_2; }
	inline void set_TmxId_2(int32_t value)
	{
		___TmxId_2 = value;
	}

	inline static int32_t get_offset_of_TmxName_3() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxName_3)); }
	inline String_t* get_TmxName_3() const { return ___TmxName_3; }
	inline String_t** get_address_of_TmxName_3() { return &___TmxName_3; }
	inline void set_TmxName_3(String_t* value)
	{
		___TmxName_3 = value;
		Il2CppCodeGenWriteBarrier((&___TmxName_3), value);
	}

	inline static int32_t get_offset_of_TmxType_4() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxType_4)); }
	inline String_t* get_TmxType_4() const { return ___TmxType_4; }
	inline String_t** get_address_of_TmxType_4() { return &___TmxType_4; }
	inline void set_TmxType_4(String_t* value)
	{
		___TmxType_4 = value;
		Il2CppCodeGenWriteBarrier((&___TmxType_4), value);
	}

	inline static int32_t get_offset_of_TmxPosition_5() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxPosition_5)); }
	inline Vector2_t2243707579  get_TmxPosition_5() const { return ___TmxPosition_5; }
	inline Vector2_t2243707579 * get_address_of_TmxPosition_5() { return &___TmxPosition_5; }
	inline void set_TmxPosition_5(Vector2_t2243707579  value)
	{
		___TmxPosition_5 = value;
	}

	inline static int32_t get_offset_of_TmxSize_6() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxSize_6)); }
	inline Vector2_t2243707579  get_TmxSize_6() const { return ___TmxSize_6; }
	inline Vector2_t2243707579 * get_address_of_TmxSize_6() { return &___TmxSize_6; }
	inline void set_TmxSize_6(Vector2_t2243707579  value)
	{
		___TmxSize_6 = value;
	}

	inline static int32_t get_offset_of_TmxRotation_7() { return static_cast<int32_t>(offsetof(TmxObject_t815040978, ___TmxRotation_7)); }
	inline float get_TmxRotation_7() const { return ___TmxRotation_7; }
	inline float* get_address_of_TmxRotation_7() { return &___TmxRotation_7; }
	inline void set_TmxRotation_7(float value)
	{
		___TmxRotation_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMXOBJECT_T815040978_H
#ifndef CHARMOVEMENT_T3115874077_H
#define CHARMOVEMENT_T3115874077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharMovement
struct  CharMovement_t3115874077  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CharMovement::speed
	float ___speed_2;
	// System.Single CharMovement::height
	float ___height_3;
	// UnityEngine.GameObject CharMovement::bullet
	GameObject_t1756533147 * ___bullet_4;
	// UnityEngine.Rigidbody2D CharMovement::rb
	Rigidbody2D_t502193897 * ___rb_5;
	// System.Int32 CharMovement::hasJump
	int32_t ___hasJump_6;
	// UnityEngine.Animator CharMovement::animator
	Animator_t69676727 * ___animator_7;
	// UnityEngine.Animator CharMovement::assimAnimator
	Animator_t69676727 * ___assimAnimator_8;
	// System.Boolean CharMovement::moving
	bool ___moving_9;
	// System.Boolean CharMovement::facingRight
	bool ___facingRight_10;
	// System.Boolean CharMovement::playAnim
	bool ___playAnim_11;
	// UnityEngine.GameObject CharMovement::assimilator
	GameObject_t1756533147 * ___assimilator_12;
	// HeartSystem CharMovement::heartScript
	HeartSystem_t3448635605 * ___heartScript_13;
	// ChargeSystem CharMovement::chargeScript
	ChargeSystem_t321195793 * ___chargeScript_14;
	// GroundTester CharMovement::groundScript
	GroundTester_t2202519556 * ___groundScript_15;
	// UnityEngine.GameObject CharMovement::soundHandler
	GameObject_t1756533147 * ___soundHandler_16;
	// UnityEngine.GameObject CharMovement::groundTester
	GameObject_t1756533147 * ___groundTester_17;
	// SoundHandler CharMovement::soundScript
	SoundHandler_t454119645 * ___soundScript_18;
	// TextBox CharMovement::textScript
	TextBox_t3430507396 * ___textScript_19;
	// UnityEngine.AudioSource CharMovement::audioSource
	AudioSource_t1135106623 * ___audioSource_20;
	// UnityEngine.AudioClip[] CharMovement::audioClip
	AudioClipU5BU5D_t2203355011* ___audioClip_21;
	// System.Int32 CharMovement::jumpID
	int32_t ___jumpID_22;
	// System.Single CharMovement::startTime
	float ___startTime_23;
	// System.Boolean CharMovement::hasGun
	bool ___hasGun_24;
	// UnityEngine.Texture2D CharMovement::cursorTexture
	Texture2D_t3542995729 * ___cursorTexture_25;
	// System.Int32 CharMovement::firstTime
	int32_t ___firstTime_26;
	// System.Int32 CharMovement::tutorialTime
	int32_t ___tutorialTime_27;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_bullet_4() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___bullet_4)); }
	inline GameObject_t1756533147 * get_bullet_4() const { return ___bullet_4; }
	inline GameObject_t1756533147 ** get_address_of_bullet_4() { return &___bullet_4; }
	inline void set_bullet_4(GameObject_t1756533147 * value)
	{
		___bullet_4 = value;
		Il2CppCodeGenWriteBarrier((&___bullet_4), value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___rb_5)); }
	inline Rigidbody2D_t502193897 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_t502193897 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((&___rb_5), value);
	}

	inline static int32_t get_offset_of_hasJump_6() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___hasJump_6)); }
	inline int32_t get_hasJump_6() const { return ___hasJump_6; }
	inline int32_t* get_address_of_hasJump_6() { return &___hasJump_6; }
	inline void set_hasJump_6(int32_t value)
	{
		___hasJump_6 = value;
	}

	inline static int32_t get_offset_of_animator_7() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___animator_7)); }
	inline Animator_t69676727 * get_animator_7() const { return ___animator_7; }
	inline Animator_t69676727 ** get_address_of_animator_7() { return &___animator_7; }
	inline void set_animator_7(Animator_t69676727 * value)
	{
		___animator_7 = value;
		Il2CppCodeGenWriteBarrier((&___animator_7), value);
	}

	inline static int32_t get_offset_of_assimAnimator_8() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___assimAnimator_8)); }
	inline Animator_t69676727 * get_assimAnimator_8() const { return ___assimAnimator_8; }
	inline Animator_t69676727 ** get_address_of_assimAnimator_8() { return &___assimAnimator_8; }
	inline void set_assimAnimator_8(Animator_t69676727 * value)
	{
		___assimAnimator_8 = value;
		Il2CppCodeGenWriteBarrier((&___assimAnimator_8), value);
	}

	inline static int32_t get_offset_of_moving_9() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___moving_9)); }
	inline bool get_moving_9() const { return ___moving_9; }
	inline bool* get_address_of_moving_9() { return &___moving_9; }
	inline void set_moving_9(bool value)
	{
		___moving_9 = value;
	}

	inline static int32_t get_offset_of_facingRight_10() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___facingRight_10)); }
	inline bool get_facingRight_10() const { return ___facingRight_10; }
	inline bool* get_address_of_facingRight_10() { return &___facingRight_10; }
	inline void set_facingRight_10(bool value)
	{
		___facingRight_10 = value;
	}

	inline static int32_t get_offset_of_playAnim_11() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___playAnim_11)); }
	inline bool get_playAnim_11() const { return ___playAnim_11; }
	inline bool* get_address_of_playAnim_11() { return &___playAnim_11; }
	inline void set_playAnim_11(bool value)
	{
		___playAnim_11 = value;
	}

	inline static int32_t get_offset_of_assimilator_12() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___assimilator_12)); }
	inline GameObject_t1756533147 * get_assimilator_12() const { return ___assimilator_12; }
	inline GameObject_t1756533147 ** get_address_of_assimilator_12() { return &___assimilator_12; }
	inline void set_assimilator_12(GameObject_t1756533147 * value)
	{
		___assimilator_12 = value;
		Il2CppCodeGenWriteBarrier((&___assimilator_12), value);
	}

	inline static int32_t get_offset_of_heartScript_13() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___heartScript_13)); }
	inline HeartSystem_t3448635605 * get_heartScript_13() const { return ___heartScript_13; }
	inline HeartSystem_t3448635605 ** get_address_of_heartScript_13() { return &___heartScript_13; }
	inline void set_heartScript_13(HeartSystem_t3448635605 * value)
	{
		___heartScript_13 = value;
		Il2CppCodeGenWriteBarrier((&___heartScript_13), value);
	}

	inline static int32_t get_offset_of_chargeScript_14() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___chargeScript_14)); }
	inline ChargeSystem_t321195793 * get_chargeScript_14() const { return ___chargeScript_14; }
	inline ChargeSystem_t321195793 ** get_address_of_chargeScript_14() { return &___chargeScript_14; }
	inline void set_chargeScript_14(ChargeSystem_t321195793 * value)
	{
		___chargeScript_14 = value;
		Il2CppCodeGenWriteBarrier((&___chargeScript_14), value);
	}

	inline static int32_t get_offset_of_groundScript_15() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___groundScript_15)); }
	inline GroundTester_t2202519556 * get_groundScript_15() const { return ___groundScript_15; }
	inline GroundTester_t2202519556 ** get_address_of_groundScript_15() { return &___groundScript_15; }
	inline void set_groundScript_15(GroundTester_t2202519556 * value)
	{
		___groundScript_15 = value;
		Il2CppCodeGenWriteBarrier((&___groundScript_15), value);
	}

	inline static int32_t get_offset_of_soundHandler_16() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___soundHandler_16)); }
	inline GameObject_t1756533147 * get_soundHandler_16() const { return ___soundHandler_16; }
	inline GameObject_t1756533147 ** get_address_of_soundHandler_16() { return &___soundHandler_16; }
	inline void set_soundHandler_16(GameObject_t1756533147 * value)
	{
		___soundHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___soundHandler_16), value);
	}

	inline static int32_t get_offset_of_groundTester_17() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___groundTester_17)); }
	inline GameObject_t1756533147 * get_groundTester_17() const { return ___groundTester_17; }
	inline GameObject_t1756533147 ** get_address_of_groundTester_17() { return &___groundTester_17; }
	inline void set_groundTester_17(GameObject_t1756533147 * value)
	{
		___groundTester_17 = value;
		Il2CppCodeGenWriteBarrier((&___groundTester_17), value);
	}

	inline static int32_t get_offset_of_soundScript_18() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___soundScript_18)); }
	inline SoundHandler_t454119645 * get_soundScript_18() const { return ___soundScript_18; }
	inline SoundHandler_t454119645 ** get_address_of_soundScript_18() { return &___soundScript_18; }
	inline void set_soundScript_18(SoundHandler_t454119645 * value)
	{
		___soundScript_18 = value;
		Il2CppCodeGenWriteBarrier((&___soundScript_18), value);
	}

	inline static int32_t get_offset_of_textScript_19() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___textScript_19)); }
	inline TextBox_t3430507396 * get_textScript_19() const { return ___textScript_19; }
	inline TextBox_t3430507396 ** get_address_of_textScript_19() { return &___textScript_19; }
	inline void set_textScript_19(TextBox_t3430507396 * value)
	{
		___textScript_19 = value;
		Il2CppCodeGenWriteBarrier((&___textScript_19), value);
	}

	inline static int32_t get_offset_of_audioSource_20() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___audioSource_20)); }
	inline AudioSource_t1135106623 * get_audioSource_20() const { return ___audioSource_20; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_20() { return &___audioSource_20; }
	inline void set_audioSource_20(AudioSource_t1135106623 * value)
	{
		___audioSource_20 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_20), value);
	}

	inline static int32_t get_offset_of_audioClip_21() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___audioClip_21)); }
	inline AudioClipU5BU5D_t2203355011* get_audioClip_21() const { return ___audioClip_21; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_audioClip_21() { return &___audioClip_21; }
	inline void set_audioClip_21(AudioClipU5BU5D_t2203355011* value)
	{
		___audioClip_21 = value;
		Il2CppCodeGenWriteBarrier((&___audioClip_21), value);
	}

	inline static int32_t get_offset_of_jumpID_22() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___jumpID_22)); }
	inline int32_t get_jumpID_22() const { return ___jumpID_22; }
	inline int32_t* get_address_of_jumpID_22() { return &___jumpID_22; }
	inline void set_jumpID_22(int32_t value)
	{
		___jumpID_22 = value;
	}

	inline static int32_t get_offset_of_startTime_23() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___startTime_23)); }
	inline float get_startTime_23() const { return ___startTime_23; }
	inline float* get_address_of_startTime_23() { return &___startTime_23; }
	inline void set_startTime_23(float value)
	{
		___startTime_23 = value;
	}

	inline static int32_t get_offset_of_hasGun_24() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___hasGun_24)); }
	inline bool get_hasGun_24() const { return ___hasGun_24; }
	inline bool* get_address_of_hasGun_24() { return &___hasGun_24; }
	inline void set_hasGun_24(bool value)
	{
		___hasGun_24 = value;
	}

	inline static int32_t get_offset_of_cursorTexture_25() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___cursorTexture_25)); }
	inline Texture2D_t3542995729 * get_cursorTexture_25() const { return ___cursorTexture_25; }
	inline Texture2D_t3542995729 ** get_address_of_cursorTexture_25() { return &___cursorTexture_25; }
	inline void set_cursorTexture_25(Texture2D_t3542995729 * value)
	{
		___cursorTexture_25 = value;
		Il2CppCodeGenWriteBarrier((&___cursorTexture_25), value);
	}

	inline static int32_t get_offset_of_firstTime_26() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___firstTime_26)); }
	inline int32_t get_firstTime_26() const { return ___firstTime_26; }
	inline int32_t* get_address_of_firstTime_26() { return &___firstTime_26; }
	inline void set_firstTime_26(int32_t value)
	{
		___firstTime_26 = value;
	}

	inline static int32_t get_offset_of_tutorialTime_27() { return static_cast<int32_t>(offsetof(CharMovement_t3115874077, ___tutorialTime_27)); }
	inline int32_t get_tutorialTime_27() const { return ___tutorialTime_27; }
	inline int32_t* get_address_of_tutorialTime_27() { return &___tutorialTime_27; }
	inline void set_tutorialTime_27(int32_t value)
	{
		___tutorialTime_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARMOVEMENT_T3115874077_H
#ifndef BATMOVEMENT_T18915038_H
#define BATMOVEMENT_T18915038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatMovement
struct  BatMovement_t18915038  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BatMovement::player
	GameObject_t1756533147 * ___player_2;
	// System.Single BatMovement::speed
	float ___speed_3;
	// System.Single BatMovement::distance
	float ___distance_4;
	// System.Boolean BatMovement::facingRight
	bool ___facingRight_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(BatMovement_t18915038, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BatMovement_t18915038, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(BatMovement_t18915038, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_facingRight_5() { return static_cast<int32_t>(offsetof(BatMovement_t18915038, ___facingRight_5)); }
	inline bool get_facingRight_5() const { return ___facingRight_5; }
	inline bool* get_address_of_facingRight_5() { return &___facingRight_5; }
	inline void set_facingRight_5(bool value)
	{
		___facingRight_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATMOVEMENT_T18915038_H
#ifndef ASSIMSCRIPT_T415919828_H
#define ASSIMSCRIPT_T415919828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssimScript
struct  AssimScript_t415919828  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AssimScript::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.Vector3 AssimScript::v3Pos
	Vector3_t2243707580  ___v3Pos_3;
	// System.Single AssimScript::angle
	float ___angle_4;
	// System.Single AssimScript::distance
	float ___distance_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(AssimScript_t415919828, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_v3Pos_3() { return static_cast<int32_t>(offsetof(AssimScript_t415919828, ___v3Pos_3)); }
	inline Vector3_t2243707580  get_v3Pos_3() const { return ___v3Pos_3; }
	inline Vector3_t2243707580 * get_address_of_v3Pos_3() { return &___v3Pos_3; }
	inline void set_v3Pos_3(Vector3_t2243707580  value)
	{
		___v3Pos_3 = value;
	}

	inline static int32_t get_offset_of_angle_4() { return static_cast<int32_t>(offsetof(AssimScript_t415919828, ___angle_4)); }
	inline float get_angle_4() const { return ___angle_4; }
	inline float* get_address_of_angle_4() { return &___angle_4; }
	inline void set_angle_4(float value)
	{
		___angle_4 = value;
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(AssimScript_t415919828, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSIMSCRIPT_T415919828_H
#ifndef ANALYTICSTRACKER_T2191537572_H
#define ANALYTICSTRACKER_T2191537572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsTracker
struct  AnalyticsTracker_t2191537572  : public MonoBehaviour_t1158329972
{
public:
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_t309261261 * ___m_Dict_3;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_4;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_t1304606600 * ___m_TrackableProperty_5;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_6;

public:
	inline static int32_t get_offset_of_m_EventName_2() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_EventName_2)); }
	inline String_t* get_m_EventName_2() const { return ___m_EventName_2; }
	inline String_t** get_address_of_m_EventName_2() { return &___m_EventName_2; }
	inline void set_m_EventName_2(String_t* value)
	{
		___m_EventName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventName_2), value);
	}

	inline static int32_t get_offset_of_m_Dict_3() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_Dict_3)); }
	inline Dictionary_2_t309261261 * get_m_Dict_3() const { return ___m_Dict_3; }
	inline Dictionary_2_t309261261 ** get_address_of_m_Dict_3() { return &___m_Dict_3; }
	inline void set_m_Dict_3(Dictionary_2_t309261261 * value)
	{
		___m_Dict_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dict_3), value);
	}

	inline static int32_t get_offset_of_m_PrevDictHash_4() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_PrevDictHash_4)); }
	inline int32_t get_m_PrevDictHash_4() const { return ___m_PrevDictHash_4; }
	inline int32_t* get_address_of_m_PrevDictHash_4() { return &___m_PrevDictHash_4; }
	inline void set_m_PrevDictHash_4(int32_t value)
	{
		___m_PrevDictHash_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackableProperty_5() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_TrackableProperty_5)); }
	inline TrackableProperty_t1304606600 * get_m_TrackableProperty_5() const { return ___m_TrackableProperty_5; }
	inline TrackableProperty_t1304606600 ** get_address_of_m_TrackableProperty_5() { return &___m_TrackableProperty_5; }
	inline void set_m_TrackableProperty_5(TrackableProperty_t1304606600 * value)
	{
		___m_TrackableProperty_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableProperty_5), value);
	}

	inline static int32_t get_offset_of_m_Trigger_6() { return static_cast<int32_t>(offsetof(AnalyticsTracker_t2191537572, ___m_Trigger_6)); }
	inline int32_t get_m_Trigger_6() const { return ___m_Trigger_6; }
	inline int32_t* get_address_of_m_Trigger_6() { return &___m_Trigger_6; }
	inline void set_m_Trigger_6(int32_t value)
	{
		___m_Trigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSTRACKER_T2191537572_H
#ifndef BOUNCYMUSHROOM_T2944787622_H
#define BOUNCYMUSHROOM_T2944787622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BouncyMushroom
struct  BouncyMushroom_t2944787622  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNCYMUSHROOM_T2944787622_H
#ifndef CHARGESYSTEM_T321195793_H
#define CHARGESYSTEM_T321195793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChargeSystem
struct  ChargeSystem_t321195793  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image[] ChargeSystem::chargeImages
	ImageU5BU5D_t590162004* ___chargeImages_2;
	// UnityEngine.Sprite[] ChargeSystem::batSprites
	SpriteU5BU5D_t3359083662* ___batSprites_3;
	// System.Int32 ChargeSystem::nextSprite
	int32_t ___nextSprite_4;
	// System.Int32 ChargeSystem::currentImg
	int32_t ___currentImg_5;
	// System.Int32 ChargeSystem::maxImg
	int32_t ___maxImg_6;
	// System.Int32 ChargeSystem::charges
	int32_t ___charges_7;
	// System.String ChargeSystem::chargeType
	String_t* ___chargeType_8;
	// UnityEngine.GameObject ChargeSystem::assimilator
	GameObject_t1756533147 * ___assimilator_9;

public:
	inline static int32_t get_offset_of_chargeImages_2() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___chargeImages_2)); }
	inline ImageU5BU5D_t590162004* get_chargeImages_2() const { return ___chargeImages_2; }
	inline ImageU5BU5D_t590162004** get_address_of_chargeImages_2() { return &___chargeImages_2; }
	inline void set_chargeImages_2(ImageU5BU5D_t590162004* value)
	{
		___chargeImages_2 = value;
		Il2CppCodeGenWriteBarrier((&___chargeImages_2), value);
	}

	inline static int32_t get_offset_of_batSprites_3() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___batSprites_3)); }
	inline SpriteU5BU5D_t3359083662* get_batSprites_3() const { return ___batSprites_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_batSprites_3() { return &___batSprites_3; }
	inline void set_batSprites_3(SpriteU5BU5D_t3359083662* value)
	{
		___batSprites_3 = value;
		Il2CppCodeGenWriteBarrier((&___batSprites_3), value);
	}

	inline static int32_t get_offset_of_nextSprite_4() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___nextSprite_4)); }
	inline int32_t get_nextSprite_4() const { return ___nextSprite_4; }
	inline int32_t* get_address_of_nextSprite_4() { return &___nextSprite_4; }
	inline void set_nextSprite_4(int32_t value)
	{
		___nextSprite_4 = value;
	}

	inline static int32_t get_offset_of_currentImg_5() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___currentImg_5)); }
	inline int32_t get_currentImg_5() const { return ___currentImg_5; }
	inline int32_t* get_address_of_currentImg_5() { return &___currentImg_5; }
	inline void set_currentImg_5(int32_t value)
	{
		___currentImg_5 = value;
	}

	inline static int32_t get_offset_of_maxImg_6() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___maxImg_6)); }
	inline int32_t get_maxImg_6() const { return ___maxImg_6; }
	inline int32_t* get_address_of_maxImg_6() { return &___maxImg_6; }
	inline void set_maxImg_6(int32_t value)
	{
		___maxImg_6 = value;
	}

	inline static int32_t get_offset_of_charges_7() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___charges_7)); }
	inline int32_t get_charges_7() const { return ___charges_7; }
	inline int32_t* get_address_of_charges_7() { return &___charges_7; }
	inline void set_charges_7(int32_t value)
	{
		___charges_7 = value;
	}

	inline static int32_t get_offset_of_chargeType_8() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___chargeType_8)); }
	inline String_t* get_chargeType_8() const { return ___chargeType_8; }
	inline String_t** get_address_of_chargeType_8() { return &___chargeType_8; }
	inline void set_chargeType_8(String_t* value)
	{
		___chargeType_8 = value;
		Il2CppCodeGenWriteBarrier((&___chargeType_8), value);
	}

	inline static int32_t get_offset_of_assimilator_9() { return static_cast<int32_t>(offsetof(ChargeSystem_t321195793, ___assimilator_9)); }
	inline GameObject_t1756533147 * get_assimilator_9() const { return ___assimilator_9; }
	inline GameObject_t1756533147 ** get_address_of_assimilator_9() { return &___assimilator_9; }
	inline void set_assimilator_9(GameObject_t1756533147 * value)
	{
		___assimilator_9 = value;
		Il2CppCodeGenWriteBarrier((&___assimilator_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARGESYSTEM_T321195793_H
#ifndef BULLETSCRIPT_T1317259639_H
#define BULLETSCRIPT_T1317259639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletScript
struct  BulletScript_t1317259639  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BulletScript::player
	GameObject_t1756533147 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(BulletScript_t1317259639, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BULLETSCRIPT_T1317259639_H
#ifndef UIBEHAVIOUR_T3960014691_H
#define UIBEHAVIOUR_T3960014691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3960014691  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3960014691_H
#ifndef GPUINSTANCING_T4075254300_H
#define GPUINSTANCING_T4075254300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.GPUInstancing
struct  GPUInstancing_t4075254300  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Tiled2Unity.GPUInstancing::Opacity
	float ___Opacity_2;

public:
	inline static int32_t get_offset_of_Opacity_2() { return static_cast<int32_t>(offsetof(GPUInstancing_t4075254300, ___Opacity_2)); }
	inline float get_Opacity_2() const { return ___Opacity_2; }
	inline float* get_address_of_Opacity_2() { return &___Opacity_2; }
	inline void set_Opacity_2(float value)
	{
		___Opacity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPUINSTANCING_T4075254300_H
#ifndef SORTINGLAYEREXPOSED_T870693243_H
#define SORTINGLAYEREXPOSED_T870693243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.SortingLayerExposed
struct  SortingLayerExposed_t870693243  : public MonoBehaviour_t1158329972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYEREXPOSED_T870693243_H
#ifndef SOUNDHANDLER_T454119645_H
#define SOUNDHANDLER_T454119645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundHandler
struct  SoundHandler_t454119645  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] SoundHandler::audioClips
	AudioClipU5BU5D_t2203355011* ___audioClips_2;
	// UnityEngine.AudioSource SoundHandler::Audio
	AudioSource_t1135106623 * ___Audio_3;

public:
	inline static int32_t get_offset_of_audioClips_2() { return static_cast<int32_t>(offsetof(SoundHandler_t454119645, ___audioClips_2)); }
	inline AudioClipU5BU5D_t2203355011* get_audioClips_2() const { return ___audioClips_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_audioClips_2() { return &___audioClips_2; }
	inline void set_audioClips_2(AudioClipU5BU5D_t2203355011* value)
	{
		___audioClips_2 = value;
		Il2CppCodeGenWriteBarrier((&___audioClips_2), value);
	}

	inline static int32_t get_offset_of_Audio_3() { return static_cast<int32_t>(offsetof(SoundHandler_t454119645, ___Audio_3)); }
	inline AudioSource_t1135106623 * get_Audio_3() const { return ___Audio_3; }
	inline AudioSource_t1135106623 ** get_address_of_Audio_3() { return &___Audio_3; }
	inline void set_Audio_3(AudioSource_t1135106623 * value)
	{
		___Audio_3 = value;
		Il2CppCodeGenWriteBarrier((&___Audio_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDHANDLER_T454119645_H
#ifndef LAYER_T2836155725_H
#define LAYER_T2836155725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.Layer
struct  Layer_t2836155725  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 Tiled2Unity.Layer::Offset
	Vector2_t2243707579  ___Offset_2;

public:
	inline static int32_t get_offset_of_Offset_2() { return static_cast<int32_t>(offsetof(Layer_t2836155725, ___Offset_2)); }
	inline Vector2_t2243707579  get_Offset_2() const { return ___Offset_2; }
	inline Vector2_t2243707579 * get_address_of_Offset_2() { return &___Offset_2; }
	inline void set_Offset_2(Vector2_t2243707579  value)
	{
		___Offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYER_T2836155725_H
#ifndef TEXTBOX_T3430507396_H
#define TEXTBOX_T3430507396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBox
struct  TextBox_t3430507396  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TextBox::textBox
	GameObject_t1756533147 * ___textBox_2;
	// System.Single TextBox::timeout
	float ___timeout_3;
	// System.Single TextBox::myTimeout
	float ___myTimeout_4;

public:
	inline static int32_t get_offset_of_textBox_2() { return static_cast<int32_t>(offsetof(TextBox_t3430507396, ___textBox_2)); }
	inline GameObject_t1756533147 * get_textBox_2() const { return ___textBox_2; }
	inline GameObject_t1756533147 ** get_address_of_textBox_2() { return &___textBox_2; }
	inline void set_textBox_2(GameObject_t1756533147 * value)
	{
		___textBox_2 = value;
		Il2CppCodeGenWriteBarrier((&___textBox_2), value);
	}

	inline static int32_t get_offset_of_timeout_3() { return static_cast<int32_t>(offsetof(TextBox_t3430507396, ___timeout_3)); }
	inline float get_timeout_3() const { return ___timeout_3; }
	inline float* get_address_of_timeout_3() { return &___timeout_3; }
	inline void set_timeout_3(float value)
	{
		___timeout_3 = value;
	}

	inline static int32_t get_offset_of_myTimeout_4() { return static_cast<int32_t>(offsetof(TextBox_t3430507396, ___myTimeout_4)); }
	inline float get_myTimeout_4() const { return ___myTimeout_4; }
	inline float* get_address_of_myTimeout_4() { return &___myTimeout_4; }
	inline void set_myTimeout_4(float value)
	{
		___myTimeout_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTBOX_T3430507396_H
#ifndef SPRITEDEPTHINMAP_T2395493699_H
#define SPRITEDEPTHINMAP_T2395493699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.SpriteDepthInMap
struct  SpriteDepthInMap_t2395493699  : public MonoBehaviour_t1158329972
{
public:
	// Tiled2Unity.TiledMap Tiled2Unity.SpriteDepthInMap::AttachedMap
	TiledMap_t4203693682 * ___AttachedMap_2;
	// System.Int32 Tiled2Unity.SpriteDepthInMap::InteractWithLayer
	int32_t ___InteractWithLayer_3;
	// System.Int32 Tiled2Unity.SpriteDepthInMap::TilesetHeight
	int32_t ___TilesetHeight_4;

public:
	inline static int32_t get_offset_of_AttachedMap_2() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___AttachedMap_2)); }
	inline TiledMap_t4203693682 * get_AttachedMap_2() const { return ___AttachedMap_2; }
	inline TiledMap_t4203693682 ** get_address_of_AttachedMap_2() { return &___AttachedMap_2; }
	inline void set_AttachedMap_2(TiledMap_t4203693682 * value)
	{
		___AttachedMap_2 = value;
		Il2CppCodeGenWriteBarrier((&___AttachedMap_2), value);
	}

	inline static int32_t get_offset_of_InteractWithLayer_3() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___InteractWithLayer_3)); }
	inline int32_t get_InteractWithLayer_3() const { return ___InteractWithLayer_3; }
	inline int32_t* get_address_of_InteractWithLayer_3() { return &___InteractWithLayer_3; }
	inline void set_InteractWithLayer_3(int32_t value)
	{
		___InteractWithLayer_3 = value;
	}

	inline static int32_t get_offset_of_TilesetHeight_4() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___TilesetHeight_4)); }
	inline int32_t get_TilesetHeight_4() const { return ___TilesetHeight_4; }
	inline int32_t* get_address_of_TilesetHeight_4() { return &___TilesetHeight_4; }
	inline void set_TilesetHeight_4(int32_t value)
	{
		___TilesetHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEDEPTHINMAP_T2395493699_H
#ifndef REACHINGTHEEDGE_T142593037_H
#define REACHINGTHEEDGE_T142593037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReachingTheEdge
struct  ReachingTheEdge_t142593037  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ReachingTheEdge::turn
	bool ___turn_2;

public:
	inline static int32_t get_offset_of_turn_2() { return static_cast<int32_t>(offsetof(ReachingTheEdge_t142593037, ___turn_2)); }
	inline bool get_turn_2() const { return ___turn_2; }
	inline bool* get_address_of_turn_2() { return &___turn_2; }
	inline void set_turn_2(bool value)
	{
		___turn_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REACHINGTHEEDGE_T142593037_H
#ifndef ROCKMONSTER_T3127955507_H
#define ROCKMONSTER_T3127955507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RockMonster
struct  RockMonster_t3127955507  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean RockMonster::facingRight
	bool ___facingRight_2;
	// System.Single RockMonster::oldPos
	float ___oldPos_3;
	// UnityEngine.Animator RockMonster::animator
	Animator_t69676727 * ___animator_4;
	// System.Single RockMonster::distance
	float ___distance_5;
	// UnityEngine.GameObject RockMonster::player
	GameObject_t1756533147 * ___player_6;
	// System.Single RockMonster::speed
	float ___speed_7;
	// UnityEngine.GameObject RockMonster::TurnSensor
	GameObject_t1756533147 * ___TurnSensor_8;

public:
	inline static int32_t get_offset_of_facingRight_2() { return static_cast<int32_t>(offsetof(RockMonster_t3127955507, ___facingRight_2)); }
	inline bool get_facingRight_2() const { return ___facingRight_2; }
	inline bool* get_address_of_facingRight_2() { return &___facingRight_2; }
	inline void set_facingRight_2(bool value)
	{
		___facingRight_2 = value;
	}

	inline static int32_t get_offset_of_oldPos_3() { return static_cast<int32_t>(offsetof(RockMonster_t3127955507, ___oldPos_3)); }
	inline float get_oldPos_3() const { return ___oldPos_3; }
	inline float* get_address_of_oldPos_3() { return &___oldPos_3; }
	inline void set_oldPos_3(float value)
	{
		___oldPos_3 = value;
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(RockMonster_t3127955507, ___animator_4)); }
	inline Animator_t69676727 * get_animator_4() const { return ___animator_4; }
	inline Animator_t69676727 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t69676727 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(RockMonster_t3127955507, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(RockMonster_t3127955507, ___player_6)); }
	inline GameObject_t1756533147 * get_player_6() const { return ___player_6; }
	inline GameObject_t1756533147 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_t1756533147 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((&___player_6), value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(RockMonster_t3127955507, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_TurnSensor_8() { return static_cast<int32_t>(offsetof(RockMonster_t3127955507, ___TurnSensor_8)); }
	inline GameObject_t1756533147 * get_TurnSensor_8() const { return ___TurnSensor_8; }
	inline GameObject_t1756533147 ** get_address_of_TurnSensor_8() { return &___TurnSensor_8; }
	inline void set_TurnSensor_8(GameObject_t1756533147 * value)
	{
		___TurnSensor_8 = value;
		Il2CppCodeGenWriteBarrier((&___TurnSensor_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROCKMONSTER_T3127955507_H
#ifndef TILEDMAP_T4203693682_H
#define TILEDMAP_T4203693682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TiledMap
struct  TiledMap_t4203693682  : public MonoBehaviour_t1158329972
{
public:
	// Tiled2Unity.TiledMap/MapOrientation Tiled2Unity.TiledMap::Orientation
	int32_t ___Orientation_2;
	// Tiled2Unity.TiledMap/MapStaggerAxis Tiled2Unity.TiledMap::StaggerAxis
	int32_t ___StaggerAxis_3;
	// Tiled2Unity.TiledMap/MapStaggerIndex Tiled2Unity.TiledMap::StaggerIndex
	int32_t ___StaggerIndex_4;
	// System.Int32 Tiled2Unity.TiledMap::HexSideLength
	int32_t ___HexSideLength_5;
	// System.Int32 Tiled2Unity.TiledMap::NumLayers
	int32_t ___NumLayers_6;
	// System.Int32 Tiled2Unity.TiledMap::NumTilesWide
	int32_t ___NumTilesWide_7;
	// System.Int32 Tiled2Unity.TiledMap::NumTilesHigh
	int32_t ___NumTilesHigh_8;
	// System.Int32 Tiled2Unity.TiledMap::TileWidth
	int32_t ___TileWidth_9;
	// System.Int32 Tiled2Unity.TiledMap::TileHeight
	int32_t ___TileHeight_10;
	// System.Single Tiled2Unity.TiledMap::ExportScale
	float ___ExportScale_11;
	// System.Int32 Tiled2Unity.TiledMap::MapWidthInPixels
	int32_t ___MapWidthInPixels_12;
	// System.Int32 Tiled2Unity.TiledMap::MapHeightInPixels
	int32_t ___MapHeightInPixels_13;
	// UnityEngine.Color Tiled2Unity.TiledMap::BackgroundColor
	Color_t2020392075  ___BackgroundColor_14;

public:
	inline static int32_t get_offset_of_Orientation_2() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___Orientation_2)); }
	inline int32_t get_Orientation_2() const { return ___Orientation_2; }
	inline int32_t* get_address_of_Orientation_2() { return &___Orientation_2; }
	inline void set_Orientation_2(int32_t value)
	{
		___Orientation_2 = value;
	}

	inline static int32_t get_offset_of_StaggerAxis_3() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___StaggerAxis_3)); }
	inline int32_t get_StaggerAxis_3() const { return ___StaggerAxis_3; }
	inline int32_t* get_address_of_StaggerAxis_3() { return &___StaggerAxis_3; }
	inline void set_StaggerAxis_3(int32_t value)
	{
		___StaggerAxis_3 = value;
	}

	inline static int32_t get_offset_of_StaggerIndex_4() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___StaggerIndex_4)); }
	inline int32_t get_StaggerIndex_4() const { return ___StaggerIndex_4; }
	inline int32_t* get_address_of_StaggerIndex_4() { return &___StaggerIndex_4; }
	inline void set_StaggerIndex_4(int32_t value)
	{
		___StaggerIndex_4 = value;
	}

	inline static int32_t get_offset_of_HexSideLength_5() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___HexSideLength_5)); }
	inline int32_t get_HexSideLength_5() const { return ___HexSideLength_5; }
	inline int32_t* get_address_of_HexSideLength_5() { return &___HexSideLength_5; }
	inline void set_HexSideLength_5(int32_t value)
	{
		___HexSideLength_5 = value;
	}

	inline static int32_t get_offset_of_NumLayers_6() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___NumLayers_6)); }
	inline int32_t get_NumLayers_6() const { return ___NumLayers_6; }
	inline int32_t* get_address_of_NumLayers_6() { return &___NumLayers_6; }
	inline void set_NumLayers_6(int32_t value)
	{
		___NumLayers_6 = value;
	}

	inline static int32_t get_offset_of_NumTilesWide_7() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___NumTilesWide_7)); }
	inline int32_t get_NumTilesWide_7() const { return ___NumTilesWide_7; }
	inline int32_t* get_address_of_NumTilesWide_7() { return &___NumTilesWide_7; }
	inline void set_NumTilesWide_7(int32_t value)
	{
		___NumTilesWide_7 = value;
	}

	inline static int32_t get_offset_of_NumTilesHigh_8() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___NumTilesHigh_8)); }
	inline int32_t get_NumTilesHigh_8() const { return ___NumTilesHigh_8; }
	inline int32_t* get_address_of_NumTilesHigh_8() { return &___NumTilesHigh_8; }
	inline void set_NumTilesHigh_8(int32_t value)
	{
		___NumTilesHigh_8 = value;
	}

	inline static int32_t get_offset_of_TileWidth_9() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___TileWidth_9)); }
	inline int32_t get_TileWidth_9() const { return ___TileWidth_9; }
	inline int32_t* get_address_of_TileWidth_9() { return &___TileWidth_9; }
	inline void set_TileWidth_9(int32_t value)
	{
		___TileWidth_9 = value;
	}

	inline static int32_t get_offset_of_TileHeight_10() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___TileHeight_10)); }
	inline int32_t get_TileHeight_10() const { return ___TileHeight_10; }
	inline int32_t* get_address_of_TileHeight_10() { return &___TileHeight_10; }
	inline void set_TileHeight_10(int32_t value)
	{
		___TileHeight_10 = value;
	}

	inline static int32_t get_offset_of_ExportScale_11() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___ExportScale_11)); }
	inline float get_ExportScale_11() const { return ___ExportScale_11; }
	inline float* get_address_of_ExportScale_11() { return &___ExportScale_11; }
	inline void set_ExportScale_11(float value)
	{
		___ExportScale_11 = value;
	}

	inline static int32_t get_offset_of_MapWidthInPixels_12() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___MapWidthInPixels_12)); }
	inline int32_t get_MapWidthInPixels_12() const { return ___MapWidthInPixels_12; }
	inline int32_t* get_address_of_MapWidthInPixels_12() { return &___MapWidthInPixels_12; }
	inline void set_MapWidthInPixels_12(int32_t value)
	{
		___MapWidthInPixels_12 = value;
	}

	inline static int32_t get_offset_of_MapHeightInPixels_13() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___MapHeightInPixels_13)); }
	inline int32_t get_MapHeightInPixels_13() const { return ___MapHeightInPixels_13; }
	inline int32_t* get_address_of_MapHeightInPixels_13() { return &___MapHeightInPixels_13; }
	inline void set_MapHeightInPixels_13(int32_t value)
	{
		___MapHeightInPixels_13 = value;
	}

	inline static int32_t get_offset_of_BackgroundColor_14() { return static_cast<int32_t>(offsetof(TiledMap_t4203693682, ___BackgroundColor_14)); }
	inline Color_t2020392075  get_BackgroundColor_14() const { return ___BackgroundColor_14; }
	inline Color_t2020392075 * get_address_of_BackgroundColor_14() { return &___BackgroundColor_14; }
	inline void set_BackgroundColor_14(Color_t2020392075  value)
	{
		___BackgroundColor_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEDMAP_T4203693682_H
#ifndef TILEANIMATOR_T1251487515_H
#define TILEANIMATOR_T1251487515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TileAnimator
struct  TileAnimator_t1251487515  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Tiled2Unity.TileAnimator::StartTime
	float ___StartTime_2;
	// System.Single Tiled2Unity.TileAnimator::Duration
	float ___Duration_3;
	// System.Single Tiled2Unity.TileAnimator::TotalAnimationTime
	float ___TotalAnimationTime_4;
	// System.Single Tiled2Unity.TileAnimator::timer
	float ___timer_5;
	// UnityEngine.MeshRenderer Tiled2Unity.TileAnimator::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_6;

public:
	inline static int32_t get_offset_of_StartTime_2() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___StartTime_2)); }
	inline float get_StartTime_2() const { return ___StartTime_2; }
	inline float* get_address_of_StartTime_2() { return &___StartTime_2; }
	inline void set_StartTime_2(float value)
	{
		___StartTime_2 = value;
	}

	inline static int32_t get_offset_of_Duration_3() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___Duration_3)); }
	inline float get_Duration_3() const { return ___Duration_3; }
	inline float* get_address_of_Duration_3() { return &___Duration_3; }
	inline void set_Duration_3(float value)
	{
		___Duration_3 = value;
	}

	inline static int32_t get_offset_of_TotalAnimationTime_4() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___TotalAnimationTime_4)); }
	inline float get_TotalAnimationTime_4() const { return ___TotalAnimationTime_4; }
	inline float* get_address_of_TotalAnimationTime_4() { return &___TotalAnimationTime_4; }
	inline void set_TotalAnimationTime_4(float value)
	{
		___TotalAnimationTime_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_meshRenderer_6() { return static_cast<int32_t>(offsetof(TileAnimator_t1251487515, ___meshRenderer_6)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_6() const { return ___meshRenderer_6; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_6() { return &___meshRenderer_6; }
	inline void set_meshRenderer_6(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((&___meshRenderer_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEANIMATOR_T1251487515_H
#ifndef TILEOBJECT_T2436995085_H
#define TILEOBJECT_T2436995085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TileObject
struct  TileObject_t2436995085  : public TmxObject_t815040978
{
public:
	// System.Boolean Tiled2Unity.TileObject::TmxFlippingHorizontal
	bool ___TmxFlippingHorizontal_8;
	// System.Boolean Tiled2Unity.TileObject::TmxFlippingVertical
	bool ___TmxFlippingVertical_9;
	// System.Single Tiled2Unity.TileObject::TileWidth
	float ___TileWidth_10;
	// System.Single Tiled2Unity.TileObject::TileHeight
	float ___TileHeight_11;

public:
	inline static int32_t get_offset_of_TmxFlippingHorizontal_8() { return static_cast<int32_t>(offsetof(TileObject_t2436995085, ___TmxFlippingHorizontal_8)); }
	inline bool get_TmxFlippingHorizontal_8() const { return ___TmxFlippingHorizontal_8; }
	inline bool* get_address_of_TmxFlippingHorizontal_8() { return &___TmxFlippingHorizontal_8; }
	inline void set_TmxFlippingHorizontal_8(bool value)
	{
		___TmxFlippingHorizontal_8 = value;
	}

	inline static int32_t get_offset_of_TmxFlippingVertical_9() { return static_cast<int32_t>(offsetof(TileObject_t2436995085, ___TmxFlippingVertical_9)); }
	inline bool get_TmxFlippingVertical_9() const { return ___TmxFlippingVertical_9; }
	inline bool* get_address_of_TmxFlippingVertical_9() { return &___TmxFlippingVertical_9; }
	inline void set_TmxFlippingVertical_9(bool value)
	{
		___TmxFlippingVertical_9 = value;
	}

	inline static int32_t get_offset_of_TileWidth_10() { return static_cast<int32_t>(offsetof(TileObject_t2436995085, ___TileWidth_10)); }
	inline float get_TileWidth_10() const { return ___TileWidth_10; }
	inline float* get_address_of_TileWidth_10() { return &___TileWidth_10; }
	inline void set_TileWidth_10(float value)
	{
		___TileWidth_10 = value;
	}

	inline static int32_t get_offset_of_TileHeight_11() { return static_cast<int32_t>(offsetof(TileObject_t2436995085, ___TileHeight_11)); }
	inline float get_TileHeight_11() const { return ___TileHeight_11; }
	inline float* get_address_of_TileHeight_11() { return &___TileHeight_11; }
	inline void set_TileHeight_11(float value)
	{
		___TileHeight_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEOBJECT_T2436995085_H
#ifndef GROUPLAYER_T4149811942_H
#define GROUPLAYER_T4149811942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.GroupLayer
struct  GroupLayer_t4149811942  : public Layer_t2836155725
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUPLAYER_T4149811942_H
#ifndef CIRCLEOBJECT_T1578829025_H
#define CIRCLEOBJECT_T1578829025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.CircleObject
struct  CircleObject_t1578829025  : public TmxObject_t815040978
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIRCLEOBJECT_T1578829025_H
#ifndef BASEMESHEFFECT_T1728560551_H
#define BASEMESHEFFECT_T1728560551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t1728560551  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t2426225576 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t1728560551, ___m_Graphic_2)); }
	inline Graphic_t2426225576 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t2426225576 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t2426225576 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T1728560551_H
#ifndef TILELAYER_T3311629473_H
#define TILELAYER_T3311629473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.TileLayer
struct  TileLayer_t3311629473  : public Layer_t2836155725
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILELAYER_T3311629473_H
#ifndef RECTANGLEOBJECT_T2165341466_H
#define RECTANGLEOBJECT_T2165341466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.RectangleObject
struct  RectangleObject_t2165341466  : public TmxObject_t815040978
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEOBJECT_T2165341466_H
#ifndef POLYLINEOBJECT_T19839037_H
#define POLYLINEOBJECT_T19839037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.PolylineObject
struct  PolylineObject_t19839037  : public TmxObject_t815040978
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYLINEOBJECT_T19839037_H
#ifndef OBJECTLAYER_T975743824_H
#define OBJECTLAYER_T975743824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.ObjectLayer
struct  ObjectLayer_t975743824  : public Layer_t2836155725
{
public:
	// UnityEngine.Color Tiled2Unity.ObjectLayer::Color
	Color_t2020392075  ___Color_3;

public:
	inline static int32_t get_offset_of_Color_3() { return static_cast<int32_t>(offsetof(ObjectLayer_t975743824, ___Color_3)); }
	inline Color_t2020392075  get_Color_3() const { return ___Color_3; }
	inline Color_t2020392075 * get_address_of_Color_3() { return &___Color_3; }
	inline void set_Color_3(Color_t2020392075  value)
	{
		___Color_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTLAYER_T975743824_H
#ifndef POLYGONOBJECT_T4023792389_H
#define POLYGONOBJECT_T4023792389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.PolygonObject
struct  PolygonObject_t4023792389  : public TmxObject_t815040978
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYGONOBJECT_T4023792389_H
#ifndef SHADOW_T4269599528_H
#define SHADOW_T4269599528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t4269599528  : public BaseMeshEffect_t1728560551
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2020392075  ___m_EffectColor_3;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2243707579  ___m_EffectDistance_4;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_5;

public:
	inline static int32_t get_offset_of_m_EffectColor_3() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectColor_3)); }
	inline Color_t2020392075  get_m_EffectColor_3() const { return ___m_EffectColor_3; }
	inline Color_t2020392075 * get_address_of_m_EffectColor_3() { return &___m_EffectColor_3; }
	inline void set_m_EffectColor_3(Color_t2020392075  value)
	{
		___m_EffectColor_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_4() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_EffectDistance_4)); }
	inline Vector2_t2243707579  get_m_EffectDistance_4() const { return ___m_EffectDistance_4; }
	inline Vector2_t2243707579 * get_address_of_m_EffectDistance_4() { return &___m_EffectDistance_4; }
	inline void set_m_EffectDistance_4(Vector2_t2243707579  value)
	{
		___m_EffectDistance_4 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_5() { return static_cast<int32_t>(offsetof(Shadow_t4269599528, ___m_UseGraphicAlpha_5)); }
	inline bool get_m_UseGraphicAlpha_5() const { return ___m_UseGraphicAlpha_5; }
	inline bool* get_address_of_m_UseGraphicAlpha_5() { return &___m_UseGraphicAlpha_5; }
	inline void set_m_UseGraphicAlpha_5(bool value)
	{
		___m_UseGraphicAlpha_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOW_T4269599528_H
#ifndef POSITIONASUV1_T1102546563_H
#define POSITIONASUV1_T1102546563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.PositionAsUV1
struct  PositionAsUV1_t1102546563  : public BaseMeshEffect_t1728560551
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASUV1_T1102546563_H
#ifndef OUTLINE_T1417504278_H
#define OUTLINE_T1417504278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Outline
struct  Outline_t1417504278  : public Shadow_t4269599528
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTLINE_T1417504278_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (GetRayIntersectionAllCallback_t2213949596), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (VertexHelper_t385374196), -1, sizeof(VertexHelper_t385374196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1701[11] = 
{
	VertexHelper_t385374196::get_offset_of_m_Positions_0(),
	VertexHelper_t385374196::get_offset_of_m_Colors_1(),
	VertexHelper_t385374196::get_offset_of_m_Uv0S_2(),
	VertexHelper_t385374196::get_offset_of_m_Uv1S_3(),
	VertexHelper_t385374196::get_offset_of_m_Uv2S_4(),
	VertexHelper_t385374196::get_offset_of_m_Uv3S_5(),
	VertexHelper_t385374196::get_offset_of_m_Normals_6(),
	VertexHelper_t385374196::get_offset_of_m_Tangents_7(),
	VertexHelper_t385374196::get_offset_of_m_Indices_8(),
	VertexHelper_t385374196_StaticFields::get_offset_of_s_DefaultTangent_9(),
	VertexHelper_t385374196_StaticFields::get_offset_of_s_DefaultNormal_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (BaseVertexEffect_t2504093552), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (BaseMeshEffect_t1728560551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[1] = 
{
	BaseMeshEffect_t1728560551::get_offset_of_m_Graphic_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (Outline_t1417504278), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (PositionAsUV1_t1102546563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (Shadow_t4269599528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[4] = 
{
	Shadow_t4269599528::get_offset_of_m_EffectColor_3(),
	Shadow_t4269599528::get_offset_of_m_EffectDistance_4(),
	Shadow_t4269599528::get_offset_of_m_UseGraphicAlpha_5(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305141), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1709[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields::get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (U24ArrayTypeU3D12_t1568637717)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t1568637717 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (U3CModuleU3E_t3783534220), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (AnalyticsTracker_t2191537572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1712[5] = 
{
	AnalyticsTracker_t2191537572::get_offset_of_m_EventName_2(),
	AnalyticsTracker_t2191537572::get_offset_of_m_Dict_3(),
	AnalyticsTracker_t2191537572::get_offset_of_m_PrevDictHash_4(),
	AnalyticsTracker_t2191537572::get_offset_of_m_TrackableProperty_5(),
	AnalyticsTracker_t2191537572::get_offset_of_m_Trigger_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (Trigger_t1068911718)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1713[8] = 
{
	Trigger_t1068911718::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (TrackableProperty_t1304606600), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[2] = 
{
	0,
	TrackableProperty_t1304606600::get_offset_of_m_Fields_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (FieldWithTarget_t2256174789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[6] = 
{
	FieldWithTarget_t2256174789::get_offset_of_m_ParamName_0(),
	FieldWithTarget_t2256174789::get_offset_of_m_Target_1(),
	FieldWithTarget_t2256174789::get_offset_of_m_FieldPath_2(),
	FieldWithTarget_t2256174789::get_offset_of_m_TypeString_3(),
	FieldWithTarget_t2256174789::get_offset_of_m_DoStatic_4(),
	FieldWithTarget_t2256174789::get_offset_of_m_StaticString_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (U3CModuleU3E_t3783534221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (AssimScript_t415919828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[4] = 
{
	AssimScript_t415919828::get_offset_of_player_2(),
	AssimScript_t415919828::get_offset_of_v3Pos_3(),
	AssimScript_t415919828::get_offset_of_angle_4(),
	AssimScript_t415919828::get_offset_of_distance_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (BatMovement_t18915038), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1718[4] = 
{
	BatMovement_t18915038::get_offset_of_player_2(),
	BatMovement_t18915038::get_offset_of_speed_3(),
	BatMovement_t18915038::get_offset_of_distance_4(),
	BatMovement_t18915038::get_offset_of_facingRight_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (BouncyMushroom_t2944787622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (BulletScript_t1317259639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1720[1] = 
{
	BulletScript_t1317259639::get_offset_of_player_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (ChargeSystem_t321195793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[8] = 
{
	ChargeSystem_t321195793::get_offset_of_chargeImages_2(),
	ChargeSystem_t321195793::get_offset_of_batSprites_3(),
	ChargeSystem_t321195793::get_offset_of_nextSprite_4(),
	ChargeSystem_t321195793::get_offset_of_currentImg_5(),
	ChargeSystem_t321195793::get_offset_of_maxImg_6(),
	ChargeSystem_t321195793::get_offset_of_charges_7(),
	ChargeSystem_t321195793::get_offset_of_chargeType_8(),
	ChargeSystem_t321195793::get_offset_of_assimilator_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (CharMovement_t3115874077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1722[26] = 
{
	CharMovement_t3115874077::get_offset_of_speed_2(),
	CharMovement_t3115874077::get_offset_of_height_3(),
	CharMovement_t3115874077::get_offset_of_bullet_4(),
	CharMovement_t3115874077::get_offset_of_rb_5(),
	CharMovement_t3115874077::get_offset_of_hasJump_6(),
	CharMovement_t3115874077::get_offset_of_animator_7(),
	CharMovement_t3115874077::get_offset_of_assimAnimator_8(),
	CharMovement_t3115874077::get_offset_of_moving_9(),
	CharMovement_t3115874077::get_offset_of_facingRight_10(),
	CharMovement_t3115874077::get_offset_of_playAnim_11(),
	CharMovement_t3115874077::get_offset_of_assimilator_12(),
	CharMovement_t3115874077::get_offset_of_heartScript_13(),
	CharMovement_t3115874077::get_offset_of_chargeScript_14(),
	CharMovement_t3115874077::get_offset_of_groundScript_15(),
	CharMovement_t3115874077::get_offset_of_soundHandler_16(),
	CharMovement_t3115874077::get_offset_of_groundTester_17(),
	CharMovement_t3115874077::get_offset_of_soundScript_18(),
	CharMovement_t3115874077::get_offset_of_textScript_19(),
	CharMovement_t3115874077::get_offset_of_audioSource_20(),
	CharMovement_t3115874077::get_offset_of_audioClip_21(),
	CharMovement_t3115874077::get_offset_of_jumpID_22(),
	CharMovement_t3115874077::get_offset_of_startTime_23(),
	CharMovement_t3115874077::get_offset_of_hasGun_24(),
	CharMovement_t3115874077::get_offset_of_cursorTexture_25(),
	CharMovement_t3115874077::get_offset_of_firstTime_26(),
	CharMovement_t3115874077::get_offset_of_tutorialTime_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (followPlayer_t782862732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1723[1] = 
{
	followPlayer_t782862732::get_offset_of_player_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (GroundTester_t2202519556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1724[9] = 
{
	GroundTester_t2202519556::get_offset_of_onGround_2(),
	GroundTester_t2202519556::get_offset_of_falling_3(),
	GroundTester_t2202519556::get_offset_of_animator_4(),
	GroundTester_t2202519556::get_offset_of_player_5(),
	GroundTester_t2202519556::get_offset_of_soundHandler_6(),
	GroundTester_t2202519556::get_offset_of_soundScript_7(),
	GroundTester_t2202519556::get_offset_of_charScript_8(),
	GroundTester_t2202519556::get_offset_of_audioSource_9(),
	GroundTester_t2202519556::get_offset_of_audioClip_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (HeartSystem_t3448635605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1725[7] = 
{
	HeartSystem_t3448635605::get_offset_of_maxHearts_2(),
	HeartSystem_t3448635605::get_offset_of_startHearts_3(),
	HeartSystem_t3448635605::get_offset_of_currentHealth_4(),
	HeartSystem_t3448635605::get_offset_of_maxHealth_5(),
	HeartSystem_t3448635605::get_offset_of_healthPerHeart_6(),
	HeartSystem_t3448635605::get_offset_of_heartImages_7(),
	HeartSystem_t3448635605::get_offset_of_heartSprites_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (Porcupine_t1858591195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1726[8] = 
{
	Porcupine_t1858591195::get_offset_of_player_2(),
	Porcupine_t1858591195::get_offset_of_speed_3(),
	Porcupine_t1858591195::get_offset_of_distance_4(),
	Porcupine_t1858591195::get_offset_of_facingRight_5(),
	Porcupine_t1858591195::get_offset_of_TurnSensor_6(),
	Porcupine_t1858591195::get_offset_of_oldPos_7(),
	Porcupine_t1858591195::get_offset_of_animator_8(),
	Porcupine_t1858591195::get_offset_of_rb_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { sizeof (PunchingMushroom_t3604644754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1727[4] = 
{
	PunchingMushroom_t3604644754::get_offset_of_distance_2(),
	PunchingMushroom_t3604644754::get_offset_of_arm_3(),
	PunchingMushroom_t3604644754::get_offset_of_player_4(),
	PunchingMushroom_t3604644754::get_offset_of_facingRight_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1728 = { sizeof (ReachingTheEdge_t142593037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1728[1] = 
{
	ReachingTheEdge_t142593037::get_offset_of_turn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1729 = { sizeof (RockMonster_t3127955507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1729[7] = 
{
	RockMonster_t3127955507::get_offset_of_facingRight_2(),
	RockMonster_t3127955507::get_offset_of_oldPos_3(),
	RockMonster_t3127955507::get_offset_of_animator_4(),
	RockMonster_t3127955507::get_offset_of_distance_5(),
	RockMonster_t3127955507::get_offset_of_player_6(),
	RockMonster_t3127955507::get_offset_of_speed_7(),
	RockMonster_t3127955507::get_offset_of_TurnSensor_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1730 = { sizeof (SoundHandler_t454119645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1730[2] = 
{
	SoundHandler_t454119645::get_offset_of_audioClips_2(),
	SoundHandler_t454119645::get_offset_of_Audio_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1731 = { sizeof (TextBox_t3430507396), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1731[3] = 
{
	TextBox_t3430507396::get_offset_of_textBox_2(),
	TextBox_t3430507396::get_offset_of_timeout_3(),
	TextBox_t3430507396::get_offset_of_myTimeout_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1732 = { sizeof (CircleObject_t1578829025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1733 = { sizeof (GameObjectExtensions_t2804000149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1734 = { sizeof (GPUInstancing_t4075254300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1734[1] = 
{
	GPUInstancing_t4075254300::get_offset_of_Opacity_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1735 = { sizeof (GroupLayer_t4149811942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1736 = { sizeof (ImportBehaviour_t1918973942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1736[2] = 
{
	ImportBehaviour_t1918973942::get_offset_of_Tiled2UnityXmlPath_2(),
	ImportBehaviour_t1918973942::get_offset_of_ExporterTiled2UnityVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1737 = { sizeof (Layer_t2836155725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1737[1] = 
{
	Layer_t2836155725::get_offset_of_Offset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1738 = { sizeof (Log_t1784328146), -1, sizeof(Log_t1784328146_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1738[1] = 
{
	Log_t1784328146_StaticFields::get_offset_of_Enabled_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1739 = { sizeof (Logger_t1657802550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1739[1] = 
{
	Logger_t1657802550::get_offset_of_message_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1740 = { sizeof (ObjectLayer_t975743824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1740[1] = 
{
	ObjectLayer_t975743824::get_offset_of_Color_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1741 = { sizeof (PolygonObject_t4023792389), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1742 = { sizeof (PolylineObject_t19839037), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1743 = { sizeof (RectangleObject_t2165341466), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1744 = { sizeof (SortingLayerExposed_t870693243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1745 = { sizeof (SpriteDepthInMap_t2395493699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1745[3] = 
{
	SpriteDepthInMap_t2395493699::get_offset_of_AttachedMap_2(),
	SpriteDepthInMap_t2395493699::get_offset_of_InteractWithLayer_3(),
	SpriteDepthInMap_t2395493699::get_offset_of_TilesetHeight_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1746 = { sizeof (TileAnimator_t1251487515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1746[5] = 
{
	TileAnimator_t1251487515::get_offset_of_StartTime_2(),
	TileAnimator_t1251487515::get_offset_of_Duration_3(),
	TileAnimator_t1251487515::get_offset_of_TotalAnimationTime_4(),
	TileAnimator_t1251487515::get_offset_of_timer_5(),
	TileAnimator_t1251487515::get_offset_of_meshRenderer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1747 = { sizeof (TiledMap_t4203693682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1747[13] = 
{
	TiledMap_t4203693682::get_offset_of_Orientation_2(),
	TiledMap_t4203693682::get_offset_of_StaggerAxis_3(),
	TiledMap_t4203693682::get_offset_of_StaggerIndex_4(),
	TiledMap_t4203693682::get_offset_of_HexSideLength_5(),
	TiledMap_t4203693682::get_offset_of_NumLayers_6(),
	TiledMap_t4203693682::get_offset_of_NumTilesWide_7(),
	TiledMap_t4203693682::get_offset_of_NumTilesHigh_8(),
	TiledMap_t4203693682::get_offset_of_TileWidth_9(),
	TiledMap_t4203693682::get_offset_of_TileHeight_10(),
	TiledMap_t4203693682::get_offset_of_ExportScale_11(),
	TiledMap_t4203693682::get_offset_of_MapWidthInPixels_12(),
	TiledMap_t4203693682::get_offset_of_MapHeightInPixels_13(),
	TiledMap_t4203693682::get_offset_of_BackgroundColor_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1748 = { sizeof (MapOrientation_t2782890834)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1748[5] = 
{
	MapOrientation_t2782890834::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1749 = { sizeof (MapStaggerAxis_t1991880926)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1749[3] = 
{
	MapStaggerAxis_t1991880926::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1750 = { sizeof (MapStaggerIndex_t1842809421)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1750[3] = 
{
	MapStaggerIndex_t1842809421::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1751 = { sizeof (TileLayer_t3311629473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1752 = { sizeof (TileObject_t2436995085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1752[4] = 
{
	TileObject_t2436995085::get_offset_of_TmxFlippingHorizontal_8(),
	TileObject_t2436995085::get_offset_of_TmxFlippingVertical_9(),
	TileObject_t2436995085::get_offset_of_TileWidth_10(),
	TileObject_t2436995085::get_offset_of_TileHeight_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1753 = { sizeof (TmxObject_t815040978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1753[6] = 
{
	TmxObject_t815040978::get_offset_of_TmxId_2(),
	TmxObject_t815040978::get_offset_of_TmxName_3(),
	TmxObject_t815040978::get_offset_of_TmxType_4(),
	TmxObject_t815040978::get_offset_of_TmxPosition_5(),
	TmxObject_t815040978::get_offset_of_TmxSize_6(),
	TmxObject_t815040978::get_offset_of_TmxRotation_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
