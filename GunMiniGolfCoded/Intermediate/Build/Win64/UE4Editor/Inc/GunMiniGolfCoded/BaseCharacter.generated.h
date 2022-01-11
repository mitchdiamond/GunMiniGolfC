// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNMINIGOLFCODED_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define GUNMINIGOLFCODED_BaseCharacter_generated_h

#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_SPARSE_DATA
#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_RPC_WRAPPERS
#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunMiniGolfCoded"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunMiniGolfCoded"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ABaseCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ABaseCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ABaseCharacter, FP_MuzzleLocation); }


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_19_PROLOG
#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_SPARSE_DATA \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_RPC_WRAPPERS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_INCLASS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_SPARSE_DATA \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_INCLASS_NO_PURE_DECLS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNMINIGOLFCODED_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunMiniGolfCoded_Source_GunMiniGolfCoded_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
