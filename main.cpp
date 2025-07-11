#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "GC2B_07_ナクム_ジェイ_ハルシュバルダン";

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Novice::Initialize(kWindowTitle, 1280, 720);
	///gameManagerのインスタンスを生成し、ゲームを開始
    GameManager* gameManager = new GameManager();
    gameManager->Run();
    delete gameManager;

    Novice::Finalize();
    return 0;
}