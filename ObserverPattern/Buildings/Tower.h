#pragma once
#include <vector>
#include <iostream>

#include "../game_constants.h"
#include "../Observer/IObservable.h"
#include "../Observer/IObserver.h"

class Tower : public IObservable
{
private:
	Team team_;
	Side side_;
	unsigned short healthPoints_;
	std::vector<IObserver*> players_;
public:
	Tower();
	Tower(const Team &team, const Side &side);

	void notifyObservers();
	void addObserver(IObserver* player);
	void removeObserver(IObserver* player);

	inline Team getTeam() const 
	{
		return team_;
	}
	inline void setTeam(const Team &team)
	{
		team_ = team;
	}

	inline Side getSide() const
	{
		return side_;
	}
	inline void setSide(const Side &side)
	{
		side_ = side;
	}

	inline unsigned short getHp() const
	{
		return healthPoints_;
	}
	inline void setHp(unsigned short healthPoints)
	{
		healthPoints_ = healthPoints;
	}

	inline void makeDamage(unsigned short damage)
	{
		std::cout << "===== " << (team_ == RADIANT ? "Radiant's " : "Dire's ");
		std::cout << toString(side_);
		std::cout << " tower got " << damage << " damage =====" << std::endl;
		if (damage < healthPoints_) {
			healthPoints_ -= damage;
		}
		else {
			healthPoints_ = 0;
		}
		notifyObservers();
	}

	virtual ~Tower();
};