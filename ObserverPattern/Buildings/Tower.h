#pragma once
#include <vector>

#include "../game_constants.h"
#include "../Observer/IObservable.h"
#include "../Observer/IObserver.h"

class Tower : public IObservable
{
private:
	Team team_;
	Side side_;
	unsigned short healthPoionts_;
	std::vector<IObserver*> players_;
public:
	Tower();
	Tower(Team team, Side side);

	void notifyObservers();

	inline Team getTeam() 
	{
		return team_;
	}
	inline void setTeam(Team team)
	{
		team_ = team;
	}

	inline Side getSide()
	{
		return side_;
	}
	inline void setSide(Side side)
	{
		side_ = side;
	}

	inline unsigned short getHp()
	{
		return healthPoionts_;
	}
	inline void setHp(unsigned short healthPoints)
	{
		healthPoionts_ = healthPoints;
	}

	inline void getDamage(unsigned short damage)
	{
		if (damage < healthPoionts_) {
			healthPoionts_ -= damage;
		}
		else {
			healthPoionts_ = 0;
		}
		notifyObservers();
	}

	virtual ~Tower();
};