// Copyright Ben Tristem 2016.

#include "BuildingEscape.h"
#include "IsoLock.h"


// Sets default values
AIsoLock::AIsoLock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIsoLock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIsoLock::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

