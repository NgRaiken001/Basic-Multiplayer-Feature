#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MultiplayerCharacter.generated.h"

UCLASS()
class MYGAME_API AMultiplayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMultiplayerCharacter();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Character")
    float CurrentSpeed;

    void MoveForward(float Value);
    void MoveRight(float Value);
};
