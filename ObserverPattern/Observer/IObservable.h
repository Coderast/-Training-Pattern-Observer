#pragma once

class IObservable
{
public:
	virtual void notifyObservers() = 0;
};