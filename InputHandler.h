#pragma once
#include "Command.h"
class InputHandler
{
public:
	ICommand* HandleInput();
	void AssignMoveLeftCommand2pressA();
	void AssignMoveRightCommand2pressD();
	void AssignMoveUpCommand2pressW();
	void AssignMoveDownCommand2pressS();
private:
	ICommand* pressKeyD_ ;
	ICommand* pressKeyA_ ;
	ICommand* pressKeyW_;
	ICommand* pressKeyS_;


};

