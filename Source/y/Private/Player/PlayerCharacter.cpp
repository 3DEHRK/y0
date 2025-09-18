#include "Player/PlayerCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Net/UnrealNetwork.h"

#include "Player/PlacementComponent.h"
#include "Inventory/InventoryComponent.h"

APlayerCharacter::APlayerCharacter()
{
	bReplicates = true;
	SetReplicateMovement(true);

	// Camera attached to capsule
	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
	FirstPersonCamera->bUsePawnControlRotation = true;

	// Components
	Placement = CreateDefaultSubobject<UPlacementComponent>(TEXT("Placement"));
	Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));

	if (Placement)
	{
		Placement->SetIsReplicated(true);
	}
	if (Inventory)
	{
		Inventory->SetIsReplicated(true);
		Inventory->InitDefaultSlots();
	}
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// Character default replication handles movement; components are set replicated above.
}
