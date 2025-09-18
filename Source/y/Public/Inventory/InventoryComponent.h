#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "InventoryComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnInventoryChanged);
DECLARE_MULTICAST_DELEGATE(FOnActiveSlotChanged);

USTRUCT()
struct FItemStack
{
	GENERATED_BODY()

	UPROPERTY()
	int32 TypeId = 0;

	UPROPERTY()
	int32 Count = 0;

	UPROPERTY()
	FString Name;
};

UCLASS(ClassGroup=(Custom))
class Y_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UInventoryComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Replicated)
	TArray<FItemStack> Slots; // fixed size 8

	UPROPERTY(Replicated)
	uint8 ActiveSlot = 0;

	FOnInventoryChanged OnInventoryChanged;
	FOnActiveSlotChanged OnActiveSlotChanged;

	void InitDefaultSlots(); // ensure 8 entries
	void SelectSlot(uint8 Index); // clamp 0..7; broadcast OnActiveSlotChanged
	int32 GetActiveTypeId() const;
	bool TryConsumeActiveOne(); // decrement Count if >0; broadcast OnInventoryChanged; return true/false
	void AddItem(int32 TypeId, int32 Count); // stack or first empty
};
