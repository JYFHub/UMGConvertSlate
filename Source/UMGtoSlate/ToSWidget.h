// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMGtoSlate.h"
#include "UObject/NoExportTypes.h"
#include "ToSWidget.generated.h"

// param1 - Slot�����
DECLARE_DELEGATE_OneParam(FSlotLoop, const int32)

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

	// ����Slot����
	virtual void GenerateSlotProperty(const int32 SlotIndex) {};

protected:

	// ����ӿؼ�����
	int32 GetPanalWidgetChildrenCount() const;

	// ��Slot������Ӷ���
	void AddSlotProperty(const int32 SlotIndex, const TArray<FString> PropertyArr);

	// ��Slot������Ӷ���
	void AddSlotProperty(const int32 SlotIndex, const FString &PropertyValue);

	// ����ѭ��
	void LoopPanelSlot();

public:

	// ͷ��String�����磬SNew(SButton)
	FString HeadString = FString();

	// widgetͨ������
	TArray<FString> WidgetProperty;

	// widget��������
	TArray<FString> WidgetSpecialProperty;

	// ÿ��Slot��Ӧ������
	TMap<int32, TArray<FString>> SlotProperty;

	// tab����
	int32 TabCount = 0;

protected:

	// ԭUWidget
	UWidget* ThisWidget;

	// ��Ӧ��ת��SWidget�����ƣ����磬SButton
	FString ToSWidgetClassName = FString();

	// Ĭ�ϵ���ʾ����
	ESlateVisibility ToSWidgetDefaultVisibility = ESlateVisibility::Visible;

	// ���Slot��ѭ��
	FSlotLoop PanelSlotLoop;

	// slot����
	int32 ChildSlotCount = 0;


};
