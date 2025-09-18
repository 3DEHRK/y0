#include "Inventory/InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
	SetIsReplicatedByDefault(true);
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UInventoryComponent, Slots);
	DOREPLIFETIME(UInventoryComponent, ActiveSlot);
}

void UInventoryComponent::InitDefaultSlots()
{
	if (Slots.Num() != 8)
	{
		Slots.SetNum(8);
	}
}

void UInventoryComponent::SelectSlot(uint8 Index)
{
	const uint8 Clamped = FMath::Clamp<uint8>(Index, 0, 7);
	if (ActiveSlot != Clamped)
	{
		ActiveSlot = Clamped;
		OnActiveSlotChanged.Broadcast();
	}
}

int32 UInventoryComponent::GetActiveTypeId() const
{
	if (Slots.IsValidIndex(ActiveSlot))
	{
		return Slots[ActiveSlot].TypeId;
	}
	return 0;
}

bool UInventoryComponent::TryConsumeActiveOne()
{
	if (!Slots.IsValidIndex(ActiveSlot)) return false;
	FItemStack& S = Slots[ActiveSlot];
	if (S.Count > 0)
	{
		S.Count -= 1;
		if (S.Count == 0)
		{
			S.TypeId = 0;
			S.Name.Reset();
		}
		OnInventoryChanged.Broadcast();
		return true;
	}
	return false;
}

void UInventoryComponent::AddItem(int32 TypeId, int32 Count)
{
	if (Count <= 0) return;
	InitDefaultSlots();

	// Try stack first
	for (FItemStack& S : Slots)
	{
		if (S.TypeId == TypeId || S.Count == 0)
		{
			if (S.Count == 0)
			{
				S.TypeId = TypeId;
			}
			S.Count += Count;
			OnInventoryChanged.Broadcast();
			return;
		}
	}
	// No empty slot, drop silently
}
