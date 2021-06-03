// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoveData;
#ifdef CS_PRED_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define CS_PRED_MyPawn_generated_h

#define CS_Pred_Source_CS_Pred_MyPawn_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoveData_Statics; \
	CS_PRED_API static class UScriptStruct* StaticStruct();


template<> CS_PRED_API UScriptStruct* StaticStruct<struct FMoveData>();

#define CS_Pred_Source_CS_Pred_MyPawn_h_37_SPARSE_DATA
#define CS_Pred_Source_CS_Pred_MyPawn_h_37_RPC_WRAPPERS \
	virtual bool ReplicateOnClients_Validate(const FMoveData ); \
	virtual void ReplicateOnClients_Implementation(const FMoveData PackedBits); \
	virtual bool ClientMoveResponsePacked_Validate(float ); \
	virtual void ClientMoveResponsePacked_Implementation(float LastTick); \
	virtual bool ServerMovePacked_Validate(const FMoveData ); \
	virtual void ServerMovePacked_Implementation(const FMoveData PackedBits); \
 \
	DECLARE_FUNCTION(execReplicateOnClients); \
	DECLARE_FUNCTION(execClientMoveResponsePacked); \
	DECLARE_FUNCTION(execServerMovePacked);


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplicateOnClients); \
	DECLARE_FUNCTION(execClientMoveResponsePacked); \
	DECLARE_FUNCTION(execServerMovePacked);


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_EVENT_PARMS \
	struct MyPawn_eventClientMoveResponsePacked_Parms \
	{ \
		float LastTick; \
	}; \
	struct MyPawn_eventReplicateOnClients_Parms \
	{ \
		FMoveData PackedBits; \
	}; \
	struct MyPawn_eventServerMovePacked_Parms \
	{ \
		FMoveData PackedBits; \
	};


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_CALLBACK_WRAPPERS
#define CS_Pred_Source_CS_Pred_MyPawn_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CS_Pred"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CS_Pred"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(AMyPawn, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(AMyPawn, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(AMyPawn, BaseSpeed); }


#define CS_Pred_Source_CS_Pred_MyPawn_h_34_PROLOG \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_EVENT_PARMS


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_PRIVATE_PROPERTY_OFFSET \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_SPARSE_DATA \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_RPC_WRAPPERS \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_CALLBACK_WRAPPERS \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_INCLASS \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CS_Pred_Source_CS_Pred_MyPawn_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_PRIVATE_PROPERTY_OFFSET \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_SPARSE_DATA \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_CALLBACK_WRAPPERS \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_INCLASS_NO_PURE_DECLS \
	CS_Pred_Source_CS_Pred_MyPawn_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CS_PRED_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CS_Pred_Source_CS_Pred_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
