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

// System.IntPtr[]
struct IntPtrU5BU5D_t1273422189;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1963109797;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t979289907;
// Mono.Globalization.Unicode.CodePointIndexer/TableRange[]
struct TableRangeU5BU5D_t2303693855;
// System.Char[]
struct CharU5BU5D_t1118576002;
// System.Byte[]
struct ByteU5BU5D_t3226943687;
// Mono.Globalization.Unicode.TailoringInfo[]
struct TailoringInfoU5BU5D_t3680559740;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4178233966;
// System.Byte
struct Byte_t4047500850;
// System.Type
struct Type_t;
// System.Double
struct Double_t3634212091;
// System.UInt16
struct UInt16_t740722162;
// System.Void
struct Void_t1187688085;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3520136242;
// System.Type[]
struct TypeU5BU5D_t2967983539;
// System.Reflection.MemberFilter
struct MemberFilter_t677702308;
// System.IAsyncResult
struct IAsyncResult_t2717149099;
// System.AsyncCallback
struct AsyncCallback_t680890069;




#ifndef U3CMODULEU3E_T2615561262_H
#define U3CMODULEU3E_T2615561262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2615561262 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2615561262_H
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
#ifndef SIMPLEENUMERATOR_T195948982_H
#define SIMPLEENUMERATOR_T195948982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/SimpleEnumerator
struct  SimpleEnumerator_t195948982  : public RuntimeObject
{
public:
	// System.Array System.Array/SimpleEnumerator::enumeratee
	RuntimeArray * ___enumeratee_0;
	// System.Int32 System.Array/SimpleEnumerator::currentpos
	int32_t ___currentpos_1;
	// System.Int32 System.Array/SimpleEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_enumeratee_0() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t195948982, ___enumeratee_0)); }
	inline RuntimeArray * get_enumeratee_0() const { return ___enumeratee_0; }
	inline RuntimeArray ** get_address_of_enumeratee_0() { return &___enumeratee_0; }
	inline void set_enumeratee_0(RuntimeArray * value)
	{
		___enumeratee_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumeratee_0), value);
	}

	inline static int32_t get_offset_of_currentpos_1() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t195948982, ___currentpos_1)); }
	inline int32_t get_currentpos_1() const { return ___currentpos_1; }
	inline int32_t* get_address_of_currentpos_1() { return &___currentpos_1; }
	inline void set_currentpos_1(int32_t value)
	{
		___currentpos_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SimpleEnumerator_t195948982, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEENUMERATOR_T195948982_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef EXCEPTION_T3210612126_H
#define EXCEPTION_T3210612126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3210612126  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1273422189* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3210612126 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1273422189* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1273422189** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1273422189* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___inner_exception_1)); }
	inline Exception_t3210612126 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3210612126 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3210612126 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3210612126, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3210612126_H
#ifndef MARSHALBYREFOBJECT_T2132578249_H
#define MARSHALBYREFOBJECT_T2132578249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2132578249  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t979289907 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2132578249, ____identity_0)); }
	inline ServerIdentity_t979289907 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t979289907 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t979289907 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2132578249_H
#ifndef RUNTIMEHELPERS_T1830567511_H
#define RUNTIMEHELPERS_T1830567511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t1830567511  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T1830567511_H
#ifndef LOCALE_T1557344494_H
#define LOCALE_T1557344494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t1557344494  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T1557344494_H
#ifndef CODEPOINTINDEXER_T4032834826_H
#define CODEPOINTINDEXER_T4032834826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer
struct  CodePointIndexer_t4032834826  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer/TableRange[] Mono.Globalization.Unicode.CodePointIndexer::ranges
	TableRangeU5BU5D_t2303693855* ___ranges_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::TotalCount
	int32_t ___TotalCount_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultIndex
	int32_t ___defaultIndex_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultCP
	int32_t ___defaultCP_3;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4032834826, ___ranges_0)); }
	inline TableRangeU5BU5D_t2303693855* get_ranges_0() const { return ___ranges_0; }
	inline TableRangeU5BU5D_t2303693855** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(TableRangeU5BU5D_t2303693855* value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_TotalCount_1() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4032834826, ___TotalCount_1)); }
	inline int32_t get_TotalCount_1() const { return ___TotalCount_1; }
	inline int32_t* get_address_of_TotalCount_1() { return &___TotalCount_1; }
	inline void set_TotalCount_1(int32_t value)
	{
		___TotalCount_1 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_2() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4032834826, ___defaultIndex_2)); }
	inline int32_t get_defaultIndex_2() const { return ___defaultIndex_2; }
	inline int32_t* get_address_of_defaultIndex_2() { return &___defaultIndex_2; }
	inline void set_defaultIndex_2(int32_t value)
	{
		___defaultIndex_2 = value;
	}

	inline static int32_t get_offset_of_defaultCP_3() { return static_cast<int32_t>(offsetof(CodePointIndexer_t4032834826, ___defaultCP_3)); }
	inline int32_t get_defaultCP_3() const { return ___defaultCP_3; }
	inline int32_t* get_address_of_defaultCP_3() { return &___defaultCP_3; }
	inline void set_defaultCP_3(int32_t value)
	{
		___defaultCP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPOINTINDEXER_T4032834826_H
#ifndef TAILORINGINFO_T1450393825_H
#define TAILORINGINFO_T1450393825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.TailoringInfo
struct  TailoringInfo_t1450393825  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::LCID
	int32_t ___LCID_0;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringIndex
	int32_t ___TailoringIndex_1;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringCount
	int32_t ___TailoringCount_2;
	// System.Boolean Mono.Globalization.Unicode.TailoringInfo::FrenchSort
	bool ___FrenchSort_3;

public:
	inline static int32_t get_offset_of_LCID_0() { return static_cast<int32_t>(offsetof(TailoringInfo_t1450393825, ___LCID_0)); }
	inline int32_t get_LCID_0() const { return ___LCID_0; }
	inline int32_t* get_address_of_LCID_0() { return &___LCID_0; }
	inline void set_LCID_0(int32_t value)
	{
		___LCID_0 = value;
	}

	inline static int32_t get_offset_of_TailoringIndex_1() { return static_cast<int32_t>(offsetof(TailoringInfo_t1450393825, ___TailoringIndex_1)); }
	inline int32_t get_TailoringIndex_1() const { return ___TailoringIndex_1; }
	inline int32_t* get_address_of_TailoringIndex_1() { return &___TailoringIndex_1; }
	inline void set_TailoringIndex_1(int32_t value)
	{
		___TailoringIndex_1 = value;
	}

	inline static int32_t get_offset_of_TailoringCount_2() { return static_cast<int32_t>(offsetof(TailoringInfo_t1450393825, ___TailoringCount_2)); }
	inline int32_t get_TailoringCount_2() const { return ___TailoringCount_2; }
	inline int32_t* get_address_of_TailoringCount_2() { return &___TailoringCount_2; }
	inline void set_TailoringCount_2(int32_t value)
	{
		___TailoringCount_2 = value;
	}

	inline static int32_t get_offset_of_FrenchSort_3() { return static_cast<int32_t>(offsetof(TailoringInfo_t1450393825, ___FrenchSort_3)); }
	inline bool get_FrenchSort_3() const { return ___FrenchSort_3; }
	inline bool* get_address_of_FrenchSort_3() { return &___FrenchSort_3; }
	inline void set_FrenchSort_3(bool value)
	{
		___FrenchSort_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILORINGINFO_T1450393825_H
#ifndef CONTRACTION_T951385486_H
#define CONTRACTION_T951385486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t951385486  : public RuntimeObject
{
public:
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t1118576002* ___Source_0;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_1;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t3226943687* ___SortKey_2;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Contraction_t951385486, ___Source_0)); }
	inline CharU5BU5D_t1118576002* get_Source_0() const { return ___Source_0; }
	inline CharU5BU5D_t1118576002** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(CharU5BU5D_t1118576002* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Replacement_1() { return static_cast<int32_t>(offsetof(Contraction_t951385486, ___Replacement_1)); }
	inline String_t* get_Replacement_1() const { return ___Replacement_1; }
	inline String_t** get_address_of_Replacement_1() { return &___Replacement_1; }
	inline void set_Replacement_1(String_t* value)
	{
		___Replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___Replacement_1), value);
	}

	inline static int32_t get_offset_of_SortKey_2() { return static_cast<int32_t>(offsetof(Contraction_t951385486, ___SortKey_2)); }
	inline ByteU5BU5D_t3226943687* get_SortKey_2() const { return ___SortKey_2; }
	inline ByteU5BU5D_t3226943687** get_address_of_SortKey_2() { return &___SortKey_2; }
	inline void set_SortKey_2(ByteU5BU5D_t3226943687* value)
	{
		___SortKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___SortKey_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTION_T951385486_H
#ifndef CONTRACTIONCOMPARER_T973199252_H
#define CONTRACTIONCOMPARER_T973199252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.ContractionComparer
struct  ContractionComparer_t973199252  : public RuntimeObject
{
public:

public:
};

struct ContractionComparer_t973199252_StaticFields
{
public:
	// Mono.Globalization.Unicode.ContractionComparer Mono.Globalization.Unicode.ContractionComparer::Instance
	ContractionComparer_t973199252 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ContractionComparer_t973199252_StaticFields, ___Instance_0)); }
	inline ContractionComparer_t973199252 * get_Instance_0() const { return ___Instance_0; }
	inline ContractionComparer_t973199252 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ContractionComparer_t973199252 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTIONCOMPARER_T973199252_H
