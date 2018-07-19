#include <iostream>

#include "Buildings/Tower.h"
#include "Player/Player.h"

int main()
{
	Player you("You", RADIANT);
	Player yourFriend("Friend", RADIANT);
	Player yourEx("Ex", DIRE);

	Tower yourTower(RADIANT, MIDDLE);
	yourTower.addObserver(&you);
	yourTower.addObserver(&yourFriend);
	yourTower.addObserver(&yourEx);

	Tower enemysTower(DIRE, TOP);
	enemysTower.addObserver(&you);
	enemysTower.addObserver(&yourFriend);
	enemysTower.addObserver(&yourEx);

	yourTower.makeDamage(20);
	std::cout << std::endl;

	enemysTower.makeDamage(30);
	std::cout << std::endl;

	yourTower.makeDamage(90);
	std::cout << std::endl;


	std::cout << std::endl;
	system("pause");
	return 0;
}