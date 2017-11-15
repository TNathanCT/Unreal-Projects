#pragma once

#include "Sound/SoundNode.h"
#include "SoundNodeLocalPlayer.generated.h"

UCLASS(hidecategories = Object, editinlinenew)
class SURVIVALGAME_API USoundNodeLocalPlayer : public USoundNode
{
	GENERATED_BODY()

	virtual void ParseNodes(FAudioDevice* AudioDevice, const UPTRINT NodeWaveInstanceHash, FActiveSound& ActiveSound, const FSoundParseParameters& ParseParams, TArray<FWaveInstance*>& WaveInstances) override;

	virtual void CreateStartingConnectors(void) override;

	virtual int32 GetMaxChildNodes() const override;

	virtual int32 GetMinChildNodes() const override;

#if WITH_EDITOR

	virtual FText GetInputPinName(int32 PinIndex) const override;

#endif

};
