#include "IScene.h"

int IScene::sceneNo = TITLE; // Initialize static member variable 

int IScene::GetSceneNo() {
    return sceneNo;
}