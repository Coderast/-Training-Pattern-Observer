#include "Player.h"
#include <iostream>

unsigned __int8 Player::count_ = 0;

Player::Player()
{
	count_++;
	setNickname(std::string("Player ") + std::to_string(count_));
}

Player::Player(const std::string &nickname, const Team& team)
{
	count_++;
	setNickname(nickname);
	setTeam(team);
}

void Player::update(const Tower &tower)
{
	std::cout << "[" << nickname_ << "] : ";
	bool sameTeam = tower.getTeam() == team_;
	if (tower.getHp() != 0) {
		if (sameTeam) {
			std::cout << "Your " << toString(tower.getSide()) << " tower is under attack! [.]";
		}
		else {
			std::cout << "[ _ _ _ ]";
		}
	}
	else {
		std::cout << (sameTeam ? "Your " : "The enemy's ");
		std::cout << toString(tower.getSide());
		std::cout << " tower has fallen. [X]";
	}
	std::cout << std::endl;
}

Player::~Player()
{
	count_--;
}
