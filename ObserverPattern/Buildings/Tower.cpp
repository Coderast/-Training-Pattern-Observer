#include "Tower.h"

Tower::Tower()
{
	healthPoints_ = 100;
}

Tower::Tower(const Team& team, const Side& side) : Tower()
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

void Tower::addObserver(IObserver * player)
{
	players_.push_back(player);
}

void Tower::removeObserver(IObserver * player)
{
	auto iter = players_.begin();
	for (; iter != players_.end() && *iter != player; iter++);
	if (iter != players_.end()) {
		players_.erase(iter);
	}
}

Tower::~Tower()
{
}
