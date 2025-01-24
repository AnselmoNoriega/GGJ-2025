// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ_2025/UI/UtilsUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilsUI() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
GGJ_2025_API UClass* Z_Construct_UClass_UUtilsUI();
GGJ_2025_API UClass* Z_Construct_UClass_UUtilsUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGJ_2025();
// End Cross Module References

// Begin Class UUtilsUI Function ChangeIndex
struct Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics
{
	struct UtilsUI_eventChangeIndex_Parms
	{
		int32 index;
		bool isAdding;
		int32 min;
		int32 max;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CompactNodeTitle", "Change Index" },
		{ "ModuleRelativePath", "UI/UtilsUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes Index, with min and max exclusives" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static void NewProp_isAdding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAdding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_min;
	static const UECodeGen_Private::FIntPropertyParams NewProp_max;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilsUI_eventChangeIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_isAdding_SetBit(void* Obj)
{
	((UtilsUI_eventChangeIndex_Parms*)Obj)->isAdding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_isAdding = { "isAdding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UtilsUI_eventChangeIndex_Parms), &Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_isAdding_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilsUI_eventChangeIndex_Parms, min), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilsUI_eventChangeIndex_Parms, max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilsUI_eventChangeIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_isAdding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilsUI, nullptr, "ChangeIndex", nullptr, nullptr, Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::UtilsUI_eventChangeIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::UtilsUI_eventChangeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtilsUI_ChangeIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtilsUI_ChangeIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtilsUI::execChangeIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_UBOOL(Z_Param_isAdding);
	P_GET_PROPERTY(FIntProperty,Z_Param_min);
	P_GET_PROPERTY(FIntProperty,Z_Param_max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUtilsUI::ChangeIndex(Z_Param_index,Z_Param_isAdding,Z_Param_min,Z_Param_max);
	P_NATIVE_END;
}
// End Class UUtilsUI Function ChangeIndex

// Begin Class UUtilsUI Function ChangeWindowMode
struct Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics
{
	struct UtilsUI_eventChangeWindowMode_Parms
	{
		TEnumAsByte<EWindowMode::Type> mode;
		bool isAdding;
		TEnumAsByte<EWindowMode::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CompactNodeTitle", "Change Window Mode" },
		{ "ModuleRelativePath", "UI/UtilsUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes Window Mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_mode;
	static void NewProp_isAdding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAdding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilsUI_eventChangeWindowMode_Parms, mode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(0, nullptr) }; // 3411615937
void Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_isAdding_SetBit(void* Obj)
{
	((UtilsUI_eventChangeWindowMode_Parms*)Obj)->isAdding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_isAdding = { "isAdding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UtilsUI_eventChangeWindowMode_Parms), &Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_isAdding_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilsUI_eventChangeWindowMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(0, nullptr) }; // 3411615937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_isAdding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilsUI, nullptr, "ChangeWindowMode", nullptr, nullptr, Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::UtilsUI_eventChangeWindowMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::UtilsUI_eventChangeWindowMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUtilsUI_ChangeWindowMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtilsUI_ChangeWindowMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUtilsUI::execChangeWindowMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_mode);
	P_GET_UBOOL(Z_Param_isAdding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=UUtilsUI::ChangeWindowMode(EWindowMode::Type(Z_Param_mode),Z_Param_isAdding);
	P_NATIVE_END;
}
// End Class UUtilsUI Function ChangeWindowMode

// Begin Class UUtilsUI
void UUtilsUI::StaticRegisterNativesUUtilsUI()
{
	UClass* Class = UUtilsUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeIndex", &UUtilsUI::execChangeIndex },
		{ "ChangeWindowMode", &UUtilsUI::execChangeWindowMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUtilsUI);
UClass* Z_Construct_UClass_UUtilsUI_NoRegister()
{
	return UUtilsUI::StaticClass();
}
struct Z_Construct_UClass_UUtilsUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/UtilsUI.h" },
		{ "ModuleRelativePath", "UI/UtilsUI.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtilsUI_ChangeIndex, "ChangeIndex" }, // 1385649047
		{ &Z_Construct_UFunction_UUtilsUI_ChangeWindowMode, "ChangeWindowMode" }, // 2505730550
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtilsUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUtilsUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ_2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUtilsUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUtilsUI_Statics::ClassParams = {
	&UUtilsUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUtilsUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UUtilsUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUtilsUI()
{
	if (!Z_Registration_Info_UClass_UUtilsUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUtilsUI.OuterSingleton, Z_Construct_UClass_UUtilsUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUtilsUI.OuterSingleton;
}
template<> GGJ_2025_API UClass* StaticClass<UUtilsUI>()
{
	return UUtilsUI::StaticClass();
}
UUtilsUI::UUtilsUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilsUI);
UUtilsUI::~UUtilsUI() {}
// End Class UUtilsUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_UI_UtilsUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUtilsUI, UUtilsUI::StaticClass, TEXT("UUtilsUI"), &Z_Registration_Info_UClass_UUtilsUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUtilsUI), 3675459447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_UI_UtilsUI_h_3311993658(TEXT("/Script/GGJ_2025"),
	Z_CompiledInDeferFile_FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_UI_UtilsUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_UI_UtilsUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
