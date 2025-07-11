#include "StageScene.h"
#include "Novice.h"

extern unsigned char preKeys[256];
extern unsigned char keys[256];

void StageScene::Initialize() {
    // Stage scene initialization
}

void StageScene::Update() {
    if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
        sceneNo = CLEAR; // Press SPACE to go to Clear scene
    }
    if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
        sceneNo = TITLE; // Press ESC to return to Title scene
    }
}

void StageScene::Draw() {
    Novice::ScreenPrintf(100, 100, "Stage Scene");
    Novice::ScreenPrintf(100, 120, "Press SPACE to clear the game");
    Novice::ScreenPrintf(100, 140, "Press ESC to return to Title Scene");
}