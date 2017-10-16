// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMGtoSlate.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StrAssembleLib.generated.h"

/**
 * 
 */
UCLASS()
class UMGTOSLATE_API UStrAssembleLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	// ���ء�SNew(ClassName)��
	static FString Str_SNew(const FString &ClassName);
	
	// ���ء�.Visibility(EVisibility::Visible)��
	static FString Str_Visibility(ESlateVisibility SlateVisibility);
	
};
