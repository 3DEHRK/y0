#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "PlayerCharacter.generated.h"

class UPlacementComponent;
class UInventoryComponent;

UCLASS()
class Y_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	APlayerCharacter();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Components
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FirstPersonCamera;

	UPROPERTY(VisibleAnywhere)
	UPlacementComponent* Placement;

	UPROPERTY(VisibleAnywhere)
	UInventoryComponent* Inventory;
};
