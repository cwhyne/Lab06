// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab06/Lab06GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLab06GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LAB06_API UClass* Z_Construct_UClass_ALab06GameMode();
LAB06_API UClass* Z_Construct_UClass_ALab06GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lab06();
// End Cross Module References

// Begin Class ALab06GameMode
void ALab06GameMode::StaticRegisterNativesALab06GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALab06GameMode);
UClass* Z_Construct_UClass_ALab06GameMode_NoRegister()
{
	return ALab06GameMode::StaticClass();
}
struct Z_Construct_UClass_ALab06GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lab06GameMode.h" },
		{ "ModuleRelativePath", "Lab06GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab06GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALab06GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALab06GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALab06GameMode_Statics::ClassParams = {
	&ALab06GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALab06GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALab06GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALab06GameMode()
{
	if (!Z_Registration_Info_UClass_ALab06GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALab06GameMode.OuterSingleton, Z_Construct_UClass_ALab06GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALab06GameMode.OuterSingleton;
}
template<> LAB06_API UClass* StaticClass<ALab06GameMode>()
{
	return ALab06GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALab06GameMode);
ALab06GameMode::~ALab06GameMode() {}
// End Class ALab06GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_Lab06GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALab06GameMode, ALab06GameMode::StaticClass, TEXT("ALab06GameMode"), &Z_Registration_Info_UClass_ALab06GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALab06GameMode), 642453008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_Lab06GameMode_h_1194351432(TEXT("/Script/Lab06"),
	Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_Lab06GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_Lab06GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
