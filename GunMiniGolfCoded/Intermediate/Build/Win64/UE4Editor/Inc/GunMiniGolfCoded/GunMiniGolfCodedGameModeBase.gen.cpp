// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunMiniGolfCoded/GunMiniGolfCodedGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunMiniGolfCodedGameModeBase() {}
// Cross Module References
	GUNMINIGOLFCODED_API UClass* Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_NoRegister();
	GUNMINIGOLFCODED_API UClass* Z_Construct_UClass_AGunMiniGolfCodedGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GunMiniGolfCoded();
// End Cross Module References
	void AGunMiniGolfCodedGameModeBase::StaticRegisterNativesAGunMiniGolfCodedGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_NoRegister()
	{
		return AGunMiniGolfCodedGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GunMiniGolfCoded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GunMiniGolfCodedGameModeBase.h" },
		{ "ModuleRelativePath", "GunMiniGolfCodedGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunMiniGolfCodedGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics::ClassParams = {
		&AGunMiniGolfCodedGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunMiniGolfCodedGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunMiniGolfCodedGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunMiniGolfCodedGameModeBase, 2655659174);
	template<> GUNMINIGOLFCODED_API UClass* StaticClass<AGunMiniGolfCodedGameModeBase>()
	{
		return AGunMiniGolfCodedGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunMiniGolfCodedGameModeBase(Z_Construct_UClass_AGunMiniGolfCodedGameModeBase, &AGunMiniGolfCodedGameModeBase::StaticClass, TEXT("/Script/GunMiniGolfCoded"), TEXT("AGunMiniGolfCodedGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunMiniGolfCodedGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
