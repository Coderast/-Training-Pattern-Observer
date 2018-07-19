#include "Player.h"

Player::Player()
{
	count_++;
	setNickname(std::string("Player ") + std::to_string(count_));
}

Player::Player(std::string nickname)
{
	count_++;
	setNickname(nickname);
}

void Player::update(const Tower &tower)
{

}

Player::~Player()
{
	count_--;
}
