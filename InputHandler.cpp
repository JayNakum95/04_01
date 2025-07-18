#include "InputHandler.h"
#include "Novice.h"
void InputHandler::AssignMoveLeftCommand2pressA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command; // Assign MoveLeftCommand to pressKeyA_
}
void InputHandler::AssignMoveRightCommand2pressD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command; // Assign MoveRightCommand to pressKeyD_
}
ICommand* InputHandler::HandleInput() {
	if (Novice::CheckHitKey(DIK_A)) {
		if (this->pressKeyA_) {
			return this->pressKeyA_; // Return MoveLeftCommand if A is pressed
		}
	}
	else if (Novice::CheckHitKey(DIK_D)) {
		if (this->pressKeyD_) {
			return this->pressKeyD_; // Return MoveRightCommand if D is pressed
		}
	}
	return nullptr; // No command to execute
}