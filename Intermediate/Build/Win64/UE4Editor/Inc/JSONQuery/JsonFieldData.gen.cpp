// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JSONQuery/Classes/JsonFieldData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonFieldData() {}
// Cross Module References
	JSONQUERY_API UFunction* Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_JSONQuery();
	JSONQUERY_API UEnum* Z_Construct_UEnum_JSONQuery_EJSONResult();
	JSONQUERY_API UClass* Z_Construct_UClass_UJsonFieldData_NoRegister();
	JSONQUERY_API UClass* Z_Construct_UClass_UJsonFieldData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics
	{
		struct _Script_JSONQuery_eventOnGetResult_Parms
		{
			bool bSuccess;
			UJsonFieldData* JSON;
			EJSONResult Status;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JSON;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_JSONQuery_eventOnGetResult_Parms, Status), Z_Construct_UEnum_JSONQuery_EJSONResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_JSONQuery_eventOnGetResult_Parms, JSON), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_JSONQuery_eventOnGetResult_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_JSONQuery_eventOnGetResult_Parms), &Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_JSON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Generate a delegate for the OnGetResult event\n" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Generate a delegate for the OnGetResult event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_JSONQuery, nullptr, "OnGetResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_JSONQuery_eventOnGetResult_Parms), Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EJSONResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_JSONQuery_EJSONResult, Z_Construct_UPackage__Script_JSONQuery(), TEXT("EJSONResult"));
		}
		return Singleton;
	}
	template<> JSONQUERY_API UEnum* StaticEnum<EJSONResult>()
	{
		return EJSONResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJSONResult(EJSONResult_StaticEnum, TEXT("/Script/JSONQuery"), TEXT("EJSONResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_JSONQuery_EJSONResult_Hash() { return 2399007875U; }
	UEnum* Z_Construct_UEnum_JSONQuery_EJSONResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_JSONQuery();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJSONResult"), 0, Get_Z_Construct_UEnum_JSONQuery_EJSONResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJSONResult::Success", (int64)EJSONResult::Success },
				{ "EJSONResult::HttpFailed", (int64)EJSONResult::HttpFailed },
				{ "EJSONResult::JSONParsingFailed", (int64)EJSONResult::JSONParsingFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "JSON" },
				{ "Comment", "/**\n* The possible status of a JSON POST/GET call.\n*/" },
				{ "HttpFailed.Name", "EJSONResult::HttpFailed" },
				{ "JSONParsingFailed.Name", "EJSONResult::JSONParsingFailed" },
				{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
				{ "Success.Name", "EJSONResult::Success" },
				{ "ToolTip", "The possible status of a JSON POST/GET call." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_JSONQuery,
				nullptr,
				"EJSONResult",
				"EJSONResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetNullArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_length);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetNullArray(Z_Param_key,Z_Param_Out_length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetNull)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetNull(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetIsNull)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_fieldExists);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsNull(Z_Param_key,Z_Param_Out_fieldExists);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetIntArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(int32,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetIntArray(Z_Param_key,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetIntArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntArray(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetInt(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetFloatArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(float,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetFloatArray(Z_Param_key,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetFloatArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetFloat(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetBoolArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(bool,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetBoolArray(Z_Param_key,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetBoolArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBoolArray(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetBoolean)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetBoolean(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(FString,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetStringArray(Z_Param_key,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetStringArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArray(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetString(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetObjectArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_TARRAY(UJsonFieldData*,Z_Param_arrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetObjectArray(Z_Param_key,Z_Param_arrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetObjectArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UJsonFieldData*>*)Z_Param__Result=P_THIS->GetObjectArray(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execSetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_OBJECT(UJsonFieldData,Z_Param_objectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->SetObject(Z_Param_key,Z_Param_objectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=P_THIS->GetObject(Z_Param_key,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execPostRequestWithFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostRequestWithFile(Z_Param_FilePath,Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FromFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dataString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FromString(Z_Param_dataString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execPostRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostRequest(Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::GetRequest(Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execGetObjectKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetObjectKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execHasField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasField(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsonFieldData::execCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJsonFieldData**)Z_Param__Result=UJsonFieldData::Create();
		P_NATIVE_END;
	}
	void UJsonFieldData::StaticRegisterNativesUJsonFieldData()
	{
		UClass* Class = UJsonFieldData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &UJsonFieldData::execCreate },
			{ "FromFile", &UJsonFieldData::execFromFile },
			{ "FromString", &UJsonFieldData::execFromString },
			{ "GetBool", &UJsonFieldData::execGetBool },
			{ "GetBoolArray", &UJsonFieldData::execGetBoolArray },
			{ "GetFloat", &UJsonFieldData::execGetFloat },
			{ "GetFloatArray", &UJsonFieldData::execGetFloatArray },
			{ "GetInt", &UJsonFieldData::execGetInt },
			{ "GetIntArray", &UJsonFieldData::execGetIntArray },
			{ "GetIsNull", &UJsonFieldData::execGetIsNull },
			{ "GetObject", &UJsonFieldData::execGetObject },
			{ "GetObjectArray", &UJsonFieldData::execGetObjectArray },
			{ "GetObjectKeys", &UJsonFieldData::execGetObjectKeys },
			{ "GetRequest", &UJsonFieldData::execGetRequest },
			{ "GetString", &UJsonFieldData::execGetString },
			{ "GetStringArray", &UJsonFieldData::execGetStringArray },
			{ "HasField", &UJsonFieldData::execHasField },
			{ "PostRequest", &UJsonFieldData::execPostRequest },
			{ "PostRequestWithFile", &UJsonFieldData::execPostRequestWithFile },
			{ "SetBoolArray", &UJsonFieldData::execSetBoolArray },
			{ "SetBoolean", &UJsonFieldData::execSetBoolean },
			{ "SetFloat", &UJsonFieldData::execSetFloat },
			{ "SetFloatArray", &UJsonFieldData::execSetFloatArray },
			{ "SetInt", &UJsonFieldData::execSetInt },
			{ "SetIntArray", &UJsonFieldData::execSetIntArray },
			{ "SetNull", &UJsonFieldData::execSetNull },
			{ "SetNullArray", &UJsonFieldData::execSetNullArray },
			{ "SetObject", &UJsonFieldData::execSetObject },
			{ "SetObjectArray", &UJsonFieldData::execSetObjectArray },
			{ "SetString", &UJsonFieldData::execSetString },
			{ "SetStringArray", &UJsonFieldData::execSetStringArray },
			{ "ToString", &UJsonFieldData::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsonFieldData_Create_Statics
	{
		struct JsonFieldData_eventCreate_Parms
		{
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_Create_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Create a new instance of the UJsonFieldData class, for use in Blueprint graphs.\n\x09*\n\x09* @return\x09""A pointer to the newly created post data\n\x09*/" },
		{ "DisplayName", "Create JSON" },
		{ "Keywords", "new" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Create a new instance of the UJsonFieldData class, for use in Blueprint graphs.\n\n@return       A pointer to the newly created post data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "Create", nullptr, nullptr, sizeof(JsonFieldData_eventCreate_Parms), Z_Construct_UFunction_UJsonFieldData_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_FromFile_Statics
	{
		struct JsonFieldData_eventFromFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventFromFile_Parms), &Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventFromFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Creates new data from the\n\x09*\n\x09* @param\x09""FilePath\x09Text Json File in game content folder\n\x09*\n\x09* @return\x09JsonFieldData Object\n\x09*/" },
		{ "DisplayName", "From File" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Creates new data from the\n\n@param        FilePath        Text Json File in game content folder\n\n@return       JsonFieldData Object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "FromFile", nullptr, nullptr, sizeof(JsonFieldData_eventFromFile_Parms), Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_FromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_FromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_FromString_Statics
	{
		struct JsonFieldData_eventFromString_Parms
		{
			FString dataString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dataString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dataString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventFromString_Parms), &Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString = { "dataString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventFromString_Parms, dataString), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_FromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_FromString_Statics::NewProp_dataString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_FromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Sets the fields from the supplied JSON string\n\x09*\n\x09* @param\x09""dataString The JSON string\n\x09*/" },
		{ "DisplayName", "From String" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Sets the fields from the supplied JSON string\n\n@param        dataString The JSON string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "FromString", nullptr, nullptr, sizeof(JsonFieldData_eventFromString_Parms), Z_Construct_UFunction_UJsonFieldData_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetBool_Statics
	{
		struct JsonFieldData_eventGetBool_Parms
		{
			FString key;
			bool success;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetBool_Parms), &Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetBool_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetBool_Parms), &Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetBool_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Tries to get a boolean from the field data by key, returns the boolean when successful\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the boolean field found?\n\x09*\n\x09* @return\x09The requested boolean, always false when failed\n\x09*/" },
		{ "DisplayName", "Get Boolean Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get a boolean from the field data by key, returns the boolean when successful\n\n@param        key                             Key\n@param        success                 Was the boolean field found?\n\n@return       The requested boolean, always false when failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetBool", nullptr, nullptr, sizeof(JsonFieldData_eventGetBool_Parms), Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics
	{
		struct JsonFieldData_eventGetBoolArray_Parms
		{
			FString key;
			bool success;
			TArray<bool> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetBoolArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetBoolArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetBoolArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetBoolArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Gets a boolean array from the post data with the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the field found?\n\x09*\n\x09* @return\x09The requested array of booleans\n\x09*/" },
		{ "DisplayName", "Get Boolean Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets a boolean array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested array of booleans" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetBoolArray", nullptr, nullptr, sizeof(JsonFieldData_eventGetBoolArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics
	{
		struct JsonFieldData_eventGetFloat_Parms
		{
			FString key;
			bool success;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetFloat_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetFloat_Parms), &Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetFloat_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Tries to get a float from the field data by key, returns the float when successful\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the float field found?\n\x09*\n\x09* @return\x09The requested float, always 0.0 when failed\n\x09*/" },
		{ "DisplayName", "Get Float Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get a float from the field data by key, returns the float when successful\n\n@param        key                             Key\n@param        success                 Was the float field found?\n\n@return       The requested float, always 0.0 when failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetFloat", nullptr, nullptr, sizeof(JsonFieldData_eventGetFloat_Parms), Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics
	{
		struct JsonFieldData_eventGetFloatArray_Parms
		{
			FString key;
			bool success;
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetFloatArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetFloatArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetFloatArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetFloatArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Gets a float array from the post data with the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the field found?\n\x09*\n\x09* @return\x09The requested array of floats\n\x09*/" },
		{ "DisplayName", "Get Float Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets a float array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested array of floats" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetFloatArray", nullptr, nullptr, sizeof(JsonFieldData_eventGetFloatArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetInt_Statics
	{
		struct JsonFieldData_eventGetInt_Parms
		{
			FString key;
			bool success;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetInt_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetInt_Parms), &Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetInt_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Tries to get an integer from the field data by key, returns the integer when successful\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the integer field found?\n\x09*\n\x09* @return\x09The requested integer, always 0 when failed\n\x09*/" },
		{ "DisplayName", "Get Integer Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get an integer from the field data by key, returns the integer when successful\n\n@param        key                             Key\n@param        success                 Was the integer field found?\n\n@return       The requested integer, always 0 when failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetInt", nullptr, nullptr, sizeof(JsonFieldData_eventGetInt_Parms), Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics
	{
		struct JsonFieldData_eventGetIntArray_Parms
		{
			FString key;
			bool success;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetIntArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetIntArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetIntArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetIntArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Gets an integer array from the post data with the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the field found?\n\x09*\n\x09* @return\x09The requested array of integers\n\x09*/" },
		{ "DisplayName", "Get Integer Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets an integer array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested array of integers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetIntArray", nullptr, nullptr, sizeof(JsonFieldData_eventGetIntArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetIntArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetIntArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics
	{
		struct JsonFieldData_eventGetIsNull_Parms
		{
			FString key;
			bool fieldExists;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_fieldExists_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fieldExists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetIsNull_Parms), &Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetIsNull_Parms*)Obj)->fieldExists = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists = { "fieldExists", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetIsNull_Parms), &Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetIsNull_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_fieldExists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Checks if a field is null\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09""fieldExists\x09\x09Was the field found?\n\x09*\n\x09* @return\x09If the field is null. False if it's not or it was not found.\n\x09*/" },
		{ "DisplayName", "Get Field Is Null" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Checks if a field is null\n\n@param        key                             Key\n@param        fieldExists             Was the field found?\n\n@return       If the field is null. False if it's not or it was not found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetIsNull", nullptr, nullptr, sizeof(JsonFieldData_eventGetIsNull_Parms), Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetIsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetIsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetObject_Statics
	{
		struct JsonFieldData_eventGetObject_Parms
		{
			FString key;
			bool success;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetObject_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetObject_Parms), &Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetObject_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Gets the post data object from the post data with the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the object field found?\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Get Object Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets the post data object from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the object field found?\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetObject", nullptr, nullptr, sizeof(JsonFieldData_eventGetObject_Parms), Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics
	{
		struct JsonFieldData_eventGetObjectArray_Parms
		{
			FString key;
			bool success;
			TArray<UJsonFieldData*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetObjectArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetObjectArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetObjectArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetObjectArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Gets an object array from the post data with the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the field found?\n\x09*\n\x09* @return\x09The requested post data objects\n\x09*/" },
		{ "DisplayName", "Get Object Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets an object array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the field found?\n\n@return       The requested post data objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetObjectArray", nullptr, nullptr, sizeof(JsonFieldData_eventGetObjectArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics
	{
		struct JsonFieldData_eventGetObjectKeys_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetObjectKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Gets the keys from the supplied object\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Key\n\x09*\n\x09* @return\x09""Array of keys\n\x09*/" },
		{ "DisplayName", "Get Object Keys" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets the keys from the supplied object\n\n@param        key                                             Key\n\n@return       Array of keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetObjectKeys", nullptr, nullptr, sizeof(JsonFieldData_eventGetObjectKeys_Parms), Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetObjectKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics
	{
		struct JsonFieldData_eventGetRequest_Parms
		{
			FString url;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetRequest_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetRequest_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Grabs a page from the internet\n\x09*\n\x09* @param\x09url\x09\x09\x09\x09The URL to request\n\x09*\n\x09* @return\x09The newly created post data that will be filled with the url response.\n\x09*/" },
		{ "DisplayName", "Get JSON Request" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Grabs a page from the internet\n\n@param        url                             The URL to request\n\n@return       The newly created post data that will be filled with the url response." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetRequest", nullptr, nullptr, sizeof(JsonFieldData_eventGetRequest_Parms), Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetString_Statics
	{
		struct JsonFieldData_eventGetString_Parms
		{
			FString key;
			bool success;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetString_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetString_Parms), &Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetString_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetString_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Tries to get a string from the field data by key, returns the string when successful\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the string field found?\n\x09*\n\x09* @return\x09The requested string, empty if failed\n\x09*/" },
		{ "DisplayName", "Get String Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Tries to get a string from the field data by key, returns the string when successful\n\n@param        key                             Key\n@param        success                 Was the string field found?\n\n@return       The requested string, empty if failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetString", nullptr, nullptr, sizeof(JsonFieldData_eventGetString_Parms), Z_Construct_UFunction_UJsonFieldData_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics
	{
		struct JsonFieldData_eventGetStringArray_Parms
		{
			FString key;
			bool success;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetStringArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success_SetBit(void* Obj)
	{
		((JsonFieldData_eventGetStringArray_Parms*)Obj)->success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventGetStringArray_Parms), &Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventGetStringArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Gets a string array from the post data with the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09success\x09\x09\x09Was the string found?\n\x09*\n\x09* @return\x09The requested array of strings\n\x09*/" },
		{ "DisplayName", "Get String Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Gets a string array from the post data with the given key\n\n@param        key                             Key\n@param        success                 Was the string found?\n\n@return       The requested array of strings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "GetStringArray", nullptr, nullptr, sizeof(JsonFieldData_eventGetStringArray_Parms), Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_GetStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_HasField_Statics
	{
		struct JsonFieldData_eventHasField_Parms
		{
			FString key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsonFieldData_eventHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventHasField_Parms), &Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventHasField_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_HasField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_HasField_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_HasField_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Checks if a field exists in the JSON object\n\x09*\n\x09* @param\x09key\x09The field name to check\n\x09*\n\x09* @return\x09True if the field exists\n\x09*/" },
		{ "DisplayName", "Check If Field Exists" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Checks if a field exists in the JSON object\n\n@param        key     The field name to check\n\n@return       True if the field exists" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_HasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "HasField", nullptr, nullptr, sizeof(JsonFieldData_eventHasField_Parms), Z_Construct_UFunction_UJsonFieldData_HasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_HasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_HasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_HasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics
	{
		struct JsonFieldData_eventPostRequest_Parms
		{
			FString url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventPostRequest_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Posts the current request data to the internet\n\x09*\n\x09* @param\x09url\x09\x09\x09\x09The URL to post to\n\x09*/" },
		{ "DisplayName", "Post JSON Request" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Posts the current request data to the internet\n\n@param        url                             The URL to post to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "PostRequest", nullptr, nullptr, sizeof(JsonFieldData_eventPostRequest_Parms), Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_PostRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics
	{
		struct JsonFieldData_eventPostRequestWithFile_Parms
		{
			FString FilePath;
			FString Url;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventPostRequestWithFile_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventPostRequestWithFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Posts the current request data to the internet, together with a file\n\x09*\n\x09* @param\x09""FilePath\x09\x09The absolute path for a file\n\x09* @param\x09Url\x09\x09\x09\x09The URL to post to\n\x09*/" },
		{ "DisplayName", "Post JSON Request and File" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Posts the current request data to the internet, together with a file\n\n@param        FilePath                The absolute path for a file\n@param        Url                             The URL to post to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "PostRequestWithFile", nullptr, nullptr, sizeof(JsonFieldData_eventPostRequestWithFile_Parms), Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics
	{
		struct JsonFieldData_eventSetBoolArray_Parms
		{
			FString key;
			TArray<bool> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetBoolArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetBoolArray_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetBoolArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied boolean array to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09""data\x09\x09\x09""Array\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Boolean Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied boolean array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetBoolArray", nullptr, nullptr, sizeof(JsonFieldData_eventSetBoolArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetBoolArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics
	{
		struct JsonFieldData_eventSetBoolean_Parms
		{
			FString key;
			bool value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetBoolean_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_SetBit(void* Obj)
	{
		((JsonFieldData_eventSetBoolean_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsonFieldData_eventSetBoolean_Parms), &Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetBoolean_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied bool to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09value\x09\x09\x09Object value\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Boolean Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied bool to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetBoolean", nullptr, nullptr, sizeof(JsonFieldData_eventSetBoolean_Parms), Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics
	{
		struct JsonFieldData_eventSetFloat_Parms
		{
			FString key;
			float value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetFloat_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetFloat_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetFloat_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied float to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09value\x09\x09\x09Object value\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Float Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied float to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetFloat", nullptr, nullptr, sizeof(JsonFieldData_eventSetFloat_Parms), Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics
	{
		struct JsonFieldData_eventSetFloatArray_Parms
		{
			FString key;
			TArray<float> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetFloatArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetFloatArray_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetFloatArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied float array to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09""data\x09\x09\x09""Array\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Float Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied float array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetFloatArray", nullptr, nullptr, sizeof(JsonFieldData_eventSetFloatArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetInt_Statics
	{
		struct JsonFieldData_eventSetInt_Parms
		{
			FString key;
			int32 value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetInt_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetInt_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetInt_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied integer to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09value\x09\x09\x09Object value\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Integer Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied integer to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetInt", nullptr, nullptr, sizeof(JsonFieldData_eventSetInt_Parms), Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics
	{
		struct JsonFieldData_eventSetIntArray_Parms
		{
			FString key;
			TArray<int32> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetIntArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetIntArray_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetIntArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied integer array to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09""data\x09\x09\x09""Array\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Integer Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied integer array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetIntArray", nullptr, nullptr, sizeof(JsonFieldData_eventSetIntArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetIntArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetIntArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetNull_Statics
	{
		struct JsonFieldData_eventSetNull_Parms
		{
			FString key;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetNull_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetNull_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds a null value to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Null Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds a null value to the post data, under the given key\n\n@param        key                             Key\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetNull", nullptr, nullptr, sizeof(JsonFieldData_eventSetNull_Parms), Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics
	{
		struct JsonFieldData_eventSetNullArray_Parms
		{
			FString key;
			int32 length;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_length_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetNullArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetNullArray_Parms, length), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetNullArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds null array to the post data, under the given key, with the given number of nulls\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09\x09\x09Key\n\x09* @param\x09""data\x09\x09\x09\x09\x09""Array\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Null Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds null array to the post data, under the given key, with the given number of nulls\n\n@param        key                                             Key\n@param        data                                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetNullArray", nullptr, nullptr, sizeof(JsonFieldData_eventSetNullArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetNullArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetNullArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetObject_Statics
	{
		struct JsonFieldData_eventSetObject_Parms
		{
			FString key;
			const UJsonFieldData* objectData;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetObject_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData = { "objectData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetObject_Parms, objectData), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetObject_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_objectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied object to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09objectData\x09\x09Object data\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Object Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied object to the post data, under the given key\n\n@param        key                             Key\n@param        objectData              Object data\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetObject", nullptr, nullptr, sizeof(JsonFieldData_eventSetObject_Parms), Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics
	{
		struct JsonFieldData_eventSetObjectArray_Parms
		{
			FString key;
			TArray<UJsonFieldData*> arrayData;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrayData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrayData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetObjectArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData = { "arrayData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetObjectArray_Parms, arrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_Inner = { "arrayData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetObjectArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_arrayData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied object array to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09objectData\x09\x09""Array of object data\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add Object Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied object array to the post data, under the given key\n\n@param        key                             Key\n@param        objectData              Array of object data\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetObjectArray", nullptr, nullptr, sizeof(JsonFieldData_eventSetObjectArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetString_Statics
	{
		struct JsonFieldData_eventSetString_Parms
		{
			FString key;
			FString value;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetString_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetString_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetString_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied string to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09value\x09\x09\x09Object value\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add String Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied string to the post data, under the given key\n\n@param        key                             Key\n@param        value                   Object value\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetString", nullptr, nullptr, sizeof(JsonFieldData_eventSetString_Parms), Z_Construct_UFunction_UJsonFieldData_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics
	{
		struct JsonFieldData_eventSetStringArray_Parms
		{
			FString key;
			TArray<FString> data;
			UJsonFieldData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetStringArray_Parms, ReturnValue), Z_Construct_UClass_UJsonFieldData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetStringArray_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventSetStringArray_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Adds the supplied string array to the post data, under the given key\n\x09*\n\x09* @param\x09key\x09\x09\x09\x09Key\n\x09* @param\x09""data\x09\x09\x09""Array\n\x09*\n\x09* @return\x09The object itself\n\x09*/" },
		{ "DisplayName", "Add String Array Field" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Adds the supplied string array to the post data, under the given key\n\n@param        key                             Key\n@param        data                    Array\n\n@return       The object itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "SetStringArray", nullptr, nullptr, sizeof(JsonFieldData_eventSetStringArray_Parms), Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_SetStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsonFieldData_ToString_Statics
	{
		struct JsonFieldData_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsonFieldData_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsonFieldData_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsonFieldData_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsonFieldData_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsonFieldData_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Get the JSON object as a string.\n\x09*/" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "JSON To String" },
		{ "Keywords", "cast text convert serialize" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Get the JSON object as a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsonFieldData_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonFieldData, nullptr, "ToString", nullptr, nullptr, sizeof(JsonFieldData_eventToString_Parms), Z_Construct_UFunction_UJsonFieldData_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsonFieldData_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsonFieldData_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsonFieldData_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsonFieldData_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonFieldData_NoRegister()
	{
		return UJsonFieldData::StaticClass();
	}
	struct Z_Construct_UClass_UJsonFieldData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGetResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonFieldData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JSONQuery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsonFieldData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsonFieldData_Create, "Create" }, // 3794208492
		{ &Z_Construct_UFunction_UJsonFieldData_FromFile, "FromFile" }, // 778398103
		{ &Z_Construct_UFunction_UJsonFieldData_FromString, "FromString" }, // 3244545555
		{ &Z_Construct_UFunction_UJsonFieldData_GetBool, "GetBool" }, // 1746287032
		{ &Z_Construct_UFunction_UJsonFieldData_GetBoolArray, "GetBoolArray" }, // 3907746267
		{ &Z_Construct_UFunction_UJsonFieldData_GetFloat, "GetFloat" }, // 2696893556
		{ &Z_Construct_UFunction_UJsonFieldData_GetFloatArray, "GetFloatArray" }, // 3800417962
		{ &Z_Construct_UFunction_UJsonFieldData_GetInt, "GetInt" }, // 1045542420
		{ &Z_Construct_UFunction_UJsonFieldData_GetIntArray, "GetIntArray" }, // 4100260656
		{ &Z_Construct_UFunction_UJsonFieldData_GetIsNull, "GetIsNull" }, // 577655008
		{ &Z_Construct_UFunction_UJsonFieldData_GetObject, "GetObject" }, // 1171853610
		{ &Z_Construct_UFunction_UJsonFieldData_GetObjectArray, "GetObjectArray" }, // 2324280623
		{ &Z_Construct_UFunction_UJsonFieldData_GetObjectKeys, "GetObjectKeys" }, // 3656049097
		{ &Z_Construct_UFunction_UJsonFieldData_GetRequest, "GetRequest" }, // 1065228048
		{ &Z_Construct_UFunction_UJsonFieldData_GetString, "GetString" }, // 576608555
		{ &Z_Construct_UFunction_UJsonFieldData_GetStringArray, "GetStringArray" }, // 2217703234
		{ &Z_Construct_UFunction_UJsonFieldData_HasField, "HasField" }, // 2471479237
		{ &Z_Construct_UFunction_UJsonFieldData_PostRequest, "PostRequest" }, // 3247376057
		{ &Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile, "PostRequestWithFile" }, // 1933924013
		{ &Z_Construct_UFunction_UJsonFieldData_SetBoolArray, "SetBoolArray" }, // 3691707196
		{ &Z_Construct_UFunction_UJsonFieldData_SetBoolean, "SetBoolean" }, // 170149501
		{ &Z_Construct_UFunction_UJsonFieldData_SetFloat, "SetFloat" }, // 4225838229
		{ &Z_Construct_UFunction_UJsonFieldData_SetFloatArray, "SetFloatArray" }, // 1751077199
		{ &Z_Construct_UFunction_UJsonFieldData_SetInt, "SetInt" }, // 3682253199
		{ &Z_Construct_UFunction_UJsonFieldData_SetIntArray, "SetIntArray" }, // 775410933
		{ &Z_Construct_UFunction_UJsonFieldData_SetNull, "SetNull" }, // 668945520
		{ &Z_Construct_UFunction_UJsonFieldData_SetNullArray, "SetNullArray" }, // 3551708575
		{ &Z_Construct_UFunction_UJsonFieldData_SetObject, "SetObject" }, // 1319031289
		{ &Z_Construct_UFunction_UJsonFieldData_SetObjectArray, "SetObjectArray" }, // 2652605767
		{ &Z_Construct_UFunction_UJsonFieldData_SetString, "SetString" }, // 3489806058
		{ &Z_Construct_UFunction_UJsonFieldData_SetStringArray, "SetStringArray" }, // 598110434
		{ &Z_Construct_UFunction_UJsonFieldData_ToString, "ToString" }, // 2337942054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonFieldData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "JSON" },
		{ "IncludePath", "JsonFieldData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult_MetaData[] = {
		{ "Category", "JSON" },
		{ "Comment", "/**\n\x09* Event which triggers after the request returned something. Check bSuccess to know if it worked.\n\x09* Check Status to know what happened on error.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/JsonFieldData.h" },
		{ "ToolTip", "Event which triggers after the request returned something. Check bSuccess to know if it worked.\nCheck Status to know what happened on error." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult = { "OnGetResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJsonFieldData, OnGetResult), Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonFieldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonFieldData_Statics::NewProp_OnGetResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonFieldData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonFieldData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonFieldData_Statics::ClassParams = {
		&UJsonFieldData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJsonFieldData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonFieldData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonFieldData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonFieldData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonFieldData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonFieldData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonFieldData, 734665715);
	template<> JSONQUERY_API UClass* StaticClass<UJsonFieldData>()
	{
		return UJsonFieldData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonFieldData(Z_Construct_UClass_UJsonFieldData, &UJsonFieldData::StaticClass, TEXT("/Script/JSONQuery"), TEXT("UJsonFieldData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonFieldData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
