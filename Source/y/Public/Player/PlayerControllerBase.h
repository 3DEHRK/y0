#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBase.generated.h"

class UInventoryWidget;

UCLASS()
class Y_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;

private:
	// Movement/look
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);

	// Actions
	void JumpPressed();
	void JumpReleased();
	void PlacePressed();
	void RemovePressed();
	void RotateCW();
	void RotateCCW();

	void SelectHotbar(uint8 Index);
	void Hotbar1();
	void Hotbar2();
	void Hotbar3();
	void Hotbar4();
	void Hotbar5();
	void Hotbar6();
	void Hotbar7();
	void Hotbar8();

	void EnsureInventoryUI();

	UPROPERTY()
	UInventoryWidget* InventoryUI = nullptr;
};
