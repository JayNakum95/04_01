#pragma once
#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

extern unsigned char preKeys[256];
extern unsigned char keys[256];

class GameManager {
private:
    std::unique_ptr<IScene> sceneArray_[3];
    int currentSceneNo_;
    int previousSceneNo_;
public:
    GameManager();
    ~GameManager();
    int Run();
};