// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyKey1.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef LAB06_MyKey1_generated_h
#error "MyKey1.generated.h already included, missing '#pragma once' in MyKey1.h"
#endif
#define LAB06_MyKey1_generated_h

#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyKey1(); \
	friend struct Z_Construct_UClass_AMyKey1_Statics; \
public: \
	DECLARE_CLASS(AMyKey1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab06"), NO_API) \
	DECLARE_SERIALIZER(AMyKey1)


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyKey1(AMyKey1&&); \
	AMyKey1(const AMyKey1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyKey1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyKey1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyKey1) \
	NO_API virtual ~AMyKey1();


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_11_PROLOG
#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB06_API UClass* StaticClass<class AMyKey1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKey1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
