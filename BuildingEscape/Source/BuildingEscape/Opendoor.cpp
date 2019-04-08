// Jeremy Kolasa 2019

#include "Opendoor.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UOpendoor::UOpendoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
	// ...GetTransform().GetRotation().ToString();
}


// Called when the game starts
void UOpendoor::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	FRotator NewRotation = FRotator(0.0f, 90.0f, 0.0f);
	Owner->SetActorRotation(NewRotation);
	// ...
	
}


// Called every frame
void UOpendoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

