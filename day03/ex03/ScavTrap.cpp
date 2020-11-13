#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	_hit = 100;
	_maxHit = 100;
	_energy = 50;
	_maxEnergy = 50;
	_level = 1;
	_melee = 20;
	_ranged = 15;
	_armor = 3;
	std::cout << "SCAV-TP " << _name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f) : ClapTrap(f._name)
{
    _hit = f._hit;
	_maxHit = f._maxHit;
	_energy = f._energy;
	_maxEnergy = f._maxEnergy;
	_level = f._level;
	_melee = f._melee;
	_ranged = f._ranged;
	_armor = f._armor;
	std::cout << "SCAV-TP " << _name << " is born!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &f)
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

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP " << _name << " is destructed!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::string attacks[] = {"doing a backflip", "doing a barrell roll", "going to jail", "playing minecraft", "buying groceries"};
	std::cout << "SCAV-TP " << _name << " is " << attacks[std::rand() % 5]  << " !" << std::endl;
}
