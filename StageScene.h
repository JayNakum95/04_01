#pragma once
#include "IScene.h"
#include "InputHandler.h"

class StageScene : public IScene {
private:
	InputHandler *inputHandler_= nullptr; // Input handler for command execution
	ICommand* icommand_ = nullptr; // Command to be executed
	Player* player_ = nullptr; // Player object
public:
    StageScene();
    void Initialize() override;
    void Update() override;
    void Draw() override;
};