#ifndef LEVEL2MAP_T3162643446_H
#define LEVEL2MAP_T3162643446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2Map
struct  Level2Map_t3162643446  : public RuntimeObject
{
public:
	// System.Byte Mono.Globalization.Unicode.Level2Map::Source
	uint8_t ___Source_0;
	// System.Byte Mono.Globalization.Unicode.Level2Map::Replace
	uint8_t ___Replace_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Level2Map_t3162643446, ___Source_0)); }
	inline uint8_t get_Source_0() const { return ___Source_0; }
	inline uint8_t* get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(uint8_t value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_Replace_1() { return static_cast<int32_t>(offsetof(Level2Map_t3162643446, ___Replace_1)); }
	inline uint8_t get_Replace_1() const { return ___Replace_1; }
	inline uint8_t* get_address_of_Replace_1() { return &___Replace_1; }
	inline void set_Replace_1(uint8_t value)
	{
		___Replace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAP_T3162643446_H
#ifndef LEVEL2MAPCOMPARER_T3644283197_H
#define LEVEL2MAPCOMPARER_T3644283197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2MapComparer
struct  Level2MapComparer_t3644283197  : public RuntimeObject
{
public:

public:
};

struct Level2MapComparer_t3644283197_StaticFields
{
public:
	// Mono.Globalization.Unicode.Level2MapComparer Mono.Globalization.Unicode.Level2MapComparer::Instance
	Level2MapComparer_t3644283197 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Level2MapComparer_t3644283197_StaticFields, ___Instance_0)); }
	inline Level2MapComparer_t3644283197 * get_Instance_0() const { return ___Instance_0; }
	inline Level2MapComparer_t3644283197 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Level2MapComparer_t3644283197 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAPCOMPARER_T3644283197_H
