#include "Command.h"
#include "Player.h"

void MoveRightCommand::Execute(Player& player)
{
	player.MoveRight(); // Execute the command to move the player to the right
}
void MoveLeftCommand::Execute(Player& player)
{
	player.MoveLeft(); // Execute the command to move the player to the left
}
