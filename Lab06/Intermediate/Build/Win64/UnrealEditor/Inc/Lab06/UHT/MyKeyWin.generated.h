// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyKeyWin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef LAB06_MyKeyWin_generated_h
#error "MyKeyWin.generated.h already included, missing '#pragma once' in MyKeyWin.h"
#endif
#define LAB06_MyKeyWin_generated_h

#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyKeyWin(); \
	friend struct Z_Construct_UClass_AMyKeyWin_Statics; \
public: \
	DECLARE_CLASS(AMyKeyWin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab06"), NO_API) \
	DECLARE_SERIALIZER(AMyKeyWin)


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyKeyWin(AMyKeyWin&&); \
	AMyKeyWin(const AMyKeyWin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyKeyWin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyKeyWin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyKeyWin) \
	NO_API virtual ~AMyKeyWin();


#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_11_PROLOG
#define FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB06_API UClass* StaticClass<class AMyKeyWin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyKeyWin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
