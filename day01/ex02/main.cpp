#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <ctime>

int main(void)
{
	std::srand(time(NULL));
	
	std::cout << "====== ZOMBIE TESTS ======" << std::endl;
	Zombie x("Rampant", "Mistigri");
	x.announce();
	Zombie y("Rampant");
	y.announce();
	
	std::cout << "====== EVENT TESTS ======" << std::endl;
	ZombieEvent z = ZombieEvent();
	z.setZombieType("Volant");
	Zombie* heap = z.newZombie("Marcel");
	heap->announce();
	delete heap;
	
	std::cout << "====== RANDOM TESTS ======" << std::endl;
	z.setZombieType();
	z.randomChump();
	z.randomChump();
	z.randomChump();
	z.randomChump();
	z.randomChump();
	z.setZombieType("RANDOM");
	z.randomChump();
	z.randomChump();
	z.randomChump();
	z.randomChump();
	return 0;
}
