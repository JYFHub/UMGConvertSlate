// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMGtoSlate.h"
#include "UObject/NoExportTypes.h"
#include "ToSWidget.generated.h"

/**
 * 
 */
UCLASS()
class UMGTOSLATE_API UToSWidget : public UObject
{
	GENERATED_BODY()
	
public:

	// ����ͷ�ַ���
	virtual void GenerateHead(UWidget* NewWidget);

	// ����widget����
	virtual void GenerateWidgetProperty();

	// ��������widget����
	virtual void GenerateSpecialWidgetProperty() { };

	// �����¼�widget
	virtual void GenerateChildWidget() {};

protected:

	// ����ӿؼ�����
	int32 GetPanalWidgetChildrenCount() const;

protected:

	UWidget* ThisWidget;

	// ͷ��String�����磬SNew(SButton)
	FString HeadString = FString();

	// widgetͨ������
	TArray<FString> WidgetProperty;

	// widget��������
	TArray<FString> WidgetSpecialProperty;

	// ��Ӧ��ת��SWidget�����ƣ����磬SButton
	FString ToSWidgetClassName = FString();

	// Ĭ�ϵ���ʾ����
	ESlateVisibility ToSWidgetDefaultVisibility = ESlateVisibility::Visible;

};
