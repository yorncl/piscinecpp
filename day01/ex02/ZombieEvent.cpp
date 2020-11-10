#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    
}

ZombieEvent::~ZombieEvent() {
    
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* z;

	z = new Zombie(name, this->type);
	return z;
}

void	ZombieEvent::randomChump()
{
	std::string names[] = {"Bob", "Razowsky", "One", "Punch", "Man", "Coronavirus"};
	Zombie z = Zombie(this->type, names[rand() % 6]);
	z.announce();
}
