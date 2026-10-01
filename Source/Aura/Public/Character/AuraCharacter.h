// Copyright ST

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();

	virtual void OnRep_PlayerState() override;
	virtual void PossessedBy(AController* NewController) override;
	
	protected:
	
	UPROPERTY(EditAnywhere, Category = Gameplay)
	USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, Category = Gameplay)
	UCameraComponent* FollowCamera;

private:
	void InitAbilityActorInfo();
	
};
