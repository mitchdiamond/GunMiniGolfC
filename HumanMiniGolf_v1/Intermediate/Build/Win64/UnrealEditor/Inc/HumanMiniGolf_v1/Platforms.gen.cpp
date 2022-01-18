// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HumanMiniGolf_v1/Platforms.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatforms() {}
// Cross Module References
	HUMANMINIGOLF_V1_API UClass* Z_Construct_UClass_APlatforms_NoRegister();
	HUMANMINIGOLF_V1_API UClass* Z_Construct_UClass_APlatforms();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HumanMiniGolf_v1();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void APlatforms::StaticRegisterNativesAPlatforms()
	{
	}
	UClass* Z_Construct_UClass_APlatforms_NoRegister()
	{
		return APlatforms::StaticClass();
	}
	struct Z_Construct_UClass_APlatforms_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ghostMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ghostMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_solidMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_solidMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyBoxComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatforms_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HumanMiniGolf_v1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforms_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms.h" },
		{ "ModuleRelativePath", "Platforms.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforms_Statics::NewProp_ghostMat_MetaData[] = {
		{ "Category", "Mechanics" },
		{ "ModuleRelativePath", "Platforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatforms_Statics::NewProp_ghostMat = { "ghostMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatforms, ghostMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatforms_Statics::NewProp_ghostMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforms_Statics::NewProp_ghostMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforms_Statics::NewProp_solidMat_MetaData[] = {
		{ "Category", "Mechanics" },
		{ "ModuleRelativePath", "Platforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatforms_Statics::NewProp_solidMat = { "solidMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatforms, solidMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatforms_Statics::NewProp_solidMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforms_Statics::NewProp_solidMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforms_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "Mechanics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Platforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatforms_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatforms, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatforms_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforms_Statics::NewProp_MyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforms_Statics::NewProp_MyBoxComponent_MetaData[] = {
		{ "Category", "Platforms" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Platforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatforms_Statics::NewProp_MyBoxComponent = { "MyBoxComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatforms, MyBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatforms_Statics::NewProp_MyBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforms_Statics::NewProp_MyBoxComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatforms_Statics::NewProp_ghostMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatforms_Statics::NewProp_solidMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatforms_Statics::NewProp_MyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatforms_Statics::NewProp_MyBoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatforms_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatforms>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatforms_Statics::ClassParams = {
		&APlatforms::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatforms_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatforms_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatforms_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforms_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatforms()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatforms_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatforms, 3726904570);
	template<> HUMANMINIGOLF_V1_API UClass* StaticClass<APlatforms>()
	{
		return APlatforms::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatforms(Z_Construct_UClass_APlatforms, &APlatforms::StaticClass, TEXT("/Script/HumanMiniGolf_v1"), TEXT("APlatforms"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatforms);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
