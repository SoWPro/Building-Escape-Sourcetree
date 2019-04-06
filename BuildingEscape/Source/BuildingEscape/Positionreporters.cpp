// Jeremy Kolasa 2019

#include "Positionreporters.h"
#include "Gameframework/Actor.h"


// Sets default values for this component's properties
UPositionreporters::UPositionreporters()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UPositionreporters::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT(" Middle chair position report reporting for duty %s!"), *ObjectName);
	// ...
	
}


// Called every frame
void UPositionreporters::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

