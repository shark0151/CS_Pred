// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CS_Pred/MyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}
// Cross Module References
	CS_PRED_API UScriptStruct* Z_Construct_UScriptStruct_FMoveData();
	UPackage* Z_Construct_UPackage__Script_CS_Pred();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	CS_PRED_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	CS_PRED_API UClass* Z_Construct_UClass_AMyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
// End Cross Module References
class UScriptStruct* FMoveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CS_PRED_API uint32 Get_Z_Construct_UScriptStruct_FMoveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveData, Z_Construct_UPackage__Script_CS_Pred(), TEXT("MoveData"), sizeof(FMoveData), Get_Z_Construct_UScriptStruct_FMoveData_Hash());
	}
	return Singleton;
}
template<> CS_PRED_API UScriptStruct* StaticStruct<FMoveData>()
{
	return FMoveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoveData(FMoveData::StaticStruct, TEXT("/Script/CS_Pred"), TEXT("MoveData"), false, nullptr, nullptr);
static struct FScriptStruct_CS_Pred_StaticRegisterNativesFMoveData
{
	FScriptStruct_CS_Pred_StaticRegisterNativesFMoveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoveData")),new UScriptStruct::TCppStructOps<FMoveData>);
	}
} ScriptStruct_CS_Pred_StaticRegisterNativesFMoveData;
	struct Z_Construct_UScriptStruct_FMoveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_TimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Velocity), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, Input), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_ControllRotation_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_ControllRotation = { "ControllRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveData, ControllRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_ControllRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_ControllRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_TimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveData_Statics::NewProp_ControllRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CS_Pred,
		nullptr,
		&NewStructOps,
		"MoveData",
		sizeof(FMoveData),
		alignof(FMoveData),
		Z_Construct_UScriptStruct_FMoveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CS_Pred();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoveData"), sizeof(FMoveData), Get_Z_Construct_UScriptStruct_FMoveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoveData_Hash() { return 146900344U; }
	DEFINE_FUNCTION(AMyPawn::execReplicateOnClients)
	{
		P_GET_STRUCT(FMoveData,Z_Param_PackedBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ReplicateOnClients_Validate(Z_Param_PackedBits))
		{
			RPC_ValidateFailed(TEXT("ReplicateOnClients_Validate"));
			return;
		}
		P_THIS->ReplicateOnClients_Implementation(Z_Param_PackedBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execClientMoveResponsePacked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LastTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientMoveResponsePacked_Validate(Z_Param_LastTick))
		{
			RPC_ValidateFailed(TEXT("ClientMoveResponsePacked_Validate"));
			return;
		}
		P_THIS->ClientMoveResponsePacked_Implementation(Z_Param_LastTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn::execServerMovePacked)
	{
		P_GET_STRUCT(FMoveData,Z_Param_PackedBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMovePacked_Validate(Z_Param_PackedBits))
		{
			RPC_ValidateFailed(TEXT("ServerMovePacked_Validate"));
			return;
		}
		P_THIS->ServerMovePacked_Implementation(Z_Param_PackedBits);
		P_NATIVE_END;
	}
	static FName NAME_AMyPawn_ClientMoveResponsePacked = FName(TEXT("ClientMoveResponsePacked"));
	void AMyPawn::ClientMoveResponsePacked(float LastTick)
	{
		MyPawn_eventClientMoveResponsePacked_Parms Parms;
		Parms.LastTick=LastTick;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_ClientMoveResponsePacked),&Parms);
	}
	static FName NAME_AMyPawn_ReplicateOnClients = FName(TEXT("ReplicateOnClients"));
	void AMyPawn::ReplicateOnClients(const FMoveData PackedBits)
	{
		MyPawn_eventReplicateOnClients_Parms Parms;
		Parms.PackedBits=PackedBits;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_ReplicateOnClients),&Parms);
	}
	static FName NAME_AMyPawn_ServerMovePacked = FName(TEXT("ServerMovePacked"));
	void AMyPawn::ServerMovePacked(const FMoveData PackedBits)
	{
		MyPawn_eventServerMovePacked_Parms Parms;
		Parms.PackedBits=PackedBits;
		ProcessEvent(FindFunctionChecked(NAME_AMyPawn_ServerMovePacked),&Parms);
	}
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
		UClass* Class = AMyPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientMoveResponsePacked", &AMyPawn::execClientMoveResponsePacked },
			{ "ReplicateOnClients", &AMyPawn::execReplicateOnClients },
			{ "ServerMovePacked", &AMyPawn::execServerMovePacked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::NewProp_LastTick = { "LastTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventClientMoveResponsePacked_Parms, LastTick), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::NewProp_LastTick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "ClientMoveResponsePacked", nullptr, nullptr, sizeof(MyPawn_eventClientMoveResponsePacked_Parms), Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81080C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackedBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::NewProp_PackedBits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::NewProp_PackedBits = { "PackedBits", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventReplicateOnClients_Parms, PackedBits), Z_Construct_UScriptStruct_FMoveData, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::NewProp_PackedBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::NewProp_PackedBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::NewProp_PackedBits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "ReplicateOnClients", nullptr, nullptr, sizeof(MyPawn_eventReplicateOnClients_Parms), Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_ReplicateOnClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_ReplicateOnClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackedBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::NewProp_PackedBits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::NewProp_PackedBits = { "PackedBits", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPawn_eventServerMovePacked_Parms, PackedBits), Z_Construct_UScriptStruct_FMoveData, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::NewProp_PackedBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::NewProp_PackedBits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::NewProp_PackedBits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "ServerMovePacked", nullptr, nullptr, sizeof(MyPawn_eventServerMovePacked_Parms), Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPawn_ServerMovePacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPawn_ServerMovePacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CS_Pred,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_ClientMoveResponsePacked, "ClientMoveResponsePacked" }, // 1398109250
		{ &Z_Construct_UFunction_AMyPawn_ReplicateOnClients, "ReplicateOnClients" }, // 3055461833
		{ &Z_Construct_UFunction_AMyPawn_ServerMovePacked, "ServerMovePacked" }, // 2292317120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MyPawn.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPawn, BaseSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_BaseSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
		&AMyPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawn, 1641524116);
	template<> CS_PRED_API UClass* StaticClass<AMyPawn>()
	{
		return AMyPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("/Script/CS_Pred"), TEXT("AMyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
