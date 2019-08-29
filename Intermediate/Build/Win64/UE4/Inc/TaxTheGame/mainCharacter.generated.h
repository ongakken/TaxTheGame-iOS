// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TAXTHEGAME_mainCharacter_generated_h
#error "mainCharacter.generated.h already included, missing '#pragma once' in mainCharacter.h"
#endif
#define TAXTHEGAME_mainCharacter_generated_h

#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_RPC_WRAPPERS
#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmainCharacter(); \
	friend struct Z_Construct_UClass_AmainCharacter_Statics; \
public: \
	DECLARE_CLASS(AmainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TaxTheGame"), NO_API) \
	DECLARE_SERIALIZER(AmainCharacter)


#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAmainCharacter(); \
	friend struct Z_Construct_UClass_AmainCharacter_Statics; \
public: \
	DECLARE_CLASS(AmainCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TaxTheGame"), NO_API) \
	DECLARE_SERIALIZER(AmainCharacter)


#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AmainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AmainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmainCharacter(AmainCharacter&&); \
	NO_API AmainCharacter(const AmainCharacter&); \
public:


#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AmainCharacter(AmainCharacter&&); \
	NO_API AmainCharacter(const AmainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmainCharacter)


#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_10_PROLOG
#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_RPC_WRAPPERS \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_INCLASS \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_INCLASS_NO_PURE_DECLS \
	TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAXTHEGAME_API UClass* StaticClass<class AmainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TaxTheGame_Source_TaxTheGame_Public_mainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
