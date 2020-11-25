#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &s) : Enemy(s.getHP(), s.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant& SuperMutant::operator=(const SuperMutant &s)
{
	Enemy::operator=(s);
	return *this;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage - 3);
}
