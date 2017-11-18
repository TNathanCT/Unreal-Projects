#pragma once

#include "Engine/LocalPlayer.h"
#include "SLocalPlayer.generated.h"


UCLASS()
class SURVIVALGAME_API USLocalPlayer : public ULocalPlayer
{
	GENERATED_BODY()

	/* Set a player name if no online system like Steam is available */
	virtual FString GetNickname() const override;
};
