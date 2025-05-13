#include "MultiplayerCharacter.h"
#include "Net/UnrealNetwork.h"

AMultiplayerCharacter::AMultiplayerCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    bReplicates = true;
    bReplicateMovement = true;
}

void AMultiplayerCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AMultiplayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AMultiplayerCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AMultiplayerCharacter::MoveRight);
}

void AMultiplayerCharacter::MoveForward(float Value)
{
    if (Controller && Value != 0.0f)
    {
        AddMovementInput(GetActorForwardVector(), Value);
        CurrentSpeed = Value;
    }
}

void AMultiplayerCharacter::MoveRight(float Value)
{
    if (Controller && Value != 0.0f)
    {
        AddMovementInput(GetActorRightVector(), Value);
        CurrentSpeed = Value;
    }
}

void AMultiplayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(AMultiplayerCharacter, CurrentSpeed);
}
