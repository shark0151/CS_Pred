// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CS_Pred/CS_PredGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCS_PredGameMode() {}
// Cross Module References
	CS_PRED_API UClass* Z_Construct_UClass_ACS_PredGameMode_NoRegister();
	CS_PRED_API UClass* Z_Construct_UClass_ACS_PredGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CS_Pred();
// End Cross Module References
	void ACS_PredGameMode::StaticRegisterNativesACS_PredGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACS_PredGameMode_NoRegister()
	{
		return ACS_PredGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACS_PredGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACS_PredGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CS_Pred,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACS_PredGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CS_PredGameMode.h" },
		{ "ModuleRelativePath", "CS_PredGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACS_PredGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACS_PredGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACS_PredGameMode_Statics::ClassParams = {
		&ACS_PredGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACS_PredGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACS_PredGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACS_PredGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACS_PredGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACS_PredGameMode, 1856677233);
	template<> CS_PRED_API UClass* StaticClass<ACS_PredGameMode>()
	{
		return ACS_PredGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACS_PredGameMode(Z_Construct_UClass_ACS_PredGameMode, &ACS_PredGameMode::StaticClass, TEXT("/Script/CS_Pred"), TEXT("ACS_PredGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACS_PredGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
