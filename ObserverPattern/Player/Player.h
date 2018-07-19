#pragma once

#include <string>

#include "../game_constants.h"
#include "../Observer/IObserver.h"
#include "../Buildings/Tower.h"

class Player : public IObserver
{
private:
	std::string nickname_;
	Team team_;

	static unsigned __int8 count_;
public:
	Player();
	Player(const std::string &nickname, const Team& team);

	void update(const Tower &tower);

	inline void setNickname(const std::string &nickname)
	{
		nickname_ = nickname;
	}
	inline std::string getNickname() const
	{
		return nickname_;
	}

	inline Team getTeam() const
	{
		return team_;
	}
	inline void setTeam(const Team &team)
	{
		team_ = team;
	}

	virtual ~Player();
};