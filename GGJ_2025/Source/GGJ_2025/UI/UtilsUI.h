// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilsUI.generated.h"
/**
 * 
 */
UCLASS()
class GGJ_2025_API UUtilsUI : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Changes Window Mode", CompactNodeTitle = "Change Window Mode"))
	static EWindowMode::Type ChangeWindowMode(EWindowMode::Type mode, bool isAdding);
};
