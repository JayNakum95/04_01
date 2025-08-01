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
void MoveUpCommand::Execute(Player& player)
{
	player.MoveUp(); // Execute the command to move the player up
}
void MoveDownCommand::Execute(Player& player)
{
	player.MoveDown(); // Execute the command to move the player down
}