#ifndef MSCOMPATUNICODETABLE_T3949071613_H
#define MSCOMPATUNICODETABLE_T3949071613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct  MSCompatUnicodeTable_t3949071613  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTable_t3949071613_StaticFields
{
public:
	// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::MaxExpansionLength
	int32_t ___MaxExpansionLength_0;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::ignorableFlags
	uint8_t* ___ignorableFlags_1;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::categories
	uint8_t* ___categories_2;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level1
	uint8_t* ___level1_3;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level2
	uint8_t* ___level2_4;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level3
	uint8_t* ___level3_5;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHScategory
	uint8_t* ___cjkCHScategory_6;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTcategory
	uint8_t* ___cjkCHTcategory_7;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAcategory
	uint8_t* ___cjkJAcategory_8;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOcategory
	uint8_t* ___cjkKOcategory_9;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHSlv1
	uint8_t* ___cjkCHSlv1_10;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTlv1
	uint8_t* ___cjkCHTlv1_11;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAlv1
	uint8_t* ___cjkJAlv1_12;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv1
	uint8_t* ___cjkKOlv1_13;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv2
	uint8_t* ___cjkKOlv2_14;
	// System.Char[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringArr
	CharU5BU5D_t1118576002* ___tailoringArr_15;
	// Mono.Globalization.Unicode.TailoringInfo[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringInfos
	TailoringInfoU5BU5D_t3680559740* ___tailoringInfos_16;
	// System.Object Mono.Globalization.Unicode.MSCompatUnicodeTable::forLock
	RuntimeObject * ___forLock_17;
	// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::isReady
	bool ___isReady_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map2
	Dictionary_2_t4178233966 * ___U3CU3Ef__switchU24map2_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map3
	Dictionary_2_t4178233966 * ___U3CU3Ef__switchU24map3_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Globalization.Unicode.MSCompatUnicodeTable::<>f__switch$map4
	Dictionary_2_t4178233966 * ___U3CU3Ef__switchU24map4_21;

public:
	inline static int32_t get_offset_of_MaxExpansionLength_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___MaxExpansionLength_0)); }
	inline int32_t get_MaxExpansionLength_0() const { return ___MaxExpansionLength_0; }
	inline int32_t* get_address_of_MaxExpansionLength_0() { return &___MaxExpansionLength_0; }
	inline void set_MaxExpansionLength_0(int32_t value)
	{
		___MaxExpansionLength_0 = value;
	}

	inline static int32_t get_offset_of_ignorableFlags_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___ignorableFlags_1)); }
	inline uint8_t* get_ignorableFlags_1() const { return ___ignorableFlags_1; }
	inline uint8_t** get_address_of_ignorableFlags_1() { return &___ignorableFlags_1; }
	inline void set_ignorableFlags_1(uint8_t* value)
	{
		___ignorableFlags_1 = value;
	}

	inline static int32_t get_offset_of_categories_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___categories_2)); }
	inline uint8_t* get_categories_2() const { return ___categories_2; }
	inline uint8_t** get_address_of_categories_2() { return &___categories_2; }
	inline void set_categories_2(uint8_t* value)
	{
		___categories_2 = value;
	}

	inline static int32_t get_offset_of_level1_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___level1_3)); }
	inline uint8_t* get_level1_3() const { return ___level1_3; }
	inline uint8_t** get_address_of_level1_3() { return &___level1_3; }
	inline void set_level1_3(uint8_t* value)
	{
		___level1_3 = value;
	}

	inline static int32_t get_offset_of_level2_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___level2_4)); }
	inline uint8_t* get_level2_4() const { return ___level2_4; }
	inline uint8_t** get_address_of_level2_4() { return &___level2_4; }
	inline void set_level2_4(uint8_t* value)
	{
		___level2_4 = value;
	}

	inline static int32_t get_offset_of_level3_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___level3_5)); }
	inline uint8_t* get_level3_5() const { return ___level3_5; }
	inline uint8_t** get_address_of_level3_5() { return &___level3_5; }
	inline void set_level3_5(uint8_t* value)
	{
		___level3_5 = value;
	}

	inline static int32_t get_offset_of_cjkCHScategory_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkCHScategory_6)); }
	inline uint8_t* get_cjkCHScategory_6() const { return ___cjkCHScategory_6; }
	inline uint8_t** get_address_of_cjkCHScategory_6() { return &___cjkCHScategory_6; }
	inline void set_cjkCHScategory_6(uint8_t* value)
	{
		___cjkCHScategory_6 = value;
	}

	inline static int32_t get_offset_of_cjkCHTcategory_7() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkCHTcategory_7)); }
	inline uint8_t* get_cjkCHTcategory_7() const { return ___cjkCHTcategory_7; }
	inline uint8_t** get_address_of_cjkCHTcategory_7() { return &___cjkCHTcategory_7; }
	inline void set_cjkCHTcategory_7(uint8_t* value)
	{
		___cjkCHTcategory_7 = value;
	}

	inline static int32_t get_offset_of_cjkJAcategory_8() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkJAcategory_8)); }
	inline uint8_t* get_cjkJAcategory_8() const { return ___cjkJAcategory_8; }
	inline uint8_t** get_address_of_cjkJAcategory_8() { return &___cjkJAcategory_8; }
	inline void set_cjkJAcategory_8(uint8_t* value)
	{
		___cjkJAcategory_8 = value;
	}

	inline static int32_t get_offset_of_cjkKOcategory_9() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkKOcategory_9)); }
	inline uint8_t* get_cjkKOcategory_9() const { return ___cjkKOcategory_9; }
	inline uint8_t** get_address_of_cjkKOcategory_9() { return &___cjkKOcategory_9; }
	inline void set_cjkKOcategory_9(uint8_t* value)
	{
		___cjkKOcategory_9 = value;
	}

	inline static int32_t get_offset_of_cjkCHSlv1_10() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkCHSlv1_10)); }
	inline uint8_t* get_cjkCHSlv1_10() const { return ___cjkCHSlv1_10; }
	inline uint8_t** get_address_of_cjkCHSlv1_10() { return &___cjkCHSlv1_10; }
	inline void set_cjkCHSlv1_10(uint8_t* value)
	{
		___cjkCHSlv1_10 = value;
	}

	inline static int32_t get_offset_of_cjkCHTlv1_11() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkCHTlv1_11)); }
	inline uint8_t* get_cjkCHTlv1_11() const { return ___cjkCHTlv1_11; }
	inline uint8_t** get_address_of_cjkCHTlv1_11() { return &___cjkCHTlv1_11; }
	inline void set_cjkCHTlv1_11(uint8_t* value)
	{
		___cjkCHTlv1_11 = value;
	}

	inline static int32_t get_offset_of_cjkJAlv1_12() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkJAlv1_12)); }
	inline uint8_t* get_cjkJAlv1_12() const { return ___cjkJAlv1_12; }
	inline uint8_t** get_address_of_cjkJAlv1_12() { return &___cjkJAlv1_12; }
	inline void set_cjkJAlv1_12(uint8_t* value)
	{
		___cjkJAlv1_12 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv1_13() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkKOlv1_13)); }
	inline uint8_t* get_cjkKOlv1_13() const { return ___cjkKOlv1_13; }
	inline uint8_t** get_address_of_cjkKOlv1_13() { return &___cjkKOlv1_13; }
	inline void set_cjkKOlv1_13(uint8_t* value)
	{
		___cjkKOlv1_13 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv2_14() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___cjkKOlv2_14)); }
	inline uint8_t* get_cjkKOlv2_14() const { return ___cjkKOlv2_14; }
	inline uint8_t** get_address_of_cjkKOlv2_14() { return &___cjkKOlv2_14; }
	inline void set_cjkKOlv2_14(uint8_t* value)
	{
		___cjkKOlv2_14 = value;
	}

	inline static int32_t get_offset_of_tailoringArr_15() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___tailoringArr_15)); }
	inline CharU5BU5D_t1118576002* get_tailoringArr_15() const { return ___tailoringArr_15; }
	inline CharU5BU5D_t1118576002** get_address_of_tailoringArr_15() { return &___tailoringArr_15; }
	inline void set_tailoringArr_15(CharU5BU5D_t1118576002* value)
	{
		___tailoringArr_15 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringArr_15), value);
	}

	inline static int32_t get_offset_of_tailoringInfos_16() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___tailoringInfos_16)); }
	inline TailoringInfoU5BU5D_t3680559740* get_tailoringInfos_16() const { return ___tailoringInfos_16; }
	inline TailoringInfoU5BU5D_t3680559740** get_address_of_tailoringInfos_16() { return &___tailoringInfos_16; }
	inline void set_tailoringInfos_16(TailoringInfoU5BU5D_t3680559740* value)
	{
		___tailoringInfos_16 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringInfos_16), value);
	}

	inline static int32_t get_offset_of_forLock_17() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___forLock_17)); }
	inline RuntimeObject * get_forLock_17() const { return ___forLock_17; }
	inline RuntimeObject ** get_address_of_forLock_17() { return &___forLock_17; }
	inline void set_forLock_17(RuntimeObject * value)
	{
		___forLock_17 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_17), value);
	}

	inline static int32_t get_offset_of_isReady_18() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___isReady_18)); }
	inline bool get_isReady_18() const { return ___isReady_18; }
	inline bool* get_address_of_isReady_18() { return &___isReady_18; }
	inline void set_isReady_18(bool value)
	{
		___isReady_18 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_19() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___U3CU3Ef__switchU24map2_19)); }
	inline Dictionary_2_t4178233966 * get_U3CU3Ef__switchU24map2_19() const { return ___U3CU3Ef__switchU24map2_19; }
	inline Dictionary_2_t4178233966 ** get_address_of_U3CU3Ef__switchU24map2_19() { return &___U3CU3Ef__switchU24map2_19; }
	inline void set_U3CU3Ef__switchU24map2_19(Dictionary_2_t4178233966 * value)
	{
		___U3CU3Ef__switchU24map2_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_20() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___U3CU3Ef__switchU24map3_20)); }
	inline Dictionary_2_t4178233966 * get_U3CU3Ef__switchU24map3_20() const { return ___U3CU3Ef__switchU24map3_20; }
	inline Dictionary_2_t4178233966 ** get_address_of_U3CU3Ef__switchU24map3_20() { return &___U3CU3Ef__switchU24map3_20; }
	inline void set_U3CU3Ef__switchU24map3_20(Dictionary_2_t4178233966 * value)
	{
		___U3CU3Ef__switchU24map3_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_21() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t3949071613_StaticFields, ___U3CU3Ef__switchU24map4_21)); }
	inline Dictionary_2_t4178233966 * get_U3CU3Ef__switchU24map4_21() const { return ___U3CU3Ef__switchU24map4_21; }
	inline Dictionary_2_t4178233966 ** get_address_of_U3CU3Ef__switchU24map4_21() { return &___U3CU3Ef__switchU24map4_21; }
	inline void set_U3CU3Ef__switchU24map4_21(Dictionary_2_t4178233966 * value)
	{
		___U3CU3Ef__switchU24map4_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map4_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLE_T3949071613_H
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
	CharU5BU5D_t1118576002* ___WhiteChars_3;

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
	inline CharU5BU5D_t1118576002* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1118576002** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1118576002* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CRITICALFINALIZEROBJECT_T2848655328_H
#define CRITICALFINALIZEROBJECT_T2848655328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t2848655328  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T2848655328_H
#ifndef VALUETYPE_T434140965_H
#define VALUETYPE_T434140965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t434140965  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t434140965_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t434140965_marshaled_com
{
};
#endif // VALUETYPE_T434140965_H
#ifndef ATTRIBUTE_T1880156693_H
#define ATTRIBUTE_T1880156693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1880156693  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1880156693_H
#ifndef SINGLE_T1669721595_H
#define SINGLE_T1669721595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1669721595 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1669721595, ___m_value_7)); }
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
#endif // SINGLE_T1669721595_H
#ifndef COMIMPORTATTRIBUTE_T1753885134_H
#define COMIMPORTATTRIBUTE_T1753885134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t1753885134  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T1753885134_H
#ifndef OPTIONALATTRIBUTE_T516837599_H
#define OPTIONALATTRIBUTE_T516837599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t516837599  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T516837599_H
#ifndef FIXEDBUFFERATTRIBUTE_T3545996606_H
#define FIXEDBUFFERATTRIBUTE_T3545996606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t3545996606  : public Attribute_t1880156693
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t3545996606, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t3545996606, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDBUFFERATTRIBUTE_T3545996606_H
#ifndef COMPILERGENERATEDATTRIBUTE_T2845065590_H
#define COMPILERGENERATEDATTRIBUTE_T2845065590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t2845065590  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T2845065590_H
#ifndef CHAR_T2520357331_H
#define CHAR_T2520357331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2520357331 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2520357331, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2520357331_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2520357331_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2520357331_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2520357331_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2520357331_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2520357331_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2520357331_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2520357331_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2520357331_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T1051938300_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T1051938300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t1051938300  : public Attribute_t1880156693
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::wrap_non_exception_throws
	bool ___wrap_non_exception_throws_0;

public:
	inline static int32_t get_offset_of_wrap_non_exception_throws_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t1051938300, ___wrap_non_exception_throws_0)); }
	inline bool get_wrap_non_exception_throws_0() const { return ___wrap_non_exception_throws_0; }
	inline bool* get_address_of_wrap_non_exception_throws_0() { return &___wrap_non_exception_throws_0; }
	inline void set_wrap_non_exception_throws_0(bool value)
	{
		___wrap_non_exception_throws_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T1051938300_H
#ifndef DEBUGGERHIDDENATTRIBUTE_T3533043917_H
#define DEBUGGERHIDDENATTRIBUTE_T3533043917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DebuggerHiddenAttribute
struct  DebuggerHiddenAttribute_t3533043917  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGGERHIDDENATTRIBUTE_T3533043917_H
#ifndef DEFAULTMEMBERATTRIBUTE_T46551819_H
#define DEFAULTMEMBERATTRIBUTE_T46551819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t46551819  : public Attribute_t1880156693
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::member_name
	String_t* ___member_name_0;

public:
	inline static int32_t get_offset_of_member_name_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t46551819, ___member_name_0)); }
	inline String_t* get_member_name_0() const { return ___member_name_0; }
	inline String_t** get_address_of_member_name_0() { return &___member_name_0; }
	inline void set_member_name_0(String_t* value)
	{
		___member_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T46551819_H
#ifndef DECIMALCONSTANTATTRIBUTE_T3789442059_H
#define DECIMALCONSTANTATTRIBUTE_T3789442059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t3789442059  : public Attribute_t1880156693
{
public:
	// System.Byte System.Runtime.CompilerServices.DecimalConstantAttribute::scale
	uint8_t ___scale_0;
	// System.Boolean System.Runtime.CompilerServices.DecimalConstantAttribute::sign
	bool ___sign_1;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::hi
	int32_t ___hi_2;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::mid
	int32_t ___mid_3;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::low
	int32_t ___low_4;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3789442059, ___scale_0)); }
	inline uint8_t get_scale_0() const { return ___scale_0; }
	inline uint8_t* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(uint8_t value)
	{
		___scale_0 = value;
	}

	inline static int32_t get_offset_of_sign_1() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3789442059, ___sign_1)); }
	inline bool get_sign_1() const { return ___sign_1; }
	inline bool* get_address_of_sign_1() { return &___sign_1; }
	inline void set_sign_1(bool value)
	{
		___sign_1 = value;
	}

	inline static int32_t get_offset_of_hi_2() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3789442059, ___hi_2)); }
	inline int32_t get_hi_2() const { return ___hi_2; }
	inline int32_t* get_address_of_hi_2() { return &___hi_2; }
	inline void set_hi_2(int32_t value)
	{
		___hi_2 = value;
	}

	inline static int32_t get_offset_of_mid_3() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3789442059, ___mid_3)); }
	inline int32_t get_mid_3() const { return ___mid_3; }
	inline int32_t* get_address_of_mid_3() { return &___mid_3; }
	inline void set_mid_3(int32_t value)
	{
		___mid_3 = value;
	}

	inline static int32_t get_offset_of_low_4() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3789442059, ___low_4)); }
	inline int32_t get_low_4() const { return ___low_4; }
	inline int32_t* get_address_of_low_4() { return &___low_4; }
	inline void set_low_4(int32_t value)
	{
		___low_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T3789442059_H
#ifndef UINT64_T403365375_H
#define UINT64_T403365375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t403365375 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t403365375, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T403365375_H
#ifndef GUIDATTRIBUTE_T3239623548_H
#define GUIDATTRIBUTE_T3239623548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t3239623548  : public Attribute_t1880156693
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::guidValue
	String_t* ___guidValue_0;

public:
	inline static int32_t get_offset_of_guidValue_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t3239623548, ___guidValue_0)); }
	inline String_t* get_guidValue_0() const { return ___guidValue_0; }
	inline String_t** get_address_of_guidValue_0() { return &___guidValue_0; }
	inline void set_guidValue_0(String_t* value)
	{
		___guidValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___guidValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T3239623548_H
#ifndef CLSCOMPLIANTATTRIBUTE_T1064886650_H
#define CLSCOMPLIANTATTRIBUTE_T1064886650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CLSCompliantAttribute
struct  CLSCompliantAttribute_t1064886650  : public Attribute_t1880156693
{
public:
	// System.Boolean System.CLSCompliantAttribute::is_compliant
	bool ___is_compliant_0;

public:
	inline static int32_t get_offset_of_is_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_t1064886650, ___is_compliant_0)); }
	inline bool get_is_compliant_0() const { return ___is_compliant_0; }
	inline bool* get_address_of_is_compliant_0() { return &___is_compliant_0; }
	inline void set_is_compliant_0(bool value)
	{
		___is_compliant_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLSCOMPLIANTATTRIBUTE_T1064886650_H
#ifndef UINT32_T1665633935_H
#define UINT32_T1665633935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t1665633935 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t1665633935, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T1665633935_H
#ifndef MONOTODOATTRIBUTE_T3355651077_H
#define MONOTODOATTRIBUTE_T3355651077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t3355651077  : public Attribute_t1880156693
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t3355651077, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T3355651077_H
#ifndef INT64_T2412870573_H
#define INT64_T2412870573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t2412870573 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t2412870573, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T2412870573_H
#ifndef TABLERANGE_T2483884986_H
#define TABLERANGE_T2483884986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t2483884986 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t2483884986, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t2483884986, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t2483884986, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t2483884986, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t2483884986, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T2483884986_H
#ifndef COMVISIBLEATTRIBUTE_T3493353154_H
#define COMVISIBLEATTRIBUTE_T3493353154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t3493353154  : public Attribute_t1880156693
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::Visible
	bool ___Visible_0;

public:
	inline static int32_t get_offset_of_Visible_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t3493353154, ___Visible_0)); }
	inline bool get_Visible_0() const { return ___Visible_0; }
	inline bool* get_address_of_Visible_0() { return &___Visible_0; }
	inline void set_Visible_0(bool value)
	{
		___Visible_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T3493353154_H
#ifndef SERIALIZABLEATTRIBUTE_T605985790_H
#define SERIALIZABLEATTRIBUTE_T605985790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t605985790  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T605985790_H
#ifndef INT32_T13793924_H
#define INT32_T13793924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t13793924 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t13793924, ___m_value_2)); }
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
#endif // INT32_T13793924_H
#ifndef FIELDOFFSETATTRIBUTE_T138023821_H
#define FIELDOFFSETATTRIBUTE_T138023821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t138023821  : public Attribute_t1880156693
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::val
	int32_t ___val_0;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t138023821, ___val_0)); }
	inline int32_t get_val_0() const { return ___val_0; }
	inline int32_t* get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(int32_t value)
	{
		___val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T138023821_H
#ifndef SECURITYATTRIBUTE_T1088667411_H
#define SECURITYATTRIBUTE_T1088667411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t1088667411  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T1088667411_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T735131098_H
#define INTERNALSVISIBLETOATTRIBUTE_T735131098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t735131098  : public Attribute_t1880156693
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::assemblyName
	String_t* ___assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::all_visible
	bool ___all_visible_1;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t735131098, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_all_visible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t735131098, ___all_visible_1)); }
	inline bool get_all_visible_1() const { return ___all_visible_1; }
	inline bool* get_address_of_all_visible_1() { return &___all_visible_1; }
	inline void set_all_visible_1(bool value)
	{
		___all_visible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T735131098_H
#ifndef ENUM_T2035695370_H
#define ENUM_T2035695370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2035695370  : public ValueType_t434140965
{
public:

public:
};

struct Enum_t2035695370_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1118576002* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2035695370_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1118576002* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1118576002** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1118576002* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2035695370_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2035695370_marshaled_com
{
};
#endif // ENUM_T2035695370_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef DECIMAL_T28910926_H
#define DECIMAL_T28910926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t28910926 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t28910926, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t28910926, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t28910926, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t28910926, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t28910926_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t28910926  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t28910926  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t28910926  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t28910926  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t28910926  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t28910926_StaticFields, ___MinValue_0)); }
	inline Decimal_t28910926  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t28910926 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t28910926  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t28910926_StaticFields, ___MaxValue_1)); }
	inline Decimal_t28910926  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t28910926 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t28910926  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t28910926_StaticFields, ___MinusOne_2)); }
	inline Decimal_t28910926  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t28910926 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t28910926  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t28910926_StaticFields, ___One_3)); }
	inline Decimal_t28910926  get_One_3() const { return ___One_3; }
	inline Decimal_t28910926 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t28910926  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t28910926_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t28910926  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t28910926 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t28910926  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T28910926_H
