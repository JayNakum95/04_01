#include "ClearScene.h"
#include "Novice.h"

extern unsigned char preKeys[256];
extern unsigned char keys[256];

void ClearScene::Initialize() {
    // Clear scene initialization
}

void ClearScene::Update() {
    if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
        sceneNo = TITLE; // Press ESC to return to Title scene
    }
}

void ClearScene::Draw() {
    Novice::ScreenPrintf(100, 100, "Clear Scene");
    Novice::ScreenPrintf(100, 120, "Press ESC to return to Title Scene");
    Novice::ScreenPrintf(100, 140, "Congratulations! You cleared the game!");
}