#include "MultiplayerGameMode.h"
#include "MultiplayerCharacter.h"
#include "MultiplayerPlayerController.h"

AMultiplayerGameMode::AMultiplayerGameMode()
{
    DefaultPawnClass = AMultiplayerCharacter::StaticClass();
    PlayerControllerClass = AMultiplayerPlayerController::StaticClass();
}
