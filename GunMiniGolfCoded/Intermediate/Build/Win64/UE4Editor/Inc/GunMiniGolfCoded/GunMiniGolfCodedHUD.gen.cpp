// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunMiniGolfCoded/GunMiniGolfCodedHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunMiniGolfCodedHUD() {}
// Cross Module References
	GUNMINIGOLFCODED_API UClass* Z_Construct_UClass_AGunMiniGolfCodedHUD_NoRegister();
	GUNMINIGOLFCODED_API UClass* Z_Construct_UClass_AGunMiniGolfCodedHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GunMiniGolfCoded();
// End Cross Module References
	void AGunMiniGolfCodedHUD::StaticRegisterNativesAGunMiniGolfCodedHUD()
	{
	}
	UClass* Z_Construct_UClass_AGunMiniGolfCodedHUD_NoRegister()
	{
		return AGunMiniGolfCodedHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GunMiniGolfCoded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GunMiniGolfCodedHUD.h" },
		{ "ModuleRelativePath", "GunMiniGolfCodedHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunMiniGolfCodedHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics::ClassParams = {
		&AGunMiniGolfCodedHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunMiniGolfCodedHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunMiniGolfCodedHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunMiniGolfCodedHUD, 370530490);
	template<> GUNMINIGOLFCODED_API UClass* StaticClass<AGunMiniGolfCodedHUD>()
	{
		return AGunMiniGolfCodedHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunMiniGolfCodedHUD(Z_Construct_UClass_AGunMiniGolfCodedHUD, &AGunMiniGolfCodedHUD::StaticClass, TEXT("/Script/GunMiniGolfCoded"), TEXT("AGunMiniGolfCodedHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunMiniGolfCodedHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
