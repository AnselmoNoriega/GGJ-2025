// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilsUI.h"

EWindowMode::Type UUtilsUI::ChangeWindowMode(EWindowMode::Type mode, bool isAdding)
{
    if (mode == EWindowMode::Type::Fullscreen && !isAdding)
    {
        return EWindowMode::Type::NumWindowModes;
    }

    if (mode == EWindowMode::Type::NumWindowModes && isAdding)
    {
        return EWindowMode::Type::Fullscreen;
    }

    return isAdding ? EWindowMode::Type((int)mode + 1) : EWindowMode::Type((int)mode - 1);
}

int UUtilsUI::ChangeIndex(int index, bool isAdding, int min, int max)
{
    if (index == min && !isAdding)
    {
        return max;
    }

    if (index == max && isAdding)
    {
        return min;
    }

    return isAdding ? index + 1 : index - 1;
}
