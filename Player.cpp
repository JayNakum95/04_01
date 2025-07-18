#include "Player.h"  
#include "Novice.h"  

Player::Player()
{
}

void Player::Initialize()
{
	// Initialize player position at the center of the screen
	this->pos.x = 640.0f; 
	this->pos.y = 360.0f; 
	this->size.x = 40.0f; // Width of the player
	this->size.y = 40.0f; // Height of the player
	this->speed.x = 4.0f; // Speed  x direction
	this->speed.y = 4.0f; // Speed  y direction
}

void Player::Update()
{

}

void Player::Draw()
{
	// Draw the player
	Novice::DrawBox(static_cast<int>(this->pos.x), static_cast<int>(this->pos.y),
		static_cast<int>(this->size.x), static_cast<int>(this->size.y), 0.0f, 0xFFFFFFFF, kFillModeSolid);
}

void Player::MoveRight() {
this->pos.x += this->speed.x; // Implement player movement to the right  
}  
void Player::MoveLeft() {  
	this->pos.x -= this->speed.x; // Implement player movement to the left  
}