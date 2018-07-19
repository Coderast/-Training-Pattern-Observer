#pragma once

#include <string>

#include "../game_constants.h"
#include "../Observer/IObserver.h"
#include "../Buildings/Tower.h"

class Player : public IObserver
{
private:
	std::string nickname_;
	Side side_;

	static int count_;
public:
	Player();
	Player(std::string nickname);

	void update(const Tower &tower);

	inline void setNickname(std::string nickname)
	{
		nickname_ = nickname;
	}
	inline std::string getNickname()
	{
		return nickname_;
	}

	inline Side getSide()
	{
		return side_;
	}
	inline void setSide(Side side)
	{
		side_ = side;
	}

	virtual ~Player();
};