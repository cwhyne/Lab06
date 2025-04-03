// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AMyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB06_AMyCharacter_generated_h
#error "AMyCharacter.generated.h already included, missing '#pragma once' in AMyCharacter.h"
#endif
#define LAB06_AMyCharacter_generated_h

#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAMyCharacter(); \
	friend struct Z_Construct_UClass_AAMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AAMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab06"), NO_API) \
	DECLARE_SERIALIZER(AAMyCharacter)


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAMyCharacter(AAMyCharacter&&); \
	AAMyCharacter(const AAMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAMyCharacter) \
	NO_API virtual ~AAMyCharacter();


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_9_PROLOG
#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB06_API UClass* StaticClass<class AAMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
