#pragma once
struct Vector2 {
	float x;
	float y;
};
class Enemy
{
private:
	Vector2 pos; // Enemy's position
	Vector2 size; // Enemy's size
	Vector2 speed; // Enemy's speed
	int Hp;// Enemy's health points
	bool isAlive; // Enemy's alive status
public:
	Enemy();
	void Initialize();
	void Update();
	void Draw();

	bool IsAlive() const; // Check if the enemy is alive
	void TakeDamage(int damage); // Apply damage to the enemy
	int GetHp() const; // Get current health points of the enemy
};
