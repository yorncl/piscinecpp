#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	_hit = 60;
	_maxHit = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_melee = 60;
	_ranged = 5;
	_armor = 0;
	std::cout << "NINJA-TP " << _name << " is born!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &f) : ClapTrap(f._name)
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

NinjaTrap& NinjaTrap::operator=(const NinjaTrap &f)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJA-TP " << _name << " is desructed!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& s)
{
	s.takeDamage(10);
	std::cout << "NINJA-TP - Get Scavtrapped!" << std::endl;
};
void NinjaTrap::ninjaShoebox(FragTrap& f)
{
	f.takeDamage(10);
	std::cout << "NINJA-TP - Get Fragtrapped!" << std::endl;
};
void NinjaTrap::ninjaShoebox(NinjaTrap& n)
{
	n.takeDamage(10);
	std::cout << "NINJA-TP - bruh, we're on the same team >:[" << std::endl;
};