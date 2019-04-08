// Jeremy Kolasa 2019

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Positionreporter2.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UPositionreporter2 : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPositionreporter2();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
