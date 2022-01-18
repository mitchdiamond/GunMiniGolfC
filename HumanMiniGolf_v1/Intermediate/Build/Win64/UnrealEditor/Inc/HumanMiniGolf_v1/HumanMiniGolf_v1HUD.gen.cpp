// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HumanMiniGolf_v1/HumanMiniGolf_v1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHumanMiniGolf_v1HUD() {}
// Cross Module References
	HUMANMINIGOLF_V1_API UClass* Z_Construct_UClass_AHumanMiniGolf_v1HUD_NoRegister();
	HUMANMINIGOLF_V1_API UClass* Z_Construct_UClass_AHumanMiniGolf_v1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HumanMiniGolf_v1();
// End Cross Module References
	void AHumanMiniGolf_v1HUD::StaticRegisterNativesAHumanMiniGolf_v1HUD()
	{
	}
	UClass* Z_Construct_UClass_AHumanMiniGolf_v1HUD_NoRegister()
	{
		return AHumanMiniGolf_v1HUD::StaticClass();
	}
	struct Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HumanMiniGolf_v1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HumanMiniGolf_v1HUD.h" },
		{ "ModuleRelativePath", "HumanMiniGolf_v1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumanMiniGolf_v1HUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics::ClassParams = {
		&AHumanMiniGolf_v1HUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHumanMiniGolf_v1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHumanMiniGolf_v1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHumanMiniGolf_v1HUD, 4005318279);
	template<> HUMANMINIGOLF_V1_API UClass* StaticClass<AHumanMiniGolf_v1HUD>()
	{
		return AHumanMiniGolf_v1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHumanMiniGolf_v1HUD(Z_Construct_UClass_AHumanMiniGolf_v1HUD, &AHumanMiniGolf_v1HUD::StaticClass, TEXT("/Script/HumanMiniGolf_v1"), TEXT("AHumanMiniGolf_v1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHumanMiniGolf_v1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
