#include "GameManager.h"
#include "Novice.h"

unsigned char preKeys[256] = { 0 };
unsigned char keys[256] = { 0 };

GameManager::GameManager() : currentSceneNo_(TITLE), previousSceneNo_(TITLE) {
	sceneArray_[TITLE] = std::make_unique<TitleScene>();// Initialize title scene

	sceneArray_[STAGE] = std::make_unique<StageScene>();// Initialize stage scene
	sceneArray_[CLEAR] = std::make_unique<ClearScene>();// Initialize clear scene

	currentSceneNo_ = TITLE;// Set the initial scene to   TITLE

}

GameManager::~GameManager() {
}

int GameManager::Run() {
    while (Novice::ProcessMessage() == 0) {
        Novice::BeginFrame();

        // Update key states
        memcpy(preKeys, keys, sizeof(keys));
        Novice::GetHitKeyStateAll(reinterpret_cast<char*>(keys));

        // Scene check
        previousSceneNo_ = currentSceneNo_;
        currentSceneNo_ = sceneArray_[currentSceneNo_]->GetSceneNo();

        // Scene update
        if (previousSceneNo_ != currentSceneNo_) {
            sceneArray_[currentSceneNo_]->Initialize();
        }
        sceneArray_[currentSceneNo_]->Update();
        sceneArray_[currentSceneNo_]->Draw();

        Novice::EndFrame();

    
    }
    return 0;
}