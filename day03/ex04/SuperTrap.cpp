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

SuperTrap::SuperTrap(const SuperTrap &f) : ClapTrap(f._name), FragTrap(f._name), NinjaTrap(f._name)
{
    _hit = f._hit;
	_maxHit = f._maxHit;
	_energy = f._energy;
	_maxEnergy = f._maxEnergy;
	_level = f._level;
	_melee = f._melee;
	_ranged = f._ranged;
	_armor = f._armor;
	std::cout << "NINJA-TP " << _name << " is born!" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap &f)
{
	_hit = f._hit;
	_maxHit = f._maxHit;
	_energy = f._energy;
	_maxEnergy = f._maxEnergy;
	_level = f._level;
	_name = f._name;
	_melee = f._melee;
	_ranged = f._ranged;
	_armor = f._armor;
	return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SUPER-TP " << _name << " is desructed!" << std::endl;
}
