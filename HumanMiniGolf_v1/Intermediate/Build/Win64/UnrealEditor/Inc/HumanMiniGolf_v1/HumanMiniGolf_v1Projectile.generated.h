// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef HUMANMINIGOLF_V1_HumanMiniGolf_v1Projectile_generated_h
#error "HumanMiniGolf_v1Projectile.generated.h already included, missing '#pragma once' in HumanMiniGolf_v1Projectile.h"
#endif
#define HUMANMINIGOLF_V1_HumanMiniGolf_v1Projectile_generated_h

#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_SPARSE_DATA
#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHumanMiniGolf_v1Projectile(); \
	friend struct Z_Construct_UClass_AHumanMiniGolf_v1Projectile_Statics; \
public: \
	DECLARE_CLASS(AHumanMiniGolf_v1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HumanMiniGolf_v1"), NO_API) \
	DECLARE_SERIALIZER(AHumanMiniGolf_v1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHumanMiniGolf_v1Projectile(); \
	friend struct Z_Construct_UClass_AHumanMiniGolf_v1Projectile_Statics; \
public: \
	DECLARE_CLASS(AHumanMiniGolf_v1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HumanMiniGolf_v1"), NO_API) \
	DECLARE_SERIALIZER(AHumanMiniGolf_v1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHumanMiniGolf_v1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHumanMiniGolf_v1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHumanMiniGolf_v1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHumanMiniGolf_v1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHumanMiniGolf_v1Projectile(AHumanMiniGolf_v1Projectile&&); \
	NO_API AHumanMiniGolf_v1Projectile(const AHumanMiniGolf_v1Projectile&); \
public:


#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHumanMiniGolf_v1Projectile(AHumanMiniGolf_v1Projectile&&); \
	NO_API AHumanMiniGolf_v1Projectile(const AHumanMiniGolf_v1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHumanMiniGolf_v1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHumanMiniGolf_v1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHumanMiniGolf_v1Projectile)


#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AHumanMiniGolf_v1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AHumanMiniGolf_v1Projectile, ProjectileMovement); }


#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_12_PROLOG
#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_SPARSE_DATA \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_RPC_WRAPPERS \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_INCLASS \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_SPARSE_DATA \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HUMANMINIGOLF_V1_API UClass* StaticClass<class AHumanMiniGolf_v1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HumanMiniGolf_v1_Source_HumanMiniGolf_v1_HumanMiniGolf_v1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
