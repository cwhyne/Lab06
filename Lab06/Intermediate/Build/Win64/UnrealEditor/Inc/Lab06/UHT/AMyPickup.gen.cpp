// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab06/AMyPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyPickup() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LAB06_API UClass* Z_Construct_UClass_AAMyPickup();
LAB06_API UClass* Z_Construct_UClass_AAMyPickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab06();
// End Cross Module References

// Begin Class AAMyPickup
void AAMyPickup::StaticRegisterNativesAAMyPickup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAMyPickup);
UClass* Z_Construct_UClass_AAMyPickup_NoRegister()
{
	return AAMyPickup::StaticClass();
}
struct Z_Construct_UClass_AAMyPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AMyPickup.h" },
		{ "ModuleRelativePath", "AMyPickup.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAMyPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMyPickup_Statics::ClassParams = {
	&AAMyPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMyPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMyPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAMyPickup()
{
	if (!Z_Registration_Info_UClass_AAMyPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMyPickup.OuterSingleton, Z_Construct_UClass_AAMyPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAMyPickup.OuterSingleton;
}
template<> LAB06_API UClass* StaticClass<AAMyPickup>()
{
	return AAMyPickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyPickup);
AAMyPickup::~AAMyPickup() {}
// End Class AAMyPickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyPickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAMyPickup, AAMyPickup::StaticClass, TEXT("AAMyPickup"), &Z_Registration_Info_UClass_AAMyPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMyPickup), 1124450052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyPickup_h_361711296(TEXT("/Script/Lab06"),
	Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_AMyPickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
