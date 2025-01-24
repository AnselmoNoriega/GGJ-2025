// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ_2025_init() {}
	GGJ_2025_API UFunction* Z_Construct_UDelegateFunction_GGJ_2025_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GGJ_2025;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GGJ_2025()
	{
		if (!Z_Registration_Info_UPackage__Script_GGJ_2025.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GGJ_2025_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GGJ_2025",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2C1905A6,
				0x2B41500F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GGJ_2025.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GGJ_2025.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GGJ_2025(Z_Construct_UPackage__Script_GGJ_2025, TEXT("/Script/GGJ_2025"), Z_Registration_Info_UPackage__Script_GGJ_2025, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2C1905A6, 0x2B41500F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
