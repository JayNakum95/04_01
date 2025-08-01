#include "StageScene.h"
#include "Novice.h"
#include "Player.h"
extern unsigned char preKeys[256];
extern unsigned char keys[256];

StageScene::StageScene()
{
}

void StageScene::Initialize() {
    // Stage scene initialization
	inputHandler_ = new InputHandler(); // Create an input handler
	inputHandler_->AssignMoveLeftCommand2pressA(); // Assign MoveLeftCommand to A key
	inputHandler_->AssignMoveRightCommand2pressD(); // Assign MoveRightCommand to D key
	inputHandler_->AssignMoveUpCommand2pressW(); // Assign MoveUpCommand to W key
	inputHandler_->AssignMoveDownCommand2pressS(); // Assign MoveDownCommand to S key
	//new Player object
	player_ = new Player(); // Create a new Player object
	player_->Initialize(); // Initialize the player
}

void StageScene::Update() {

	// Handle input and execute command
	icommand_ = inputHandler_->HandleInput(); // Get the command from input handler
	if (this->icommand_) {
		this->icommand_->Execute(*player_); // Execute the command on the player
	}
	player_->Update(); // Update the player state
	
	//if player reaches the goal, clear the game and move to clear scene
	if (player_->GetPosition().x >= 1190 && player_->GetPosition().x<=1240) {
		if (player_->GetPosition().y >= 390 && player_->GetPosition().y <= 440) {
			// Player has reached the goal
			Novice::ScreenPrintf(100, 160, "Goal Reached! Press SPACE to clear the game");
			sceneNo = CLEAR; // Set the scene number to CLEAR		

		}
	}



}

void StageScene::Draw() {
    Novice::ScreenPrintf(100, 100, "Stage Scene");
	Novice::ScreenPrintf(100, 140, "Use W, A, S, D to move the player");
	Novice::ScreenPrintf(100, 160, "Reach the yellow goal box to clear the game");
	player_->Draw(); // Draw the player
	//draw Goal
	Novice::DrawBox(1200, 400, 40, 40, 0.0f, 0xFFFF00FF, kFillModeSolid); // Draw a goal box
} 