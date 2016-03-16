// Copyright Ben Tristem 2016.

#pragma once

#include "GameFramework/Actor.h"
#include "IsoLock.generated.h"

UCLASS()
class BUILDINGESCAPE_API AIsoLock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIsoLock();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
