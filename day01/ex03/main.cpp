#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
	std::cout << "====== BASIC TESTS ======" << std::endl;
	Zombie x("Rampant", "Mistigri");
	x.advert();
	Zombie y("Rampant");
	y.advert();
	
	std::cout << "====== EVENT TESTS ======" << std::endl;
	ZombieEvent z = ZombieEvent();
	z.setZombieType("Volant");
	Zombie* heap = z.newZombie("Marcel");
	heap->advert();
	delete heap;
	
	std::cout << "====== RANDOM TESTS ======" << std::endl;
	z.setZombieType();
	z.randomChump();
	z.randomChump();
	z.randomChump();
	z.randomChump();
	z.randomChump();
	return 0;
}
