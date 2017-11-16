#pragma once

#include "SPickupActor.h"
#include "SConsumableActor.generated.h"

UCLASS(ABSTRACT)
class SURVIVALGAME_API ASConsumableActor : public ASPickupActor
{
	GENERATED_BODY()

	ASConsumableActor(const FObjectInitializer& ObjectInitializer);

protected:

	/* Consume item, restoring energy to player */
	virtual void OnUsed(APawn* InstigatorPawn) override;

	/* Amount of hitpoints restored and hunger reduced when consumed. */
	UPROPERTY(EditDefaultsOnly, Category = "Consumable")
	float Nutrition;
};