#ifndef DOUBLE_T3634212091_H
#define DOUBLE_T3634212091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t3634212091 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t3634212091, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T3634212091_H
#ifndef INATTRIBUTE_T2610402604_H
#define INATTRIBUTE_T2610402604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t2610402604  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T2610402604_H
#ifndef UINT16_T740722162_H
#define UINT16_T740722162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t740722162 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t740722162, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T740722162_H
#ifndef INT16_T2254859518_H
#define INT16_T2254859518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2254859518 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2254859518, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2254859518_H
#ifndef BOOLEAN_T474899947_H
#define BOOLEAN_T474899947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t474899947 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t474899947, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t474899947_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t474899947_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t474899947_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T474899947_H
#ifndef VOID_T1187688085_H
#define VOID_T1187688085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1187688085 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1187688085_H
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
#ifndef SBYTE_T3158661897_H
#define SBYTE_T3158661897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t3158661897 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t3158661897, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T3158661897_H
#ifndef OBSOLETEATTRIBUTE_T595712559_H
#define OBSOLETEATTRIBUTE_T595712559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t595712559  : public Attribute_t1880156693
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t595712559, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t595712559, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T595712559_H
#ifndef OUTATTRIBUTE_T1253019309_H
#define OUTATTRIBUTE_T1253019309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t1253019309  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T1253019309_H
#ifndef PARAMARRAYATTRIBUTE_T2051513676_H
#define PARAMARRAYATTRIBUTE_T2051513676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t2051513676  : public Attribute_t1880156693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T2051513676_H
#ifndef BYTE_T4047500850_H
#define BYTE_T4047500850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t4047500850 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t4047500850, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T4047500850_H
#ifndef ARGITERATOR_T3570134948_H
#define ARGITERATOR_T3570134948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgIterator
struct  ArgIterator_t3570134948 
{
public:
	// System.IntPtr System.ArgIterator::sig
	IntPtr_t ___sig_0;
	// System.IntPtr System.ArgIterator::args
	IntPtr_t ___args_1;
	// System.Int32 System.ArgIterator::next_arg
	int32_t ___next_arg_2;
	// System.Int32 System.ArgIterator::num_args
	int32_t ___num_args_3;

public:
	inline static int32_t get_offset_of_sig_0() { return static_cast<int32_t>(offsetof(ArgIterator_t3570134948, ___sig_0)); }
	inline IntPtr_t get_sig_0() const { return ___sig_0; }
	inline IntPtr_t* get_address_of_sig_0() { return &___sig_0; }
	inline void set_sig_0(IntPtr_t value)
	{
		___sig_0 = value;
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(ArgIterator_t3570134948, ___args_1)); }
	inline IntPtr_t get_args_1() const { return ___args_1; }
	inline IntPtr_t* get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(IntPtr_t value)
	{
		___args_1 = value;
	}

	inline static int32_t get_offset_of_next_arg_2() { return static_cast<int32_t>(offsetof(ArgIterator_t3570134948, ___next_arg_2)); }
	inline int32_t get_next_arg_2() const { return ___next_arg_2; }
	inline int32_t* get_address_of_next_arg_2() { return &___next_arg_2; }
	inline void set_next_arg_2(int32_t value)
	{
		___next_arg_2 = value;
	}

	inline static int32_t get_offset_of_num_args_3() { return static_cast<int32_t>(offsetof(ArgIterator_t3570134948, ___num_args_3)); }
	inline int32_t get_num_args_3() const { return ___num_args_3; }
	inline int32_t* get_address_of_num_args_3() { return &___num_args_3; }
	inline void set_num_args_3(int32_t value)
	{
		___num_args_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGITERATOR_T3570134948_H
#ifndef BINDINGFLAGS_T2220192352_H
#define BINDINGFLAGS_T2220192352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2220192352 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2220192352, ___value___1)); }
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
#endif // BINDINGFLAGS_T2220192352_H
#ifndef RUNTIMEFIELDHANDLE_T2331025445_H
#define RUNTIMEFIELDHANDLE_T2331025445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2331025445 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331025445, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2331025445_H
#ifndef RUNTIMETYPEHANDLE_T4069687923_H
#define RUNTIMETYPEHANDLE_T4069687923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t4069687923 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t4069687923, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T4069687923_H
#ifndef UNMANAGEDTYPE_T2212389492_H
#define UNMANAGEDTYPE_T2212389492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t2212389492 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2212389492, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T2212389492_H
#ifndef MONODOCUMENTATIONNOTEATTRIBUTE_T3265086640_H
#define MONODOCUMENTATIONNOTEATTRIBUTE_T3265086640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoDocumentationNoteAttribute
struct  MonoDocumentationNoteAttribute_t3265086640  : public MonoTODOAttribute_t3355651077
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONODOCUMENTATIONNOTEATTRIBUTE_T3265086640_H
#ifndef ATTRIBUTETARGETS_T3289705391_H
#define ATTRIBUTETARGETS_T3289705391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t3289705391 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t3289705391, ___value___1)); }
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
#endif // ATTRIBUTETARGETS_T3289705391_H
#ifndef CHARSET_T1746699754_H
#define CHARSET_T1746699754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t1746699754 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t1746699754, ___value___1)); }
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
#endif // CHARSET_T1746699754_H
#ifndef DELEGATE_T2996950849_H
#define DELEGATE_T2996950849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2996950849  : public RuntimeObject
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
	DelegateData_t3520136242 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2996950849, ___data_8)); }
	inline DelegateData_t3520136242 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3520136242 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3520136242 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2996950849_H
