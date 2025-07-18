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
	//new Player object
	player_ = new Player(); // Create a new Player object
	player_->Initialize(); // Initialize the player
}

void StageScene::Update() {
    if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
        sceneNo = CLEAR; // Press SPACE to go to Clear scene
    }
    if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
        sceneNo = TITLE; // Press ESC to return to Title scene
    }

	// Handle input and execute command
	icommand_ = inputHandler_->HandleInput(); // Get the command from input handler
	if (this->icommand_) {
		this->icommand_->Execute(*player_); // Execute the command on the player
	}
	player_->Update(); // Update the player state
}

void StageScene::Draw() {
    Novice::ScreenPrintf(100, 100, "Stage Scene");
    Novice::ScreenPrintf(100, 120, "Press SPACE to clear the game");
    Novice::ScreenPrintf(100, 140, "Press ESC to return to Title Scene");
	player_->Draw(); // Draw the player
} 