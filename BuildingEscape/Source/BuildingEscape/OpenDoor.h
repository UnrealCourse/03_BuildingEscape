// Copyright Ben Tristem 2016.

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDonkeyEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor();
	void CloseDoor();
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UPROPERTY(BluePrintAssignable)
	FDonkeyEvent DonkeyEvent;

private:
	UPROPERTY(EditAnywhere)
	float OpenAngle = -90.0f;
	
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;

	UPROPERTY(EditAnywhere)
	float DoorCloseDelay = 1.f;

	float LastDoorOpenTime;

	AActor* Owner; // The owning door

	// Returns total mass in kg
	float GetTotalMassOfActorsOnPlate();

};
