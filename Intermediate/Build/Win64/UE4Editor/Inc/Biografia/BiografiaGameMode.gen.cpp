// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Biografia/BiografiaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiografiaGameMode() {}
// Cross Module References
	BIOGRAFIA_API UClass* Z_Construct_UClass_ABiografiaGameMode_NoRegister();
	BIOGRAFIA_API UClass* Z_Construct_UClass_ABiografiaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Biografia();
// End Cross Module References
	void ABiografiaGameMode::StaticRegisterNativesABiografiaGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABiografiaGameMode_NoRegister()
	{
		return ABiografiaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABiografiaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABiografiaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Biografia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABiografiaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BiografiaGameMode.h" },
		{ "ModuleRelativePath", "BiografiaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABiografiaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABiografiaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABiografiaGameMode_Statics::ClassParams = {
		&ABiografiaGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABiografiaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABiografiaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABiografiaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABiografiaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABiografiaGameMode, 2785353361);
	template<> BIOGRAFIA_API UClass* StaticClass<ABiografiaGameMode>()
	{
		return ABiografiaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABiografiaGameMode(Z_Construct_UClass_ABiografiaGameMode, &ABiografiaGameMode::StaticClass, TEXT("/Script/Biografia"), TEXT("ABiografiaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABiografiaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
