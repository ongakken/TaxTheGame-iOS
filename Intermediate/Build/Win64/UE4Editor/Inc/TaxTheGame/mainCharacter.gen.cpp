// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TaxTheGame/Public/mainCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemainCharacter() {}
// Cross Module References
	TAXTHEGAME_API UClass* Z_Construct_UClass_AmainCharacter_NoRegister();
	TAXTHEGAME_API UClass* Z_Construct_UClass_AmainCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TaxTheGame();
// End Cross Module References
	void AmainCharacter::StaticRegisterNativesAmainCharacter()
	{
	}
	UClass* Z_Construct_UClass_AmainCharacter_NoRegister()
	{
		return AmainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AmainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TaxTheGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "mainCharacter.h" },
		{ "ModuleRelativePath", "Public/mainCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmainCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AmainCharacter_Statics::ClassParams = {
		&AmainCharacter::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AmainCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AmainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmainCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AmainCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AmainCharacter, 2174007800);
	template<> TAXTHEGAME_API UClass* StaticClass<AmainCharacter>()
	{
		return AmainCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AmainCharacter(Z_Construct_UClass_AmainCharacter, &AmainCharacter::StaticClass, TEXT("/Script/TaxTheGame"), TEXT("AmainCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmainCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
