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
#ifdef GUNMINIGOLFCODED_GunMiniGolfCodedProjectile_generated_h
#error "GunMiniGolfCodedProjectile.generated.h already included, missing '#pragma once' in GunMiniGolfCodedProjectile.h"
#endif
#define GUNMINIGOLFCODED_GunMiniGolfCodedProjectile_generated_h

#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_SPARSE_DATA
#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunMiniGolfCodedProjectile(); \
	friend struct Z_Construct_UClass_AGunMiniGolfCodedProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunMiniGolfCodedProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunMiniGolfCoded"), NO_API) \
	DECLARE_SERIALIZER(AGunMiniGolfCodedProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGunMiniGolfCodedProjectile(); \
	friend struct Z_Construct_UClass_AGunMiniGolfCodedProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunMiniGolfCodedProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunMiniGolfCoded"), NO_API) \
	DECLARE_SERIALIZER(AGunMiniGolfCodedProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunMiniGolfCodedProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunMiniGolfCodedProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunMiniGolfCodedProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunMiniGolfCodedProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunMiniGolfCodedProjectile(AGunMiniGolfCodedProjectile&&); \
	NO_API AGunMiniGolfCodedProjectile(const AGunMiniGolfCodedProjectile&); \
public:


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunMiniGolfCodedProjectile(AGunMiniGolfCodedProjectile&&); \
	NO_API AGunMiniGolfCodedProjectile(const AGunMiniGolfCodedProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunMiniGolfCodedProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunMiniGolfCodedProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunMiniGolfCodedProjectile)


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGunMiniGolfCodedProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGunMiniGolfCodedProjectile, ProjectileMovement); }


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_12_PROLOG
#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_SPARSE_DATA \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_RPC_WRAPPERS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_INCLASS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_SPARSE_DATA \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_INCLASS_NO_PURE_DECLS \
	GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNMINIGOLFCODED_API UClass* StaticClass<class AGunMiniGolfCodedProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunMiniGolfCoded_Source_GunMiniGolfCoded_GunMiniGolfCodedProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
