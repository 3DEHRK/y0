#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "UI/InventorySlotWidget.h"
#include "InventoryWidget.generated.h"

class UInventoryComponent;
class UBuildableRegistry;

UCLASS()
class Y_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void Setup(UInventoryComponent* InInv, UBuildableRegistry* InReg);

protected:
	virtual void NativeConstruct() override;
	virtual TSharedRef<SWidget> RebuildWidget() override;

	void Refresh();

private:
	TWeakObjectPtr<UInventoryComponent> Inventory;
	TWeakObjectPtr<UBuildableRegistry> Registry;

	UHorizontalBox* RootBox = nullptr;
	TArray<TObjectPtr<UInventorySlotWidget>> Slots;

	UTexture2D* GetOrMakeIcon(int32 TypeId) const;
};
