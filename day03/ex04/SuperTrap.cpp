#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string n) : ClapTrap(n), FragTrap(n), NinjaTrap(n)
{
	_hit = FragTrap::init_hit;
	_maxHit = FragTrap::init_maxHit;
	_energy = NinjaTrap::init_energy;
	_maxEnergy = NinjaTrap::init_maxEnergy;
	_level = 1;
	_melee = NinjaTrap::init_melee;
	_ranged = FragTrap::init_ranged;
	_armor = FragTrap::init_armor;
	std::cout << "SUPER-TP " << _name << " is born!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER-TP " << _name << " is desructed!" << std::endl;
}
