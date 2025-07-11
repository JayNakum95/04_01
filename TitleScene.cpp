#include "TitleScene.h"
#include "Novice.h"

extern unsigned char preKeys[256];
extern unsigned char keys[256];

void TitleScene::Initialize() {
    // Title scene initialization
}

void TitleScene::Update() {
    if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
        sceneNo = STAGE; // Press SPACE to go to Stage scene
    }
}

void TitleScene::Draw() {
    Novice::ScreenPrintf(100, 100, "Title Scene");
    Novice::ScreenPrintf(100, 120, "Press SPACE to start the game");
}