// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab06/AMyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
LAB06_API UClass* Z_Construct_UClass_AAMyCharacter();
LAB06_API UClass* Z_Construct_UClass_AAMyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab06();
// End Cross Module References

// Begin Class AAMyCharacter
void AAMyCharacter::StaticRegisterNativesAAMyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAMyCharacter);
UClass* Z_Construct_UClass_AAMyCharacter_NoRegister()
{
	return AAMyCharacter::StaticClass();
}
struct Z_Construct_UClass_AAMyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AMyCharacter.h" },
		{ "ModuleRelativePath", "AMyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AMyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "AMyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAMyCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMyCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAMyCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAMyCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAMyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAMyCharacter_Statics::NewProp_SprintSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAMyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMyCharacter_Statics::ClassParams = {
	&AAMyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAMyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAMyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAMyCharacter()
{
	if (!Z_Registration_Info_UClass_AAMyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMyCharacter.OuterSingleton, Z_Construct_UClass_AAMyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAMyCharacter.OuterSingleton;
}
template<> LAB06_API UClass* StaticClass<AAMyCharacter>()
{
	return AAMyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyCharacter);
AAMyCharacter::~AAMyCharacter() {}
// End Class AAMyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAMyCharacter, AAMyCharacter::StaticClass, TEXT("AAMyCharacter"), &Z_Registration_Info_UClass_AAMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMyCharacter), 1517787642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_1657064623(TEXT("/Script/Lab06"),
	Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
