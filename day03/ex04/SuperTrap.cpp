#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string n) : ClapTrap (n), FragTrap(n), NinjaTrap(n)
{
	std::cout << "SUPER-TP " << name << " is born!" << std::endl;
	hit = FragTrap::init_hit;
	maxHit = FragTrap::init_maxHit;
	energy = NinjaTrap::init_energy;
	maxEnergy = NinjaTrap::init_maxEnergy;
	level = init_level;
	melee = NinjaTrap::init_melee;
	ranged = FragTrap::init_ranged;
	armor = FragTrap::init_armor;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER-TP " << name << " is desructed!" << std::endl;
}

void SuperTrap::printAttributes()
{
	std::cout << "name " << name << std::endl;
	std::cout << "Hit " << hit << std::endl;
	std::cout << "maxHit " << maxHit << std::endl;
	std::cout << "energy " << energy << std::endl;
	std::cout << "maxEnergy " << maxEnergy << std::endl;
	std::cout << "level " << level << std::endl;
	std::cout << "melee " << melee << std::endl;
	std::cout << "ranged " << ranged << std::endl;
	std::cout << "armor " << armor << std::endl;
}
