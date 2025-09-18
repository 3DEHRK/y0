#include "UI/InventoryWidget.h"

#include "Inventory/InventoryComponent.h"
#include "Registry/BuildableRegistry.h"
#include "Blueprint/WidgetTree.h"
#include "Engine/Texture2D.h"
#include "Components/TextBlock.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/SizeBox.h"

void UInventoryWidget::Setup(UInventoryComponent* InInv, UBuildableRegistry* InReg)
{
	Inventory = InInv;
	Registry = InReg;

	if (Inventory.IsValid())
	{
		Inventory->OnInventoryChanged.AddUObject(this, &UInventoryWidget::Refresh);
		Inventory->OnActiveSlotChanged.AddUObject(this, &UInventoryWidget::Refresh);
	}

	// Ensure an initial fill even if replication already happened before widget creation
	Refresh();
}

void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
	RebuildWidget();
	Refresh();
}

TSharedRef<SWidget> UInventoryWidget::RebuildWidget()
{
	Slots.Reset();

	// Root overlay with a horizontal box and a fallback label
	UOverlay* RootOverlay = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("InventoryRootOverlay"));
	WidgetTree->RootWidget = RootOverlay;

	RootBox = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("RootBox"));
	if (RootOverlay)
	{
		UOverlaySlot* BoxSlot = RootOverlay->AddChildToOverlay(RootBox);
		if (BoxSlot)
		{
			BoxSlot->SetHorizontalAlignment(HAlign_Center);
			BoxSlot->SetVerticalAlignment(VAlign_Bottom);
			BoxSlot->SetPadding(FMargin(8.f));
		}
	}

	for (int32 i = 0; i < 8; ++i)
	{
		UInventorySlotWidget* NewSlot = WidgetTree->ConstructWidget<UInventorySlotWidget>(UInventorySlotWidget::StaticClass());
		Slots.Add(NewSlot);
		UHorizontalBoxSlot* HS = RootBox->AddChildToHorizontalBox(NewSlot);
		if (HS)
		{
			HS->SetPadding(FMargin(2.f));
		}
	}

	// Add fallback label used to show selected item name
	FallbackLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("InventorySelectedLabel"));
	FallbackLabel->SetText(FText::FromString(TEXT("InventoryUI")));
	FallbackLabel->SetColorAndOpacity(FSlateColor(FLinearColor::Yellow));
	FallbackLabel->SetJustification(ETextJustify::Center);
	if (RootOverlay)
	{
		UOverlaySlot* TextSlot = RootOverlay->AddChildToOverlay(FallbackLabel);
		if (TextSlot)
		{
			TextSlot->SetHorizontalAlignment(HAlign_Center);
			TextSlot->SetVerticalAlignment(VAlign_Bottom);
			TextSlot->SetPadding(FMargin(8.f, 8.f, 8.f, 80.f));
		}
	}

	return Super::RebuildWidget();
}

static UTexture2D* GetDefaultIcon()
{
	// Load a visible built-in engine texture (white square)
	return LoadObject<UTexture2D>(nullptr, TEXT("/Engine/EngineResources/WhiteSquareTexture.WhiteSquareTexture"));
}

UTexture2D* UInventoryWidget::GetOrMakeIcon(int32 TypeId) const
{
	if (Registry.IsValid())
	{
		if (const UBuildableRegistry::FBuildableDef* Def = Registry->Get(TypeId))
		{
			if (Def->Icon)
			{
				return Def->Icon;
			}
		}
	}
	return GetDefaultIcon();
}

void UInventoryWidget::Refresh()
{
	if (!Inventory.IsValid()) return;
	Inventory->InitDefaultSlots();
	const uint8 Active = Inventory->ActiveSlot;

	for (int32 i = 0; i < Slots.Num() && i < 8; ++i)
	{
		UInventorySlotWidget* SlotWidget = Slots[i];
		if (!SlotWidget) continue;
		const FItemStack& Stack = Inventory->Slots[i];
		UTexture2D* Icon = GetOrMakeIcon(Stack.TypeId);
		SlotWidget->SetData(Stack, Icon, Active == i);
	}

	// Update label with selected item name
	if (FallbackLabel)
	{
		FString Label = TEXT("Selected: ");
		if (Inventory->Slots.IsValidIndex(Active))
		{
			const FItemStack& S = Inventory->Slots[Active];
			if (S.TypeId != 0)
			{
				Label += (S.Name.Len() > 0) ? S.Name : FString::Printf(TEXT("Type %d"), S.TypeId);
				Label += FString::Printf(TEXT(" x%d"), S.Count);
			}
			else
			{
				Label += TEXT("Empty");
			}
		}
		FallbackLabel->SetText(FText::FromString(Label));
	}
}
