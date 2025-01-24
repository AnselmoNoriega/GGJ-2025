// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GGJ_2025PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGGJ_2025Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GGJ_2025_GGJ_2025PickUpComponent_generated_h
#error "GGJ_2025PickUpComponent.generated.h already included, missing '#pragma once' in GGJ_2025PickUpComponent.h"
#endif
#define GGJ_2025_GGJ_2025PickUpComponent_generated_h

#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_12_DELEGATE \
GGJ_2025_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AGGJ_2025Character* PickUpCharacter);


#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGGJ_2025PickUpComponent(); \
	friend struct Z_Construct_UClass_UGGJ_2025PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UGGJ_2025PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ_2025"), NO_API) \
	DECLARE_SERIALIZER(UGGJ_2025PickUpComponent)


#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGGJ_2025PickUpComponent(UGGJ_2025PickUpComponent&&); \
	UGGJ_2025PickUpComponent(const UGGJ_2025PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGGJ_2025PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGGJ_2025PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGGJ_2025PickUpComponent) \
	NO_API virtual ~UGGJ_2025PickUpComponent();


#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_14_PROLOG
#define FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ_2025_API UClass* StaticClass<class UGGJ_2025PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_GGJ_2025_GGJ_2025_Source_GGJ_2025_GGJ_2025PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
