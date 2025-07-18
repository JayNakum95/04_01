#pragma once
#include "Command.h"
class InputHandler
{
public:
	ICommand* HandleInput();
	void AssignMoveLeftCommand2pressA();
	void AssignMoveRightCommand2pressD();
private:
	ICommand* pressKeyD_ ;
	ICommand* pressKeyA_ ;

};

