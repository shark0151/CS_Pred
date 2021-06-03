// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CS_PRED_CS_PredCharacter_generated_h
#error "CS_PredCharacter.generated.h already included, missing '#pragma once' in CS_PredCharacter.h"
#endif
#define CS_PRED_CS_PredCharacter_generated_h

#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_SPARSE_DATA
#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_RPC_WRAPPERS
#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACS_PredCharacter(); \
	friend struct Z_Construct_UClass_ACS_PredCharacter_Statics; \
public: \
	DECLARE_CLASS(ACS_PredCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CS_Pred"), NO_API) \
	DECLARE_SERIALIZER(ACS_PredCharacter)


#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACS_PredCharacter(); \
	friend struct Z_Construct_UClass_ACS_PredCharacter_Statics; \
public: \
	DECLARE_CLASS(ACS_PredCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CS_Pred"), NO_API) \
	DECLARE_SERIALIZER(ACS_PredCharacter)


#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACS_PredCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACS_PredCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACS_PredCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACS_PredCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACS_PredCharacter(ACS_PredCharacter&&); \
	NO_API ACS_PredCharacter(const ACS_PredCharacter&); \
public:


#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACS_PredCharacter(ACS_PredCharacter&&); \
	NO_API ACS_PredCharacter(const ACS_PredCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACS_PredCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACS_PredCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACS_PredCharacter)


#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACS_PredCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACS_PredCharacter, FollowCamera); }


#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_9_PROLOG
#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_SPARSE_DATA \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_RPC_WRAPPERS \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_INCLASS \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_SPARSE_DATA \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CS_Pred_Source_CS_Pred_CS_PredCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CS_PRED_API UClass* StaticClass<class ACS_PredCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CS_Pred_Source_CS_Pred_CS_PredCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
