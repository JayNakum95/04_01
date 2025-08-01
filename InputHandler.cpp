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
void InputHandler::AssignMoveUpCommand2pressW() {
	ICommand* command = new MoveUpCommand();
	this->pressKeyW_ = command; // Assign MoveUpCommand to pressKeyW_
}
void InputHandler::AssignMoveDownCommand2pressS() {
	ICommand* command = new MoveDownCommand();
	this->pressKeyS_ = command; // Assign MoveDownCommand to pressKeyS_
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
	else if (Novice::CheckHitKey(DIK_W)) {
		if (this->pressKeyW_) {
			return this->pressKeyW_; // Return MoveUpCommand if W is pressed
		}
	}
	else if (Novice::CheckHitKey(DIK_S)) {
		if (this->pressKeyS_) {
			return this->pressKeyS_; // Return MoveDownCommand if S is pressed
		}
	}
	return nullptr; // No command to execute
}