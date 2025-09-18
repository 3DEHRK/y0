#include "UI/InventoryWidget.h"

#include "Inventory/InventoryComponent.h"
#include "Registry/BuildableRegistry.h"
#include "Blueprint/WidgetTree.h"
#include "Engine/Texture2D.h"

void UInventoryWidget::Setup(UInventoryComponent* InInv, UBuildableRegistry* InReg)
{
	Inventory = InInv;
	Registry = InReg;

	if (Inventory.IsValid())
	{
		Inventory->OnInventoryChanged.AddUObject(this, &UInventoryWidget::Refresh);
		Inventory->OnActiveSlotChanged.AddUObject(this, &UInventoryWidget::Refresh);
	}
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
	RootBox = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("RootBox"));
	WidgetTree->RootWidget = RootBox;

	for (int32 i = 0; i < 8; ++i)
	{
		UInventorySlotWidget* NewSlot = WidgetTree->ConstructWidget<UInventorySlotWidget>(UInventorySlotWidget::StaticClass());
		Slots.Add(NewSlot);
		RootBox->AddChildToHorizontalBox(NewSlot);
	}

	return Super::RebuildWidget();
}

static UTexture2D* CreateSolidIconTransient(int32 TypeId)
{
	const int32 Size = 32;
	UTexture2D* Tex = UTexture2D::CreateTransient(Size, Size, PF_B8G8R8A8);
	Tex->CompressionSettings = TC_Default;
	Tex->SRGB = true;
	Tex->AddToRoot();
	Tex->UpdateResource();

	// Random color per type id for visual distinction
	FRandomStream Rng(TypeId);
	FColor Color(Rng.RandRange(64,255), Rng.RandRange(64,255), Rng.RandRange(64,255), 255);

	// Note: For simplicity, not writing CPU pixels here; could use brush tint instead.
	return Tex;
}

UTexture2D* UInventoryWidget::GetOrMakeIcon(int32 TypeId) const
{
	if (!Registry.IsValid()) return nullptr;
	const UBuildableRegistry::FBuildableDef* Def = Registry->Get(TypeId);
	if (Def && Def->Icon)
	{
		return Def->Icon;
	}
	return CreateSolidIconTransient(TypeId);
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
}
