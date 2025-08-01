#include "Enemy.h"
#include "Novice.h"
Enemy::Enemy() : Hp(100), isAlive(true) {
	pos.x = 0.0f;
	pos.y = 0.0f;
	size.x = 50.0f; // Default size
	size.y = 50.0f; // Default size
	speed.x = 2.0f; // Default speed
	speed.y = 2.0f; // Default speed
}
void Enemy::Initialize() {
	// Initialize enemy position at a random location
	pos.x = static_cast<float>(rand() % 1280);
	pos.y = static_cast<float>(rand() % 720);
	Hp = 100; // Reset health points
	isAlive = true; // Reset alive status
}
void Enemy::Update() {
	if (isAlive) {
		// Update enemy position or behavior here if needed
		// For example, move towards the player or patrol a path
	}
}
void Enemy::Draw() {
	if (isAlive) {
		// Draw the enemy as a rectangle
		Novice::DrawBox(static_cast<int>(pos.x), static_cast<int>(pos.y),
			static_cast<int>(size.x), static_cast<int>(size.y), 0.0f, 0xFFFF0000, kFillModeSolid);
	}
}
bool Enemy::IsAlive() const {
	return isAlive; // Return the alive status of the enemy
}
void Enemy::TakeDamage(int damage) {
	if (isAlive) {
		Hp -= damage; // Reduce health points by damage
		if (Hp <= 0) {
			isAlive = false; // Set alive status to false if health points drop to zero or below
		}
	}
}
int Enemy::GetHp() const {
	return Hp; // Return current health points of the enemy
}
