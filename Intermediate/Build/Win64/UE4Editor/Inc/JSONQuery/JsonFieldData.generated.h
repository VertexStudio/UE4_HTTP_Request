// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonFieldData;
enum class EJSONResult : uint8;
#ifdef JSONQUERY_JsonFieldData_generated_h
#error "JsonFieldData.generated.h already included, missing '#pragma once' in JsonFieldData.h"
#endif
#define JSONQUERY_JsonFieldData_generated_h

#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_39_DELEGATE \
struct _Script_JSONQuery_eventOnGetResult_Parms \
{ \
	bool bSuccess; \
	UJsonFieldData* JSON; \
	EJSONResult Status; \
}; \
static inline void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult, bool bSuccess, UJsonFieldData* JSON, const EJSONResult Status) \
{ \
	_Script_JSONQuery_eventOnGetResult_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.JSON=JSON; \
	Parms.Status=Status; \
	OnGetResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_SPARSE_DATA
#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNullArray); \
	DECLARE_FUNCTION(execSetNull); \
	DECLARE_FUNCTION(execGetIsNull); \
	DECLARE_FUNCTION(execSetIntArray); \
	DECLARE_FUNCTION(execGetIntArray); \
	DECLARE_FUNCTION(execSetInt); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execSetFloatArray); \
	DECLARE_FUNCTION(execGetFloatArray); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execSetBoolArray); \
	DECLARE_FUNCTION(execGetBoolArray); \
	DECLARE_FUNCTION(execSetBoolean); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetStringArray); \
	DECLARE_FUNCTION(execGetStringArray); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execSetObjectArray); \
	DECLARE_FUNCTION(execGetObjectArray); \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execPostRequestWithFile); \
	DECLARE_FUNCTION(execFromFile); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execFromString); \
	DECLARE_FUNCTION(execPostRequest); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execGetObjectKeys); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execCreate);


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNullArray); \
	DECLARE_FUNCTION(execSetNull); \
	DECLARE_FUNCTION(execGetIsNull); \
	DECLARE_FUNCTION(execSetIntArray); \
	DECLARE_FUNCTION(execGetIntArray); \
	DECLARE_FUNCTION(execSetInt); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execSetFloatArray); \
	DECLARE_FUNCTION(execGetFloatArray); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execSetBoolArray); \
	DECLARE_FUNCTION(execGetBoolArray); \
	DECLARE_FUNCTION(execSetBoolean); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetStringArray); \
	DECLARE_FUNCTION(execGetStringArray); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execSetObjectArray); \
	DECLARE_FUNCTION(execGetObjectArray); \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execPostRequestWithFile); \
	DECLARE_FUNCTION(execFromFile); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execFromString); \
	DECLARE_FUNCTION(execPostRequest); \
	DECLARE_FUNCTION(execGetRequest); \
	DECLARE_FUNCTION(execGetObjectKeys); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execCreate);


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonFieldData(); \
	friend struct Z_Construct_UClass_UJsonFieldData_Statics; \
public: \
	DECLARE_CLASS(UJsonFieldData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JSONQuery"), NO_API) \
	DECLARE_SERIALIZER(UJsonFieldData)


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUJsonFieldData(); \
	friend struct Z_Construct_UClass_UJsonFieldData_Statics; \
public: \
	DECLARE_CLASS(UJsonFieldData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JSONQuery"), NO_API) \
	DECLARE_SERIALIZER(UJsonFieldData)


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonFieldData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonFieldData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonFieldData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonFieldData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonFieldData(UJsonFieldData&&); \
	NO_API UJsonFieldData(const UJsonFieldData&); \
public:


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonFieldData(UJsonFieldData&&); \
	NO_API UJsonFieldData(const UJsonFieldData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonFieldData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonFieldData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonFieldData)


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_PRIVATE_PROPERTY_OFFSET
#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_41_PROLOG
#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_PRIVATE_PROPERTY_OFFSET \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_SPARSE_DATA \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_PRIVATE_PROPERTY_OFFSET \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_SPARSE_DATA \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_INCLASS_NO_PURE_DECLS \
	RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSONQUERY_API UClass* StaticClass<class UJsonFieldData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RequestTest_Plugins_JSONQuery_Source_JSONQuery_Classes_JsonFieldData_h


#define FOREACH_ENUM_EJSONRESULT(op) \
	op(EJSONResult::Success) \
	op(EJSONResult::HttpFailed) \
	op(EJSONResult::JSONParsingFailed) 

enum class EJSONResult : uint8;
template<> JSONQUERY_API UEnum* StaticEnum<EJSONResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
