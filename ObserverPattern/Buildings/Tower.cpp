#include "Tower.h"

Tower::Tower()
{
}

Tower::Tower(Team team, Side side)
{
	setTeam(team);
	setSide(side);
}

void Tower::notifyObservers()
{
	for (auto& player : players_) {
		player->update(*this);
	}
}

Tower::~Tower()
{
	for (const auto& player : players_) {
		delete player;
	}
}
