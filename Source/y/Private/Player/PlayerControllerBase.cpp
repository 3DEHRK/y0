#include "Player/PlayerControllerBase.h"

#include "GameFramework/Character.h"
#include "Player/PlayerCharacter.h"
#include "Player/PlacementComponent.h"
#include "Inventory/InventoryComponent.h"
#include "Registry/BuildableRegistry.h"
#include "UI/InventoryWidget.h"
#include "Blueprint/UserWidget.h"

void APlayerControllerBase::SetupInputComponent()
{
	Super::SetupInputComponent();
	check(InputComponent);

	InputComponent->BindAxis("MoveForward", this, &APlayerControllerBase::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayerControllerBase::MoveRight);
	InputComponent->BindAxis("Turn", this, &APlayerControllerBase::Turn);
	InputComponent->BindAxis("LookUp", this, &APlayerControllerBase::LookUp);

	InputComponent->BindAction("Jump", IE_Pressed, this, &APlayerControllerBase::JumpPressed);
	InputComponent->BindAction("Jump", IE_Released, this, &APlayerControllerBase::JumpReleased);

	InputComponent->BindAction("Place", IE_Pressed, this, &APlayerControllerBase::PlacePressed);
	InputComponent->BindAction("Remove", IE_Pressed, this, &APlayerControllerBase::RemovePressed);
	InputComponent->BindAction("RotateCW", IE_Pressed, this, &APlayerControllerBase::RotateCW);
	InputComponent->BindAction("RotateCCW", IE_Pressed, this, &APlayerControllerBase::RotateCCW);

	// Hotbar 1..8 map to indices 0..7
	InputComponent->BindAction("Hotbar1", IE_Pressed, this, &APlayerControllerBase::Hotbar1);
	InputComponent->BindAction("Hotbar2", IE_Pressed, this, &APlayerControllerBase::Hotbar2);
	InputComponent->BindAction("Hotbar3", IE_Pressed, this, &APlayerControllerBase::Hotbar3);
	InputComponent->BindAction("Hotbar4", IE_Pressed, this, &APlayerControllerBase::Hotbar4);
	InputComponent->BindAction("Hotbar5", IE_Pressed, this, &APlayerControllerBase::Hotbar5);
	InputComponent->BindAction("Hotbar6", IE_Pressed, this, &APlayerControllerBase::Hotbar6);
	InputComponent->BindAction("Hotbar7", IE_Pressed, this, &APlayerControllerBase::Hotbar7);
	InputComponent->BindAction("Hotbar8", IE_Pressed, this, &APlayerControllerBase::Hotbar8);
}

void APlayerControllerBase::BeginPlay()
{
	Super::BeginPlay();
	EnsureInventoryUI();
}

void APlayerControllerBase::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	EnsureInventoryUI();
}

void APlayerControllerBase::EnsureInventoryUI()
{
	if (!IsLocalController()) return;

	APawn* P = GetPawn();
	if (!P) return;
	UInventoryComponent* Inv = P->FindComponentByClass<UInventoryComponent>();
	if (!Inv) return;

	UBuildableRegistry* Reg = GetGameInstance() ? GetGameInstance()->GetSubsystem<UBuildableRegistry>() : nullptr;

	if (!InventoryUI)
	{
		InventoryUI = CreateWidget<UInventoryWidget>(this, UInventoryWidget::StaticClass());
	}
	if (InventoryUI && !InventoryUI->IsInViewport())
	{
		InventoryUI->Setup(Inv, Reg);
		InventoryUI->AddToViewport(0);
	}
}

void APlayerControllerBase::MoveForward(float Value)
{
	if (Value == 0.f) return;
	if (APawn* P = GetPawn())
	{
		const FRotator YawRot(0.f, GetControlRotation().Yaw, 0.f);
		const FVector Dir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
		P->AddMovementInput(Dir, Value);
	}
}

void APlayerControllerBase::MoveRight(float Value)
{
	if (Value == 0.f) return;
	if (APawn* P = GetPawn())
	{
		const FRotator YawRot(0.f, GetControlRotation().Yaw, 0.f);
		const FVector Dir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
		P->AddMovementInput(Dir, Value);
	}
}

void APlayerControllerBase::Turn(float Value)
{
	AddYawInput(Value);
}

void APlayerControllerBase::LookUp(float Value)
{
	AddPitchInput(Value);
}

void APlayerControllerBase::JumpPressed()
{
	if (ACharacter* C = Cast<ACharacter>(GetPawn()))
	{
		C->Jump();
	}
}

void APlayerControllerBase::JumpReleased()
{
	if (ACharacter* C = Cast<ACharacter>(GetPawn()))
	{
		C->StopJumping();
	}
}

void APlayerControllerBase::PlacePressed()
{
	if (const APlayerCharacter* PC = Cast<APlayerCharacter>(GetPawn()))
	{
		if (UPlacementComponent* Place = PC->Placement)
		{
			FIntPoint Cell;
			if (Place->GetCandidateCell(Cell))
			{
				Place->ServerPlaceRequest(Cell, Place->DesiredRot);
			}
		}
	}
}

void APlayerControllerBase::RemovePressed()
{
	if (const APlayerCharacter* PC = Cast<APlayerCharacter>(GetPawn()))
	{
		if (UPlacementComponent* Place = PC->Placement)
		{
			FIntPoint Cell;
			if (Place->GetCandidateCell(Cell))
			{
				Place->ServerRemoveRequest(Cell);
			}
		}
	}
}

void APlayerControllerBase::RotateCW()
{
	if (const APlayerCharacter* PC = Cast<APlayerCharacter>(GetPawn()))
	{
		if (UPlacementComponent* Place = PC->Placement)
		{
			Place->RotateCW();
		}
	}
}

void APlayerControllerBase::RotateCCW()
{
	if (const APlayerCharacter* PC = Cast<APlayerCharacter>(GetPawn()))
	{
		if (UPlacementComponent* Place = PC->Placement)
		{
			Place->RotateCCW();
		}
	}
}

void APlayerControllerBase::SelectHotbar(uint8 Index)
{
	if (const APlayerCharacter* PC = Cast<APlayerCharacter>(GetPawn()))
	{
		if (UPlacementComponent* Place = PC->Placement)
		{
			Place->SelectHotbar(Index);
		}
	}
}

void APlayerControllerBase::Hotbar1() { SelectHotbar(0); }
void APlayerControllerBase::Hotbar2() { SelectHotbar(1); }
void APlayerControllerBase::Hotbar3() { SelectHotbar(2); }
void APlayerControllerBase::Hotbar4() { SelectHotbar(3); }
void APlayerControllerBase::Hotbar5() { SelectHotbar(4); }
void APlayerControllerBase::Hotbar6() { SelectHotbar(5); }
void APlayerControllerBase::Hotbar7() { SelectHotbar(6); }
void APlayerControllerBase::Hotbar8() { SelectHotbar(7); }
