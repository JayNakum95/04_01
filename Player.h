#pragma once

struct Vector2 {
	float x;
	float y;
};
class Player
{
private:
	Vector2 pos; // Player's position
	Vector2 size ; // Player's size
	Vector2 speed ; // Player's speed


	public:
	Player();
	void Initialize();
	void Update();
	void Draw();

	void MoveRight();// Move the player to the right

	void MoveLeft();// Move the player to the left

};

