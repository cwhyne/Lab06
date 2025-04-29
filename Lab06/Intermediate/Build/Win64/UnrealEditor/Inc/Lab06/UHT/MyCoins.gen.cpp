// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab06/MyCoins.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCoins() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LAB06_API UClass* Z_Construct_UClass_AMyCoins();
LAB06_API UClass* Z_Construct_UClass_AMyCoins_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab06();
// End Cross Module References

// Begin Class AMyCoins
void AMyCoins::StaticRegisterNativesAMyCoins()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCoins);
UClass* Z_Construct_UClass_AMyCoins_NoRegister()
{
	return AMyCoins::StaticClass();
}
struct Z_Construct_UClass_AMyCoins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCoins.h" },
		{ "ModuleRelativePath", "MyCoins.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCoins>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCoins_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCoins_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCoins_Statics::ClassParams = {
	&AMyCoins::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCoins_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCoins_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCoins()
{
	if (!Z_Registration_Info_UClass_AMyCoins.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCoins.OuterSingleton, Z_Construct_UClass_AMyCoins_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCoins.OuterSingleton;
}
template<> LAB06_API UClass* StaticClass<AMyCoins>()
{
	return AMyCoins::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCoins);
AMyCoins::~AMyCoins() {}
// End Class AMyCoins

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyCoins_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCoins, AMyCoins::StaticClass, TEXT("AMyCoins"), &Z_Registration_Info_UClass_AMyCoins, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCoins), 4255662641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyCoins_h_3786123105(TEXT("/Script/Lab06"),
	Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyCoins_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyCoins_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
