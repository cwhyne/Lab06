// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab06/MyTreasure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTreasure() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LAB06_API UClass* Z_Construct_UClass_AMyTreasure();
LAB06_API UClass* Z_Construct_UClass_AMyTreasure_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab06();
// End Cross Module References

// Begin Class AMyTreasure
void AMyTreasure::StaticRegisterNativesAMyTreasure()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTreasure);
UClass* Z_Construct_UClass_AMyTreasure_NoRegister()
{
	return AMyTreasure::StaticClass();
}
struct Z_Construct_UClass_AMyTreasure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyTreasure.h" },
		{ "ModuleRelativePath", "MyTreasure.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTreasure>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyTreasure_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTreasure_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTreasure_Statics::ClassParams = {
	&AMyTreasure::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTreasure_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTreasure_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTreasure()
{
	if (!Z_Registration_Info_UClass_AMyTreasure.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTreasure.OuterSingleton, Z_Construct_UClass_AMyTreasure_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTreasure.OuterSingleton;
}
template<> LAB06_API UClass* StaticClass<AMyTreasure>()
{
	return AMyTreasure::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTreasure);
AMyTreasure::~AMyTreasure() {}
// End Class AMyTreasure

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyTreasure_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTreasure, AMyTreasure::StaticClass, TEXT("AMyTreasure"), &Z_Registration_Info_UClass_AMyTreasure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTreasure), 855317439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyTreasure_h_3551078241(TEXT("/Script/Lab06"),
	Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyTreasure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyTreasure_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
