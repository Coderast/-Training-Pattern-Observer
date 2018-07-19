#pragma once

#include <string>

class Tower;

class IObserver
{
public:
	virtual void update(const Tower&) = 0;
};