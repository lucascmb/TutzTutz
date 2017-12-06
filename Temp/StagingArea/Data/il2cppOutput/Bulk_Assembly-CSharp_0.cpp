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

// GameBehaviour
struct GameBehaviour_t3343329749;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// Player
struct Player_t1147783557;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

extern RuntimeClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisGameBehaviour_t3343329749_m1483788016_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t69676727_m475627522_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_RuntimeMethod_var;
extern const uint32_t Player_Start_m3139373552_MetadataUsageId;
extern RuntimeClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2749039875;
extern const uint32_t Player_verifyClick_m1160570977_MetadataUsageId;
extern RuntimeClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t2540166467_il2cpp_TypeInfo_var;
extern const uint32_t Player_checkObjects_m2930785222_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t2243707580_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2962743445;
extern Il2CppCodeGenString* _stringLiteral109670392;
extern Il2CppCodeGenString* _stringLiteral3423762291;
extern Il2CppCodeGenString* _stringLiteral1367191786;
extern Il2CppCodeGenString* _stringLiteral1543969273;
extern const uint32_t Player_movement_m3628384667_MetadataUsageId;

struct SpriteU5BU5D_t3359083662;


#ifndef U3CMODULEU3E_T3783534233_H
#define U3CMODULEU3E_T3783534233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534233 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534233_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
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
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
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
#ifndef KEYCODE_T2283395152_H
#define KEYCODE_T2283395152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2283395152 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2283395152, ___value___1)); }
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
#endif // KEYCODE_T2283395152_H
#ifndef RAYCASTHIT2D_T4063908774_H
#define RAYCASTHIT2D_T4063908774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t4063908774 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2243707579  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2243707579  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2243707579  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t646061738 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Centroid_0)); }
	inline Vector2_t2243707579  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2243707579 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2243707579  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Point_1)); }
	inline Vector2_t2243707579  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2243707579 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2243707579  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Normal_2)); }
	inline Vector2_t2243707579  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2243707579 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2243707579  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t4063908774, ___m_Collider_5)); }
	inline Collider2D_t646061738 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t646061738 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t646061738 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t4063908774_marshaled_pinvoke
{
	Vector2_t2243707579  ___m_Centroid_0;
	Vector2_t2243707579  ___m_Point_1;
	Vector2_t2243707579  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t646061738 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t4063908774_marshaled_com
{
	Vector2_t2243707579  ___m_Centroid_0;
	Vector2_t2243707579  ___m_Point_1;
	Vector2_t2243707579  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t646061738 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T4063908774_H
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
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
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
#ifndef SPRITE_T309593783_H
#define SPRITE_T309593783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t309593783  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T309593783_H
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
#ifndef RENDERER_T257310565_H
#define RENDERER_T257310565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t257310565  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T257310565_H
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
#ifndef RIGIDBODY2D_T502193897_H
#define RIGIDBODY2D_T502193897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t502193897  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T502193897_H
#ifndef TRANSFORM_T3275118058_H
#define TRANSFORM_T3275118058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3275118058  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3275118058_H
#ifndef ANIMATOR_T69676727_H
#define ANIMATOR_T69676727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t69676727  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T69676727_H
#ifndef SPRITERENDERER_T1209076198_H
#define SPRITERENDERER_T1209076198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t1209076198  : public Renderer_t257310565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T1209076198_H
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
#ifndef GAMEBEHAVIOUR_T3343329749_H
#define GAMEBEHAVIOUR_T3343329749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBehaviour
struct  GameBehaviour_t3343329749  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GameBehaviour::turn
	float ___turn_2;
	// System.Single GameBehaviour::gameTime
	float ___gameTime_3;
	// System.Single GameBehaviour::delayTime
	float ___delayTime_4;

public:
	inline static int32_t get_offset_of_turn_2() { return static_cast<int32_t>(offsetof(GameBehaviour_t3343329749, ___turn_2)); }
	inline float get_turn_2() const { return ___turn_2; }
	inline float* get_address_of_turn_2() { return &___turn_2; }
	inline void set_turn_2(float value)
	{
		___turn_2 = value;
	}

	inline static int32_t get_offset_of_gameTime_3() { return static_cast<int32_t>(offsetof(GameBehaviour_t3343329749, ___gameTime_3)); }
	inline float get_gameTime_3() const { return ___gameTime_3; }
	inline float* get_address_of_gameTime_3() { return &___gameTime_3; }
	inline void set_gameTime_3(float value)
	{
		___gameTime_3 = value;
	}

	inline static int32_t get_offset_of_delayTime_4() { return static_cast<int32_t>(offsetof(GameBehaviour_t3343329749, ___delayTime_4)); }
	inline float get_delayTime_4() const { return ___delayTime_4; }
	inline float* get_address_of_delayTime_4() { return &___delayTime_4; }
	inline void set_delayTime_4(float value)
	{
		___delayTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEBEHAVIOUR_T3343329749_H
#ifndef PLAYER_T1147783557_H
#define PLAYER_T1147783557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Player::health
	float ___health_2;
	// System.Boolean Player::movementUp
	bool ___movementUp_3;
	// System.Boolean Player::movementDown
	bool ___movementDown_4;
	// System.Boolean Player::movementLeft
	bool ___movementLeft_5;
	// System.Boolean Player::movementRight
	bool ___movementRight_6;
	// System.Boolean Player::walking
	bool ___walking_7;
	// System.Boolean Player::act
	bool ___act_8;
	// UnityEngine.Rigidbody2D Player::rb
	Rigidbody2D_t502193897 * ___rb_9;
	// UnityEngine.Animator Player::anim
	Animator_t69676727 * ___anim_10;
	// UnityEngine.SpriteRenderer Player::sr
	SpriteRenderer_t1209076198 * ___sr_11;
	// UnityEngine.Sprite[] Player::sprites
	SpriteU5BU5D_t3359083662* ___sprites_12;
	// UnityEngine.Vector3 Player::exPos
	Vector3_t2243707580  ___exPos_13;
	// System.String Player::comeFrom
	String_t* ___comeFrom_14;
	// GameBehaviour Player::gb
	GameBehaviour_t3343329749 * ___gb_15;
	// System.Single Player::myTurn
	float ___myTurn_16;
	// System.Single Player::speed
	float ___speed_17;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_movementUp_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___movementUp_3)); }
	inline bool get_movementUp_3() const { return ___movementUp_3; }
	inline bool* get_address_of_movementUp_3() { return &___movementUp_3; }
	inline void set_movementUp_3(bool value)
	{
		___movementUp_3 = value;
	}

	inline static int32_t get_offset_of_movementDown_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___movementDown_4)); }
	inline bool get_movementDown_4() const { return ___movementDown_4; }
	inline bool* get_address_of_movementDown_4() { return &___movementDown_4; }
	inline void set_movementDown_4(bool value)
	{
		___movementDown_4 = value;
	}

	inline static int32_t get_offset_of_movementLeft_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___movementLeft_5)); }
	inline bool get_movementLeft_5() const { return ___movementLeft_5; }
	inline bool* get_address_of_movementLeft_5() { return &___movementLeft_5; }
	inline void set_movementLeft_5(bool value)
	{
		___movementLeft_5 = value;
	}

	inline static int32_t get_offset_of_movementRight_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___movementRight_6)); }
	inline bool get_movementRight_6() const { return ___movementRight_6; }
	inline bool* get_address_of_movementRight_6() { return &___movementRight_6; }
	inline void set_movementRight_6(bool value)
	{
		___movementRight_6 = value;
	}

	inline static int32_t get_offset_of_walking_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___walking_7)); }
	inline bool get_walking_7() const { return ___walking_7; }
	inline bool* get_address_of_walking_7() { return &___walking_7; }
	inline void set_walking_7(bool value)
	{
		___walking_7 = value;
	}

	inline static int32_t get_offset_of_act_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___act_8)); }
	inline bool get_act_8() const { return ___act_8; }
	inline bool* get_address_of_act_8() { return &___act_8; }
	inline void set_act_8(bool value)
	{
		___act_8 = value;
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___rb_9)); }
	inline Rigidbody2D_t502193897 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_t502193897 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((&___rb_9), value);
	}

	inline static int32_t get_offset_of_anim_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___anim_10)); }
	inline Animator_t69676727 * get_anim_10() const { return ___anim_10; }
	inline Animator_t69676727 ** get_address_of_anim_10() { return &___anim_10; }
	inline void set_anim_10(Animator_t69676727 * value)
	{
		___anim_10 = value;
		Il2CppCodeGenWriteBarrier((&___anim_10), value);
	}

	inline static int32_t get_offset_of_sr_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___sr_11)); }
	inline SpriteRenderer_t1209076198 * get_sr_11() const { return ___sr_11; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sr_11() { return &___sr_11; }
	inline void set_sr_11(SpriteRenderer_t1209076198 * value)
	{
		___sr_11 = value;
		Il2CppCodeGenWriteBarrier((&___sr_11), value);
	}

	inline static int32_t get_offset_of_sprites_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___sprites_12)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_12() const { return ___sprites_12; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_12() { return &___sprites_12; }
	inline void set_sprites_12(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_12 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_12), value);
	}

	inline static int32_t get_offset_of_exPos_13() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___exPos_13)); }
	inline Vector3_t2243707580  get_exPos_13() const { return ___exPos_13; }
	inline Vector3_t2243707580 * get_address_of_exPos_13() { return &___exPos_13; }
	inline void set_exPos_13(Vector3_t2243707580  value)
	{
		___exPos_13 = value;
	}

	inline static int32_t get_offset_of_comeFrom_14() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___comeFrom_14)); }
	inline String_t* get_comeFrom_14() const { return ___comeFrom_14; }
	inline String_t** get_address_of_comeFrom_14() { return &___comeFrom_14; }
	inline void set_comeFrom_14(String_t* value)
	{
		___comeFrom_14 = value;
		Il2CppCodeGenWriteBarrier((&___comeFrom_14), value);
	}

	inline static int32_t get_offset_of_gb_15() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___gb_15)); }
	inline GameBehaviour_t3343329749 * get_gb_15() const { return ___gb_15; }
	inline GameBehaviour_t3343329749 ** get_address_of_gb_15() { return &___gb_15; }
	inline void set_gb_15(GameBehaviour_t3343329749 * value)
	{
		___gb_15 = value;
		Il2CppCodeGenWriteBarrier((&___gb_15), value);
	}

	inline static int32_t get_offset_of_myTurn_16() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___myTurn_16)); }
	inline float get_myTurn_16() const { return ___myTurn_16; }
	inline float* get_address_of_myTurn_16() { return &___myTurn_16; }
	inline void set_myTurn_16(float value)
	{
		___myTurn_16 = value;
	}

	inline static int32_t get_offset_of_speed_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___speed_17)); }
	inline float get_speed_17() const { return ___speed_17; }
	inline float* get_address_of_speed_17() { return &___speed_17; }
	inline void set_speed_17(float value)
	{
		___speed_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T1147783557_H
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t309593783 * m_Items[1];

public:
	inline Sprite_t309593783 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t309593783 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2724124387_gshared (Component_t3819376471 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m483057723_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1825328214 (MonoBehaviour_t1158329972 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m518788937 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehaviour::UpdateGameTime()
extern "C"  void GameBehaviour_UpdateGameTime_m4278277516 (GameBehaviour_t3343329749 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<GameBehaviour>()
#define Object_FindObjectOfType_TisGameBehaviour_t3343329749_m1483788016(__this /* static, unused */, method) ((  GameBehaviour_t3343329749 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m483057723_gshared)(__this /* static, unused */, method)
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m3374354972 (Component_t3819376471 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m475627522(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, method) ((  SpriteRenderer_t1209076198 * (*) (Component_t3819376471 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2724124387_gshared)(__this, method)
// System.Void Player::verifyClick()
extern "C"  void Player_verifyClick_m1160570977 (Player_t1147783557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Player::movement()
extern "C"  void Player_movement_m3628384667 (Player_t1147783557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Player::checkObjects()
extern "C"  void Player_checkObjects_m2930785222 (Player_t1147783557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single GameBehaviour::GetTurn()
extern "C"  float GameBehaviour_GetTurn_m1693795437 (GameBehaviour_t3343329749 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
extern "C"  bool Input_get_anyKeyDown_m1921595852 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m2057071471 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m2304215762 (Transform_t3275118058 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  Vector2_op_Implicit_m385881926 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C"  Vector2_t2243707579  Vector2_get_up_m1721661564 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  RaycastHit2D_t4063908774  Physics2D_Raycast_m1275014335 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
extern "C"  bool RaycastHit2D_op_Implicit_m3937142044 (RuntimeObject * __this /* static, unused */, RaycastHit2D_t4063908774  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
extern "C"  Vector2_t2243707579  Vector2_get_down_m278749057 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C"  Vector2_t2243707579  Vector2_get_right_m4262310679 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
extern "C"  Vector2_t2243707579  Vector2_get_left_m1203960856 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m2974714138 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C"  void Animator_SetInteger_m3955173771 (Animator_t69676727 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  Vector2_op_Multiply_m3676538483 (RuntimeObject * __this /* static, unused */, Vector2_t2243707579  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2161463521 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1555724485 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2942701431 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t2243707580  Vector3_get_up_m3604115196 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m2498445460 (RuntimeObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C"  int32_t Animator_GetInteger_m3074894808 (Animator_t69676727 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m3307887080 (SpriteRenderer_t1209076198 * __this, Sprite_t309593783 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameBehaviour::.ctor()
extern "C"  void GameBehaviour__ctor_m1160541416 (GameBehaviour_t3343329749 * __this, const RuntimeMethod* method)
{
	{
		__this->set_delayTime_4((1.0f));
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameBehaviour::Start()
extern "C"  void GameBehaviour_Start_m1980237808 (GameBehaviour_t3343329749 * __this, const RuntimeMethod* method)
{
	{
		__this->set_turn_2((1.0f));
		return;
	}
}
// System.Void GameBehaviour::Update()
extern "C"  void GameBehaviour_Update_m2498642869 (GameBehaviour_t3343329749 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_gameTime_3();
		float L_1 = Time_get_time_m518788937(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) <= ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		GameBehaviour_UpdateGameTime_m4278277516(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void GameBehaviour::UpdateGameTime()
extern "C"  void GameBehaviour_UpdateGameTime_m4278277516 (GameBehaviour_t3343329749 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_time_m518788937(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_delayTime_4();
		__this->set_gameTime_3(((float)((float)L_0+(float)L_1)));
		float L_2 = __this->get_turn_2();
		__this->set_turn_2(((float)((float)L_2+(float)(1.0f))));
		return;
	}
}
// System.Single GameBehaviour::GetTurn()
extern "C"  float GameBehaviour_GetTurn_m1693795437 (GameBehaviour_t3343329749 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_turn_2();
		return L_0;
	}
}
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m1986401168 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m3139373552 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m3139373552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_RuntimeMethod_var);
		__this->set_rb_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameBehaviour_t3343329749 * L_1 = Object_FindObjectOfType_TisGameBehaviour_t3343329749_m1483788016(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisGameBehaviour_t3343329749_m1483788016_RuntimeMethod_var);
		__this->set_gb_15(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Animator_t69676727 * L_3 = Component_GetComponent_TisAnimator_t69676727_m475627522(L_2, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_RuntimeMethod_var);
		__this->set_anim_10(L_3);
		Transform_t3275118058 * L_4 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_5 = Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(L_4, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_RuntimeMethod_var);
		__this->set_sr_11(L_5);
		__this->set_myTurn_16((0.0f));
		return;
	}
}
// System.Void Player::Update()
extern "C"  void Player_Update_m717746161 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	{
		Player_verifyClick_m1160570977(__this, /*hidden argument*/NULL);
		Player_movement_m3628384667(__this, /*hidden argument*/NULL);
		Player_checkObjects_m2930785222(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::verifyClick()
extern "C"  void Player_verifyClick_m1160570977 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_verifyClick_m1160570977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_myTurn_16();
		GameBehaviour_t3343329749 * L_1 = __this->get_gb_15();
		float L_2 = GameBehaviour_GetTurn_m1693795437(L_1, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_get_anyKeyDown_m1921595852(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		MonoBehaviour_print_m2057071471(NULL /*static, unused*/, _stringLiteral2749039875, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void Player::checkObjects()
extern "C"  void Player_checkObjects_m2930785222 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_checkObjects_m2930785222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m2304215762(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_2 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3 = Vector2_get_up_m1721661564(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_4 = Physics2D_Raycast_m1275014335(NULL /*static, unused*/, L_2, L_3, (1.0f), /*hidden argument*/NULL);
		bool L_5 = RaycastHit2D_op_Implicit_m3937142044(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		__this->set_movementUp_3((bool)0);
		goto IL_003c;
	}

IL_0035:
	{
		__this->set_movementUp_3((bool)1);
	}

IL_003c:
	{
		Transform_t3275118058 * L_6 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7 = Transform_get_position_m2304215762(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_8 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Vector2_t2243707579  L_9 = Vector2_get_down_m278749057(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_10 = Physics2D_Raycast_m1275014335(NULL /*static, unused*/, L_8, L_9, (1.0f), /*hidden argument*/NULL);
		bool L_11 = RaycastHit2D_op_Implicit_m3937142044(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		__this->set_movementDown_4((bool)0);
		goto IL_0078;
	}

IL_0071:
	{
		__this->set_movementDown_4((bool)1);
	}

IL_0078:
	{
		Transform_t3275118058 * L_12 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Transform_get_position_m2304215762(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_14 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Vector2_t2243707579  L_15 = Vector2_get_right_m4262310679(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_16 = Physics2D_Raycast_m1275014335(NULL /*static, unused*/, L_14, L_15, (1.0f), /*hidden argument*/NULL);
		bool L_17 = RaycastHit2D_op_Implicit_m3937142044(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		__this->set_movementRight_6((bool)0);
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->set_movementRight_6((bool)1);
	}

IL_00b4:
	{
		Transform_t3275118058 * L_18 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_19 = Transform_get_position_m2304215762(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_20 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Vector2_t2243707579  L_21 = Vector2_get_left_m1203960856(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		RaycastHit2D_t4063908774  L_22 = Physics2D_Raycast_m1275014335(NULL /*static, unused*/, L_20, L_21, (1.0f), /*hidden argument*/NULL);
		bool L_23 = RaycastHit2D_op_Implicit_m3937142044(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00e9;
		}
	}
	{
		__this->set_movementLeft_5((bool)0);
		goto IL_00f0;
	}

IL_00e9:
	{
		__this->set_movementLeft_5((bool)1);
	}

IL_00f0:
	{
		return;
	}
}
// System.Void Player::movement()
extern "C"  void Player_movement_m3628384667 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_movement_m3628384667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = __this->get_walking_7();
		if (L_0)
		{
			goto IL_01ea;
		}
	}
	{
		float L_1 = __this->get_myTurn_16();
		GameBehaviour_t3343329749 * L_2 = __this->get_gb_15();
		float L_3 = GameBehaviour_GetTurn_m1693795437(L_2, /*hidden argument*/NULL);
		if ((((float)L_1) == ((float)L_3)))
		{
			goto IL_01e5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m2974714138(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		bool L_5 = __this->get_movementLeft_5();
		if (!L_5)
		{
			goto IL_008f;
		}
	}
	{
		__this->set_walking_7((bool)1);
		Animator_t69676727 * L_6 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_6, _stringLiteral2962743445, 1, /*hidden argument*/NULL);
		GameBehaviour_t3343329749 * L_7 = __this->get_gb_15();
		float L_8 = GameBehaviour_GetTurn_m1693795437(L_7, /*hidden argument*/NULL);
		__this->set_myTurn_16(L_8);
		__this->set_comeFrom_14(_stringLiteral109670392);
		Rigidbody2D_t502193897 * L_9 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_10 = Vector2_get_left_m1203960856(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_speed_17();
		Vector2_t2243707579  L_12 = Vector2_op_Multiply_m3676538483(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_9, L_12, /*hidden argument*/NULL);
		goto IL_01d4;
	}

IL_008f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_13 = Input_GetKeyDown_m2974714138(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00fd;
		}
	}
	{
		bool L_14 = __this->get_movementRight_6();
		if (!L_14)
		{
			goto IL_00fd;
		}
	}
	{
		__this->set_walking_7((bool)1);
		Animator_t69676727 * L_15 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_15, _stringLiteral2962743445, 2, /*hidden argument*/NULL);
		GameBehaviour_t3343329749 * L_16 = __this->get_gb_15();
		float L_17 = GameBehaviour_GetTurn_m1693795437(L_16, /*hidden argument*/NULL);
		__this->set_myTurn_16(L_17);
		__this->set_comeFrom_14(_stringLiteral3423762291);
		Rigidbody2D_t502193897 * L_18 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_19 = Vector2_get_right_m4262310679(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_20 = __this->get_speed_17();
		Vector2_t2243707579  L_21 = Vector2_op_Multiply_m3676538483(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_18, L_21, /*hidden argument*/NULL);
		goto IL_01d4;
	}

IL_00fd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetKeyDown_m2974714138(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_016b;
		}
	}
	{
		bool L_23 = __this->get_movementUp_3();
		if (!L_23)
		{
			goto IL_016b;
		}
	}
	{
		__this->set_walking_7((bool)1);
		Animator_t69676727 * L_24 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_24, _stringLiteral2962743445, 3, /*hidden argument*/NULL);
		GameBehaviour_t3343329749 * L_25 = __this->get_gb_15();
		float L_26 = GameBehaviour_GetTurn_m1693795437(L_25, /*hidden argument*/NULL);
		__this->set_myTurn_16(L_26);
		__this->set_comeFrom_14(_stringLiteral1367191786);
		Rigidbody2D_t502193897 * L_27 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_28 = Vector2_get_up_m1721661564(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_29 = __this->get_speed_17();
		Vector2_t2243707579  L_30 = Vector2_op_Multiply_m3676538483(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_27, L_30, /*hidden argument*/NULL);
		goto IL_01d4;
	}

IL_016b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_31 = Input_GetKeyDown_m2974714138(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_01d4;
		}
	}
	{
		bool L_32 = __this->get_movementDown_4();
		if (!L_32)
		{
			goto IL_01d4;
		}
	}
	{
		__this->set_walking_7((bool)1);
		Animator_t69676727 * L_33 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_33, _stringLiteral2962743445, 4, /*hidden argument*/NULL);
		GameBehaviour_t3343329749 * L_34 = __this->get_gb_15();
		float L_35 = GameBehaviour_GetTurn_m1693795437(L_34, /*hidden argument*/NULL);
		__this->set_myTurn_16(L_35);
		__this->set_comeFrom_14(_stringLiteral1543969273);
		Rigidbody2D_t502193897 * L_36 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_37 = Vector2_get_down_m278749057(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_38 = __this->get_speed_17();
		Vector2_t2243707579  L_39 = Vector2_op_Multiply_m3676538483(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_36, L_39, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		Transform_t3275118058 * L_40 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_41 = Transform_get_position_m2304215762(L_40, /*hidden argument*/NULL);
		__this->set_exPos_13(L_41);
	}

IL_01e5:
	{
		goto IL_0539;
	}

IL_01ea:
	{
		String_t* L_42 = __this->get_comeFrom_14();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_42, _stringLiteral109670392, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_02bf;
		}
	}
	{
		Transform_t3275118058 * L_44 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_45 = Transform_get_position_m2304215762(L_44, /*hidden argument*/NULL);
		V_0 = L_45;
		float L_46 = (&V_0)->get_x_1();
		Vector3_t2243707580 * L_47 = __this->get_address_of_exPos_13();
		float L_48 = L_47->get_x_1();
		if ((!(((float)L_46) <= ((float)((float)((float)L_48-(float)(1.0f)))))))
		{
			goto IL_02bf;
		}
	}
	{
		Transform_t3275118058 * L_49 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580 * L_50 = __this->get_address_of_exPos_13();
		float L_51 = L_50->get_x_1();
		Vector3_t2243707580 * L_52 = __this->get_address_of_exPos_13();
		float L_53 = L_52->get_y_2();
		Vector3_t2243707580 * L_54 = __this->get_address_of_exPos_13();
		float L_55 = L_54->get_z_3();
		Vector3_t2243707580  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector3__ctor_m1555724485((&L_56), ((float)((float)L_51-(float)(1.0f))), L_53, L_55, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_49, L_56, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_57 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_58 = Vector3_get_up_m3604115196(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_59 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_58, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_60 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_57, L_60, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_61 = __this->get_sr_11();
		SpriteU5BU5D_t3359083662* L_62 = __this->get_sprites_12();
		Animator_t69676727 * L_63 = __this->get_anim_10();
		int32_t L_64 = Animator_GetInteger_m3074894808(L_63, _stringLiteral2962743445, /*hidden argument*/NULL);
		int32_t L_65 = ((int32_t)((int32_t)L_64-(int32_t)1));
		Sprite_t309593783 * L_66 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		SpriteRenderer_set_sprite_m3307887080(L_61, L_66, /*hidden argument*/NULL);
		Animator_t69676727 * L_67 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_67, _stringLiteral2962743445, 0, /*hidden argument*/NULL);
		__this->set_walking_7((bool)0);
		goto IL_0539;
	}

IL_02bf:
	{
		String_t* L_68 = __this->get_comeFrom_14();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_68, _stringLiteral3423762291, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0394;
		}
	}
	{
		Transform_t3275118058 * L_70 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_71 = Transform_get_position_m2304215762(L_70, /*hidden argument*/NULL);
		V_1 = L_71;
		float L_72 = (&V_1)->get_x_1();
		Vector3_t2243707580 * L_73 = __this->get_address_of_exPos_13();
		float L_74 = L_73->get_x_1();
		if ((!(((float)L_72) >= ((float)((float)((float)L_74+(float)(1.0f)))))))
		{
			goto IL_0394;
		}
	}
	{
		Transform_t3275118058 * L_75 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580 * L_76 = __this->get_address_of_exPos_13();
		float L_77 = L_76->get_x_1();
		Vector3_t2243707580 * L_78 = __this->get_address_of_exPos_13();
		float L_79 = L_78->get_y_2();
		Vector3_t2243707580 * L_80 = __this->get_address_of_exPos_13();
		float L_81 = L_80->get_z_3();
		Vector3_t2243707580  L_82;
		memset(&L_82, 0, sizeof(L_82));
		Vector3__ctor_m1555724485((&L_82), ((float)((float)L_77+(float)(1.0f))), L_79, L_81, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_75, L_82, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_83 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_84 = Vector3_get_up_m3604115196(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_85 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_84, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_86 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_83, L_86, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_87 = __this->get_sr_11();
		SpriteU5BU5D_t3359083662* L_88 = __this->get_sprites_12();
		Animator_t69676727 * L_89 = __this->get_anim_10();
		int32_t L_90 = Animator_GetInteger_m3074894808(L_89, _stringLiteral2962743445, /*hidden argument*/NULL);
		int32_t L_91 = ((int32_t)((int32_t)L_90-(int32_t)1));
		Sprite_t309593783 * L_92 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		SpriteRenderer_set_sprite_m3307887080(L_87, L_92, /*hidden argument*/NULL);
		Animator_t69676727 * L_93 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_93, _stringLiteral2962743445, 0, /*hidden argument*/NULL);
		__this->set_walking_7((bool)0);
		goto IL_0539;
	}

IL_0394:
	{
		String_t* L_94 = __this->get_comeFrom_14();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_95 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_94, _stringLiteral1367191786, /*hidden argument*/NULL);
		if (!L_95)
		{
			goto IL_0469;
		}
	}
	{
		Transform_t3275118058 * L_96 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_97 = Transform_get_position_m2304215762(L_96, /*hidden argument*/NULL);
		V_2 = L_97;
		float L_98 = (&V_2)->get_y_2();
		Vector3_t2243707580 * L_99 = __this->get_address_of_exPos_13();
		float L_100 = L_99->get_y_2();
		if ((!(((float)L_98) >= ((float)((float)((float)L_100+(float)(1.0f)))))))
		{
			goto IL_0469;
		}
	}
	{
		Transform_t3275118058 * L_101 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580 * L_102 = __this->get_address_of_exPos_13();
		float L_103 = L_102->get_x_1();
		Vector3_t2243707580 * L_104 = __this->get_address_of_exPos_13();
		float L_105 = L_104->get_y_2();
		Vector3_t2243707580 * L_106 = __this->get_address_of_exPos_13();
		float L_107 = L_106->get_z_3();
		Vector3_t2243707580  L_108;
		memset(&L_108, 0, sizeof(L_108));
		Vector3__ctor_m1555724485((&L_108), L_103, ((float)((float)L_105+(float)(1.0f))), L_107, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_101, L_108, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_109 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_110 = Vector3_get_up_m3604115196(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_111 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_110, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_112 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_111, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_109, L_112, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_113 = __this->get_sr_11();
		SpriteU5BU5D_t3359083662* L_114 = __this->get_sprites_12();
		Animator_t69676727 * L_115 = __this->get_anim_10();
		int32_t L_116 = Animator_GetInteger_m3074894808(L_115, _stringLiteral2962743445, /*hidden argument*/NULL);
		int32_t L_117 = ((int32_t)((int32_t)L_116-(int32_t)1));
		Sprite_t309593783 * L_118 = (L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		SpriteRenderer_set_sprite_m3307887080(L_113, L_118, /*hidden argument*/NULL);
		Animator_t69676727 * L_119 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_119, _stringLiteral2962743445, 0, /*hidden argument*/NULL);
		__this->set_walking_7((bool)0);
		goto IL_0539;
	}

IL_0469:
	{
		String_t* L_120 = __this->get_comeFrom_14();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_121 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_120, _stringLiteral1543969273, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0539;
		}
	}
	{
		Transform_t3275118058 * L_122 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_123 = Transform_get_position_m2304215762(L_122, /*hidden argument*/NULL);
		V_3 = L_123;
		float L_124 = (&V_3)->get_y_2();
		Vector3_t2243707580 * L_125 = __this->get_address_of_exPos_13();
		float L_126 = L_125->get_y_2();
		if ((!(((float)L_124) <= ((float)((float)((float)L_126-(float)(1.0f)))))))
		{
			goto IL_0539;
		}
	}
	{
		Transform_t3275118058 * L_127 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		Vector3_t2243707580 * L_128 = __this->get_address_of_exPos_13();
		float L_129 = L_128->get_x_1();
		Vector3_t2243707580 * L_130 = __this->get_address_of_exPos_13();
		float L_131 = L_130->get_y_2();
		Vector3_t2243707580 * L_132 = __this->get_address_of_exPos_13();
		float L_133 = L_132->get_z_3();
		Vector3_t2243707580  L_134;
		memset(&L_134, 0, sizeof(L_134));
		Vector3__ctor_m1555724485((&L_134), L_129, ((float)((float)L_131-(float)(1.0f))), L_133, /*hidden argument*/NULL);
		Transform_set_position_m2942701431(L_127, L_134, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_135 = __this->get_rb_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_136 = Vector3_get_up_m3604115196(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_137 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_136, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2243707579_il2cpp_TypeInfo_var);
		Vector2_t2243707579  L_138 = Vector2_op_Implicit_m385881926(NULL /*static, unused*/, L_137, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2161463521(L_135, L_138, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_139 = __this->get_sr_11();
		SpriteU5BU5D_t3359083662* L_140 = __this->get_sprites_12();
		Animator_t69676727 * L_141 = __this->get_anim_10();
		int32_t L_142 = Animator_GetInteger_m3074894808(L_141, _stringLiteral2962743445, /*hidden argument*/NULL);
		int32_t L_143 = ((int32_t)((int32_t)L_142-(int32_t)1));
		Sprite_t309593783 * L_144 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		SpriteRenderer_set_sprite_m3307887080(L_139, L_144, /*hidden argument*/NULL);
		Animator_t69676727 * L_145 = __this->get_anim_10();
		Animator_SetInteger_m3955173771(L_145, _stringLiteral2962743445, 0, /*hidden argument*/NULL);
		__this->set_walking_7((bool)0);
	}

IL_0539:
	{
		return;
	}
}
// System.Void Player::GetDamage()
extern "C"  void Player_GetDamage_m3298764737 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Player::GetHeal()
extern "C"  void Player_GetHeal_m2467716414 (Player_t1147783557 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
