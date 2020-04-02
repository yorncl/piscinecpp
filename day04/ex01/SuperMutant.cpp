#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super mutant")
{
	std::cout << "aaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage - 3);
}
