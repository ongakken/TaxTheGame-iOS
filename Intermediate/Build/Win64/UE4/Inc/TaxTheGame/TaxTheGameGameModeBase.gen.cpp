// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaxTheGame/TaxTheGameGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaxTheGameGameModeBase() {}
// Cross Module References
	TAXTHEGAME_API UClass* Z_Construct_UClass_ATaxTheGameGameModeBase_NoRegister();
	TAXTHEGAME_API UClass* Z_Construct_UClass_ATaxTheGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TaxTheGame();
// End Cross Module References
	void ATaxTheGameGameModeBase::StaticRegisterNativesATaxTheGameGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATaxTheGameGameModeBase_NoRegister()
	{
		return ATaxTheGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATaxTheGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATaxTheGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TaxTheGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATaxTheGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TaxTheGameGameModeBase.h" },
		{ "ModuleRelativePath", "TaxTheGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATaxTheGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATaxTheGameGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATaxTheGameGameModeBase_Statics::ClassParams = {
		&ATaxTheGameGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATaxTheGameGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATaxTheGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATaxTheGameGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATaxTheGameGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATaxTheGameGameModeBase, 3129926111);
	template<> TAXTHEGAME_API UClass* StaticClass<ATaxTheGameGameModeBase>()
	{
		return ATaxTheGameGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATaxTheGameGameModeBase(Z_Construct_UClass_ATaxTheGameGameModeBase, &ATaxTheGameGameModeBase::StaticClass, TEXT("/Script/TaxTheGame"), TEXT("ATaxTheGameGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATaxTheGameGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
