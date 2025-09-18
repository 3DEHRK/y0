#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inventory/InventoryComponent.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "InventorySlotWidget.generated.h"

UCLASS()
class Y_API UInventorySlotWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta=(BindWidgetOptional))
	UImage* Icon;

	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* CountText;

	// Simple highlight via opacity change
	void SetData(const FItemStack& Stack, UTexture2D* IconTexture, bool bActive);

protected:
	virtual void NativeConstruct() override;

private:
	// internal helpers
	void ApplyHighlight(bool bActive);
};