#ifndef RUNTIMEARGUMENTHANDLE_T1603710132_H
#define RUNTIMEARGUMENTHANDLE_T1603710132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
struct  RuntimeArgumentHandle_t1603710132 
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	IntPtr_t ___args_0;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t1603710132, ___args_0)); }
	inline IntPtr_t get_args_0() const { return ___args_0; }
	inline IntPtr_t* get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(IntPtr_t value)
	{
		___args_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARGUMENTHANDLE_T1603710132_H
#ifndef SAFEHANDLE_T3090424358_H
#define SAFEHANDLE_T3090424358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3090424358  : public CriticalFinalizerObject_t2848655328
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3090424358, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3090424358, ___invalid_handle_value_1)); }
	inline IntPtr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline IntPtr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(IntPtr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3090424358, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3090424358, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3090424358_H
#ifndef CALLINGCONVENTION_T961399317_H
#define CALLINGCONVENTION_T961399317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t961399317 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t961399317, ___value___1)); }
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
#endif // CALLINGCONVENTION_T961399317_H
#ifndef MARSHALASATTRIBUTE_T472939017_H
#define MARSHALASATTRIBUTE_T472939017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t472939017  : public Attribute_t1880156693
{
public:
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_0;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_1;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_2;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_3;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_4;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_5;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_6;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t472939017, ___utype_0)); }
	inline int32_t get_utype_0() const { return ___utype_0; }
	inline int32_t* get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(int32_t value)
	{
		___utype_0 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t472939017, ___ArraySubType_1)); }
	inline int32_t get_ArraySubType_1() const { return ___ArraySubType_1; }
	inline int32_t* get_address_of_ArraySubType_1() { return &___ArraySubType_1; }
	inline void set_ArraySubType_1(int32_t value)
	{
		___ArraySubType_1 = value;
	}

	inline static int32_t get_offset_of_MarshalCookie_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t472939017, ___MarshalCookie_2)); }
	inline String_t* get_MarshalCookie_2() const { return ___MarshalCookie_2; }
	inline String_t** get_address_of_MarshalCookie_2() { return &___MarshalCookie_2; }
	inline void set_MarshalCookie_2(String_t* value)
	{
		___MarshalCookie_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_2), value);
	}

	inline static int32_t get_offset_of_MarshalType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t472939017, ___MarshalType_3)); }
	inline String_t* get_MarshalType_3() const { return ___MarshalType_3; }
	inline String_t** get_address_of_MarshalType_3() { return &___MarshalType_3; }
	inline void set_MarshalType_3(String_t* value)
	{
		___MarshalType_3 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_3), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t472939017, ___MarshalTypeRef_4)); }
	inline Type_t * get_MarshalTypeRef_4() const { return ___MarshalTypeRef_4; }
	inline Type_t ** get_address_of_MarshalTypeRef_4() { return &___MarshalTypeRef_4; }
	inline void set_MarshalTypeRef_4(Type_t * value)
	{
		___MarshalTypeRef_4 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_4), value);
	}

	inline static int32_t get_offset_of_SizeConst_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t472939017, ___SizeConst_5)); }
	inline int32_t get_SizeConst_5() const { return ___SizeConst_5; }
	inline int32_t* get_address_of_SizeConst_5() { return &___SizeConst_5; }
	inline void set_SizeConst_5(int32_t value)
	{
		___SizeConst_5 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t472939017, ___SizeParamIndex_6)); }
	inline int16_t get_SizeParamIndex_6() const { return ___SizeParamIndex_6; }
	inline int16_t* get_address_of_SizeParamIndex_6() { return &___SizeParamIndex_6; }
	inline void set_SizeParamIndex_6(int16_t value)
	{
		___SizeParamIndex_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T472939017_H
#ifndef MULTICASTDELEGATE_T498156804_H
#define MULTICASTDELEGATE_T498156804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t498156804  : public Delegate_t2996950849
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t498156804 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t498156804 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t498156804, ___prev_9)); }
	inline MulticastDelegate_t498156804 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t498156804 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t498156804 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t498156804, ___kpm_next_10)); }
	inline MulticastDelegate_t498156804 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t498156804 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t498156804 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T498156804_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1403727280_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1403727280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1403727280  : public SafeHandle_t3090424358
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1403727280_H
#ifndef TYPEDREFERENCE_T641881650_H
#define TYPEDREFERENCE_T641881650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t641881650 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t4069687923  ___type_0;
	// System.IntPtr System.TypedReference::value
	IntPtr_t ___value_1;
	// System.IntPtr System.TypedReference::klass
	IntPtr_t ___klass_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t641881650, ___type_0)); }
	inline RuntimeTypeHandle_t4069687923  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t4069687923 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t4069687923  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TypedReference_t641881650, ___value_1)); }
	inline IntPtr_t get_value_1() const { return ___value_1; }
	inline IntPtr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(IntPtr_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_klass_2() { return static_cast<int32_t>(offsetof(TypedReference_t641881650, ___klass_2)); }
	inline IntPtr_t get_klass_2() const { return ___klass_2; }
	inline IntPtr_t* get_address_of_klass_2() { return &___klass_2; }
	inline void set_klass_2(IntPtr_t value)
	{
		___klass_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T641881650_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t4069687923  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t4069687923  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t4069687923 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t4069687923  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t2967983539* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t677702308 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t677702308 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t677702308 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t2967983539* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2967983539** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2967983539* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t677702308 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t677702308 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t677702308 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t677702308 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t677702308 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t677702308 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t677702308 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t677702308 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t677702308 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T2255177558_H
#define ATTRIBUTEUSAGEATTRIBUTE_T2255177558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_t2255177558  : public Attribute_t1880156693
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::valid_on
	int32_t ___valid_on_0;
	// System.Boolean System.AttributeUsageAttribute::allow_multiple
	bool ___allow_multiple_1;
	// System.Boolean System.AttributeUsageAttribute::inherited
	bool ___inherited_2;

public:
	inline static int32_t get_offset_of_valid_on_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t2255177558, ___valid_on_0)); }
	inline int32_t get_valid_on_0() const { return ___valid_on_0; }
	inline int32_t* get_address_of_valid_on_0() { return &___valid_on_0; }
	inline void set_valid_on_0(int32_t value)
	{
		___valid_on_0 = value;
	}

	inline static int32_t get_offset_of_allow_multiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t2255177558, ___allow_multiple_1)); }
	inline bool get_allow_multiple_1() const { return ___allow_multiple_1; }
	inline bool* get_address_of_allow_multiple_1() { return &___allow_multiple_1; }
	inline void set_allow_multiple_1(bool value)
	{
		___allow_multiple_1 = value;
	}

	inline static int32_t get_offset_of_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t2255177558, ___inherited_2)); }
	inline bool get_inherited_2() const { return ___inherited_2; }
	inline bool* get_address_of_inherited_2() { return &___inherited_2; }
	inline void set_inherited_2(bool value)
	{
		___inherited_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T2255177558_H
#ifndef DLLIMPORTATTRIBUTE_T3815145861_H
#define DLLIMPORTATTRIBUTE_T3815145861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t3815145861  : public Attribute_t1880156693
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_1;
	// System.String System.Runtime.InteropServices.DllImportAttribute::Dll
	String_t* ___Dll_2;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of_CallingConvention_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___CallingConvention_0)); }
	inline int32_t get_CallingConvention_0() const { return ___CallingConvention_0; }
	inline int32_t* get_address_of_CallingConvention_0() { return &___CallingConvention_0; }
	inline void set_CallingConvention_0(int32_t value)
	{
		___CallingConvention_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_Dll_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___Dll_2)); }
	inline String_t* get_Dll_2() const { return ___Dll_2; }
	inline String_t** get_address_of_Dll_2() { return &___Dll_2; }
	inline void set_Dll_2(String_t* value)
	{
		___Dll_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dll_2), value);
	}

	inline static int32_t get_offset_of_EntryPoint_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___EntryPoint_3)); }
	inline String_t* get_EntryPoint_3() const { return ___EntryPoint_3; }
	inline String_t** get_address_of_EntryPoint_3() { return &___EntryPoint_3; }
	inline void set_EntryPoint_3(String_t* value)
	{
		___EntryPoint_3 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_3), value);
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_SetLastError_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___SetLastError_6)); }
	inline bool get_SetLastError_6() const { return ___SetLastError_6; }
	inline bool* get_address_of_SetLastError_6() { return &___SetLastError_6; }
	inline void set_SetLastError_6(bool value)
	{
		___SetLastError_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3815145861, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T3815145861_H
#ifndef SAFEWAITHANDLE_T2009272723_H
#define SAFEWAITHANDLE_T2009272723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct  SafeWaitHandle_t2009272723  : public SafeHandleZeroOrMinusOneIsInvalid_t1403727280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEWAITHANDLE_T2009272723_H
#ifndef SWAPPER_T3743528762_H
#define SWAPPER_T3743528762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/Swapper
struct  Swapper_t3743528762  : public MulticastDelegate_t498156804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPPER_T3743528762_H
#ifndef ASYNCCALLBACK_T680890069_H
#define ASYNCCALLBACK_T680890069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t680890069  : public MulticastDelegate_t498156804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T680890069_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize0 = { sizeof (U3CModuleU3E_t2615561262), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1 = { sizeof (RuntimeObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2 = { sizeof (ValueType_t434140965), sizeof(ValueType_t434140965_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3 = { sizeof (Attribute_t1880156693), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5 = { sizeof (Int32_t13793924)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5[3] = 
{
	0,
	0,
	Int32_t13793924::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize6 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize7 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize8 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize9 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize10 = { sizeof (SerializableAttribute_t605985790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize11 = { sizeof (AttributeUsageAttribute_t2255177558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable11[3] = 
{
	AttributeUsageAttribute_t2255177558::get_offset_of_valid_on_0(),
	AttributeUsageAttribute_t2255177558::get_offset_of_allow_multiple_1(),
	AttributeUsageAttribute_t2255177558::get_offset_of_inherited_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize12 = { sizeof (ComVisibleAttribute_t3493353154), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable12[1] = 
{
	ComVisibleAttribute_t3493353154::get_offset_of_Visible_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize13 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize14 = { sizeof (Int64_t2412870573)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable14[1] = 
{
	Int64_t2412870573::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize15 = { sizeof (UInt32_t1665633935)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable15[1] = 
{
	UInt32_t1665633935::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize16 = { sizeof (CLSCompliantAttribute_t1064886650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable16[1] = 
{
	CLSCompliantAttribute_t1064886650::get_offset_of_is_compliant_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize17 = { sizeof (UInt64_t403365375)+ sizeof (RuntimeObject), sizeof(uint64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable17[1] = 
{
	UInt64_t403365375::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize18 = { sizeof (Byte_t4047500850)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable18[3] = 
{
	0,
	0,
	Byte_t4047500850::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize19 = { sizeof (SByte_t3158661897)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable19[1] = 
{
	SByte_t3158661897::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize20 = { sizeof (Int16_t2254859518)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable20[1] = 
{
	Int16_t2254859518::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize21 = { sizeof (UInt16_t740722162)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable21[3] = 
{
	0,
	0,
	UInt16_t740722162::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize22 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize23 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize24 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize25 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize26 = { sizeof (Char_t2520357331)+ sizeof (RuntimeObject), 1, sizeof(Char_t2520357331_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable26[10] = 
{
	0,
	0,
	Char_t2520357331::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Char_t2520357331_StaticFields::get_offset_of_category_data_3(),
	Char_t2520357331_StaticFields::get_offset_of_numeric_data_4(),
	Char_t2520357331_StaticFields::get_offset_of_numeric_data_values_5(),
	Char_t2520357331_StaticFields::get_offset_of_to_lower_data_low_6(),
	Char_t2520357331_StaticFields::get_offset_of_to_lower_data_high_7(),
	Char_t2520357331_StaticFields::get_offset_of_to_upper_data_low_8(),
	Char_t2520357331_StaticFields::get_offset_of_to_upper_data_high_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize27 = { sizeof (String_t), sizeof(char*), sizeof(String_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable27[4] = 
{
	String_t::get_offset_of_length_0(),
	String_t::get_offset_of_start_char_1(),
	String_t_StaticFields::get_offset_of_Empty_2(),
	String_t_StaticFields::get_offset_of_WhiteChars_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize28 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize29 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize30 = { sizeof (Single_t1669721595)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable30[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Single_t1669721595::get_offset_of_m_value_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize31 = { sizeof (Double_t3634212091)+ sizeof (RuntimeObject), sizeof(double), 0, 0 };
extern const int32_t g_FieldOffsetTable31[14] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Double_t3634212091::get_offset_of_m_value_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize32 = { sizeof (Decimal_t28910926)+ sizeof (RuntimeObject), sizeof(Decimal_t28910926 ), sizeof(Decimal_t28910926_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable32[9] = 
{
	Decimal_t28910926_StaticFields::get_offset_of_MinValue_0(),
	Decimal_t28910926_StaticFields::get_offset_of_MaxValue_1(),
	Decimal_t28910926_StaticFields::get_offset_of_MinusOne_2(),
	Decimal_t28910926_StaticFields::get_offset_of_One_3(),
	Decimal_t28910926_StaticFields::get_offset_of_MaxValueDiv10_4(),
	Decimal_t28910926::get_offset_of_flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t28910926::get_offset_of_hi_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t28910926::get_offset_of_lo_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t28910926::get_offset_of_mid_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize33 = { sizeof (Boolean_t474899947)+ sizeof (RuntimeObject), 4, sizeof(Boolean_t474899947_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable33[3] = 
{
	Boolean_t474899947_StaticFields::get_offset_of_FalseString_0(),
	Boolean_t474899947_StaticFields::get_offset_of_TrueString_1(),
	Boolean_t474899947::get_offset_of_m_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize34 = { sizeof (IntPtr_t)+ sizeof (RuntimeObject), sizeof(intptr_t), sizeof(IntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable34[2] = 
{
	IntPtr_t::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntPtr_t_StaticFields::get_offset_of_Zero_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize35 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize36 = { sizeof (UIntPtr_t)+ sizeof (RuntimeObject), sizeof(uintptr_t), sizeof(UIntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable36[2] = 
{
	UIntPtr_t_StaticFields::get_offset_of_Zero_0(),
	UIntPtr_t::get_offset_of__pointer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize37 = { sizeof (MulticastDelegate_t498156804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable37[2] = 
{
	MulticastDelegate_t498156804::get_offset_of_prev_9(),
	MulticastDelegate_t498156804::get_offset_of_kpm_next_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize38 = { sizeof (Delegate_t2996950849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable38[9] = 
{
	Delegate_t2996950849::get_offset_of_method_ptr_0(),
	Delegate_t2996950849::get_offset_of_invoke_impl_1(),
	Delegate_t2996950849::get_offset_of_m_target_2(),
	Delegate_t2996950849::get_offset_of_method_3(),
	Delegate_t2996950849::get_offset_of_delegate_trampoline_4(),
	Delegate_t2996950849::get_offset_of_method_code_5(),
	Delegate_t2996950849::get_offset_of_method_info_6(),
	Delegate_t2996950849::get_offset_of_original_method_info_7(),
	Delegate_t2996950849::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize39 = { sizeof (Enum_t2035695370), sizeof(Enum_t2035695370_marshaled_pinvoke), sizeof(Enum_t2035695370_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable39[1] = 
{
	Enum_t2035695370_StaticFields::get_offset_of_split_char_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize40 = { sizeof (RuntimeArray), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize41 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable41[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize42 = { sizeof (SimpleEnumerator_t195948982), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable42[3] = 
{
	SimpleEnumerator_t195948982::get_offset_of_enumeratee_0(),
	SimpleEnumerator_t195948982::get_offset_of_currentpos_1(),
	SimpleEnumerator_t195948982::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize43 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable43[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize44 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable44[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize45 = { sizeof (Swapper_t3743528762), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize46 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize47 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize48 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize49 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize50 = { sizeof (Void_t1187688085)+ sizeof (RuntimeObject), 1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize51 = { sizeof (Type_t), -1, sizeof(Type_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable51[8] = 
{
	0,
	Type_t::get_offset_of__impl_1(),
	Type_t_StaticFields::get_offset_of_Delimiter_2(),
	Type_t_StaticFields::get_offset_of_EmptyTypes_3(),
	Type_t_StaticFields::get_offset_of_FilterAttribute_4(),
	Type_t_StaticFields::get_offset_of_FilterName_5(),
	Type_t_StaticFields::get_offset_of_FilterNameIgnoreCase_6(),
	Type_t_StaticFields::get_offset_of_Missing_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize52 = { sizeof (MemberInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize53 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize54 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize55 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize56 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize57 = { sizeof (Exception_t3210612126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable57[11] = 
{
	Exception_t3210612126::get_offset_of_trace_ips_0(),
	Exception_t3210612126::get_offset_of_inner_exception_1(),
	Exception_t3210612126::get_offset_of_message_2(),
	Exception_t3210612126::get_offset_of_help_link_3(),
	Exception_t3210612126::get_offset_of_class_name_4(),
	Exception_t3210612126::get_offset_of_stack_trace_5(),
	Exception_t3210612126::get_offset_of__remoteStackTraceString_6(),
	Exception_t3210612126::get_offset_of_remote_stack_index_7(),
	Exception_t3210612126::get_offset_of_hresult_8(),
	Exception_t3210612126::get_offset_of_source_9(),
	Exception_t3210612126::get_offset_of__data_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize58 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize59 = { sizeof (RuntimeFieldHandle_t2331025445)+ sizeof (RuntimeObject), sizeof(RuntimeFieldHandle_t2331025445 ), 0, 0 };
extern const int32_t g_FieldOffsetTable59[1] = 
{
	RuntimeFieldHandle_t2331025445::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize60 = { sizeof (RuntimeTypeHandle_t4069687923)+ sizeof (RuntimeObject), sizeof(RuntimeTypeHandle_t4069687923 ), 0, 0 };
extern const int32_t g_FieldOffsetTable60[1] = 
{
	RuntimeTypeHandle_t4069687923::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize61 = { sizeof (ParamArrayAttribute_t2051513676), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize62 = { sizeof (OutAttribute_t1253019309), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize63 = { sizeof (ObsoleteAttribute_t595712559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable63[2] = 
{
	ObsoleteAttribute_t595712559::get_offset_of__message_0(),
	ObsoleteAttribute_t595712559::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize64 = { sizeof (DllImportAttribute_t3815145861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable64[9] = 
{
	DllImportAttribute_t3815145861::get_offset_of_CallingConvention_0(),
	DllImportAttribute_t3815145861::get_offset_of_CharSet_1(),
	DllImportAttribute_t3815145861::get_offset_of_Dll_2(),
	DllImportAttribute_t3815145861::get_offset_of_EntryPoint_3(),
	DllImportAttribute_t3815145861::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t3815145861::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t3815145861::get_offset_of_SetLastError_6(),
	DllImportAttribute_t3815145861::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t3815145861::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize65 = { sizeof (MarshalAsAttribute_t472939017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable65[7] = 
{
	MarshalAsAttribute_t472939017::get_offset_of_utype_0(),
	MarshalAsAttribute_t472939017::get_offset_of_ArraySubType_1(),
	MarshalAsAttribute_t472939017::get_offset_of_MarshalCookie_2(),
	MarshalAsAttribute_t472939017::get_offset_of_MarshalType_3(),
	MarshalAsAttribute_t472939017::get_offset_of_MarshalTypeRef_4(),
	MarshalAsAttribute_t472939017::get_offset_of_SizeConst_5(),
	MarshalAsAttribute_t472939017::get_offset_of_SizeParamIndex_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize66 = { sizeof (InAttribute_t2610402604), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize67 = { sizeof (SecurityAttribute_t1088667411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize68 = { sizeof (GuidAttribute_t3239623548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable68[1] = 
{
	GuidAttribute_t3239623548::get_offset_of_guidValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize69 = { sizeof (ComImportAttribute_t1753885134), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize70 = { sizeof (OptionalAttribute_t516837599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize71 = { sizeof (FixedBufferAttribute_t3545996606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable71[2] = 
{
	FixedBufferAttribute_t3545996606::get_offset_of_elementType_0(),
	FixedBufferAttribute_t3545996606::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize72 = { sizeof (CompilerGeneratedAttribute_t2845065590), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize73 = { sizeof (InternalsVisibleToAttribute_t735131098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable73[2] = 
{
	InternalsVisibleToAttribute_t735131098::get_offset_of_assemblyName_0(),
	InternalsVisibleToAttribute_t735131098::get_offset_of_all_visible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize74 = { sizeof (RuntimeCompatibilityAttribute_t1051938300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable74[1] = 
{
	RuntimeCompatibilityAttribute_t1051938300::get_offset_of_wrap_non_exception_throws_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize75 = { sizeof (DebuggerHiddenAttribute_t3533043917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize76 = { sizeof (DefaultMemberAttribute_t46551819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable76[1] = 
{
	DefaultMemberAttribute_t46551819::get_offset_of_member_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize77 = { sizeof (DecimalConstantAttribute_t3789442059), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable77[5] = 
{
	DecimalConstantAttribute_t3789442059::get_offset_of_scale_0(),
	DecimalConstantAttribute_t3789442059::get_offset_of_sign_1(),
	DecimalConstantAttribute_t3789442059::get_offset_of_hi_2(),
	DecimalConstantAttribute_t3789442059::get_offset_of_mid_3(),
	DecimalConstantAttribute_t3789442059::get_offset_of_low_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize78 = { sizeof (FieldOffsetAttribute_t138023821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable78[1] = 
{
	FieldOffsetAttribute_t138023821::get_offset_of_val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize79 = { sizeof (RuntimeArgumentHandle_t1603710132)+ sizeof (RuntimeObject), sizeof(RuntimeArgumentHandle_t1603710132 ), 0, 0 };
extern const int32_t g_FieldOffsetTable79[1] = 
{
	RuntimeArgumentHandle_t1603710132::get_offset_of_args_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize80 = { sizeof (AsyncCallback_t680890069), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize81 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize82 = { sizeof (TypedReference_t641881650)+ sizeof (RuntimeObject), sizeof(TypedReference_t641881650 ), 0, 0 };
extern const int32_t g_FieldOffsetTable82[3] = 
{
	TypedReference_t641881650::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t641881650::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypedReference_t641881650::get_offset_of_klass_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize83 = { sizeof (ArgIterator_t3570134948)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable83[4] = 
{
	ArgIterator_t3570134948::get_offset_of_sig_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t3570134948::get_offset_of_args_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t3570134948::get_offset_of_next_arg_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ArgIterator_t3570134948::get_offset_of_num_args_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize84 = { sizeof (MarshalByRefObject_t2132578249), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable84[1] = 
{
	MarshalByRefObject_t2132578249::get_offset_of__identity_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize85 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable85[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize86 = { sizeof (RuntimeHelpers_t1830567511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize87 = { sizeof (Locale_t1557344494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize88 = { sizeof (MonoTODOAttribute_t3355651077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable88[1] = 
{
	MonoTODOAttribute_t3355651077::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize89 = { sizeof (MonoDocumentationNoteAttribute_t3265086640), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize90 = { sizeof (SafeHandleZeroOrMinusOneIsInvalid_t1403727280), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize91 = { sizeof (SafeWaitHandle_t2009272723), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize92 = { sizeof (CodePointIndexer_t4032834826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable92[4] = 
{
	CodePointIndexer_t4032834826::get_offset_of_ranges_0(),
	CodePointIndexer_t4032834826::get_offset_of_TotalCount_1(),
	CodePointIndexer_t4032834826::get_offset_of_defaultIndex_2(),
	CodePointIndexer_t4032834826::get_offset_of_defaultCP_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize93 = { sizeof (TableRange_t2483884986)+ sizeof (RuntimeObject), sizeof(TableRange_t2483884986 ), 0, 0 };
extern const int32_t g_FieldOffsetTable93[5] = 
{
	TableRange_t2483884986::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2483884986::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2483884986::get_offset_of_Count_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2483884986::get_offset_of_IndexStart_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t2483884986::get_offset_of_IndexEnd_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize94 = { sizeof (TailoringInfo_t1450393825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable94[4] = 
{
	TailoringInfo_t1450393825::get_offset_of_LCID_0(),
	TailoringInfo_t1450393825::get_offset_of_TailoringIndex_1(),
	TailoringInfo_t1450393825::get_offset_of_TailoringCount_2(),
	TailoringInfo_t1450393825::get_offset_of_FrenchSort_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize95 = { sizeof (Contraction_t951385486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable95[3] = 
{
	Contraction_t951385486::get_offset_of_Source_0(),
	Contraction_t951385486::get_offset_of_Replacement_1(),
	Contraction_t951385486::get_offset_of_SortKey_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize96 = { sizeof (ContractionComparer_t973199252), -1, sizeof(ContractionComparer_t973199252_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable96[1] = 
{
	ContractionComparer_t973199252_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize97 = { sizeof (Level2Map_t3162643446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable97[2] = 
{
	Level2Map_t3162643446::get_offset_of_Source_0(),
	Level2Map_t3162643446::get_offset_of_Replace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize98 = { sizeof (Level2MapComparer_t3644283197), -1, sizeof(Level2MapComparer_t3644283197_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable98[1] = 
{
	Level2MapComparer_t3644283197_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize99 = { sizeof (MSCompatUnicodeTable_t3949071613), -1, sizeof(MSCompatUnicodeTable_t3949071613_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable99[22] = 
{
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_MaxExpansionLength_0(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_ignorableFlags_1(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_categories_2(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_level1_3(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_level2_4(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_level3_5(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkCHScategory_6(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkCHTcategory_7(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkJAcategory_8(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkKOcategory_9(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkCHSlv1_10(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkCHTlv1_11(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkJAlv1_12(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkKOlv1_13(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_cjkKOlv2_14(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_tailoringArr_15(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_tailoringInfos_16(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_forLock_17(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_isReady_18(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_U3CU3Ef__switchU24map2_19(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_20(),
	MSCompatUnicodeTable_t3949071613_StaticFields::get_offset_of_U3CU3Ef__switchU24map4_21(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
