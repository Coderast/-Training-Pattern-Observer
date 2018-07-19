#pragma once

#include "IObserver.h"

class IObservable
{
public:
	virtual void notifyObservers() = 0;
	virtual void addObserver(IObserver *) = 0;
	virtual void removeObserver(IObserver *) = 0;
};