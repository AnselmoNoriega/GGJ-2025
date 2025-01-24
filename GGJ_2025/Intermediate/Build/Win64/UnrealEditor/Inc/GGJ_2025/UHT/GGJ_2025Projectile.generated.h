// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GGJ_2025Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GGJ_2025_GGJ_2025Projectile_generated_h
#error "GGJ_2025Projectile.generated.h already included, missing '#pragma once' in GGJ_2025Projectile.h"
#endif
#define GGJ_2025_GGJ_2025Projectile_generated_h

#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGGJ_2025Projectile(); \
	friend struct Z_Construct_UClass_AGGJ_2025Projectile_Statics; \
public: \
	DECLARE_CLASS(AGGJ_2025Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ_2025"), NO_API) \
	DECLARE_SERIALIZER(AGGJ_2025Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGGJ_2025Projectile(AGGJ_2025Projectile&&); \
	AGGJ_2025Projectile(const AGGJ_2025Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGGJ_2025Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGGJ_2025Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGGJ_2025Projectile) \
	NO_API virtual ~AGGJ_2025Projectile();


#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_12_PROLOG
#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ_2025_API UClass* StaticClass<class AGGJ_2025Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
