// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab06/MyUserWidget2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUserWidget2() {}

// Begin Cross Module References
LAB06_API UClass* Z_Construct_UClass_UMyUserWidget2();
LAB06_API UClass* Z_Construct_UClass_UMyUserWidget2_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Lab06();
// End Cross Module References

// Begin Class UMyUserWidget2 Function ChangeText
struct Z_Construct_UFunction_UMyUserWidget2_ChangeText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//change text function\n" },
#endif
		{ "ModuleRelativePath", "MyUserWidget2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "change text function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyUserWidget2_ChangeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyUserWidget2, nullptr, "ChangeText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyUserWidget2_ChangeText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyUserWidget2_ChangeText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyUserWidget2_ChangeText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyUserWidget2_ChangeText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyUserWidget2::execChangeText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeText();
	P_NATIVE_END;
}
// End Class UMyUserWidget2 Function ChangeText

// Begin Class UMyUserWidget2
void UMyUserWidget2::StaticRegisterNativesUMyUserWidget2()
{
	UClass* Class = UMyUserWidget2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeText", &UMyUserWidget2::execChangeText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyUserWidget2);
UClass* Z_Construct_UClass_UMyUserWidget2_NoRegister()
{
	return UMyUserWidget2::StaticClass();
}
struct Z_Construct_UClass_UMyUserWidget2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyUserWidget2.h" },
		{ "ModuleRelativePath", "MyUserWidget2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_keyText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//text property\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyUserWidget2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "text property" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_keyText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyUserWidget2_ChangeText, "ChangeText" }, // 662504227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyUserWidget2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyUserWidget2_Statics::NewProp_keyText = { "keyText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyUserWidget2, keyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_keyText_MetaData), NewProp_keyText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyUserWidget2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyUserWidget2_Statics::NewProp_keyText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyUserWidget2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Lab06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyUserWidget2_Statics::ClassParams = {
	&UMyUserWidget2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyUserWidget2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget2_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyUserWidget2_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyUserWidget2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyUserWidget2()
{
	if (!Z_Registration_Info_UClass_UMyUserWidget2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyUserWidget2.OuterSingleton, Z_Construct_UClass_UMyUserWidget2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyUserWidget2.OuterSingleton;
}
template<> LAB06_API UClass* StaticClass<UMyUserWidget2>()
{
	return UMyUserWidget2::StaticClass();
}
UMyUserWidget2::UMyUserWidget2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyUserWidget2);
UMyUserWidget2::~UMyUserWidget2() {}
// End Class UMyUserWidget2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyUserWidget2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyUserWidget2, UMyUserWidget2::StaticClass, TEXT("UMyUserWidget2"), &Z_Registration_Info_UClass_UMyUserWidget2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyUserWidget2), 2053107879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyUserWidget2_h_4168210446(TEXT("/Script/Lab06"),
	Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyUserWidget2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cdw26_Documents_GitHub_Lab06_Lab06_Source_Lab06_MyUserWidget2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
