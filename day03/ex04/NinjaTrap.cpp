#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	std::cout << "NINJA-TP " << name << " is born!" << std::endl;
	hit = init_hit;
	maxHit = init_maxHit;
	energy = init_energy;
	maxEnergy = init_maxEnergy;
	level = init_level;
	melee = init_melee;
	ranged = init_ranged;
	armor = init_armor;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJA-TP " << name << " is desructed!" << std::endl;
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

void NinjaTrap::meleeAttack(std::string const &target)
{
	if (!hit)
		std::cout << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << "NINJA-TP " << name << " attacks " << target << " at melee, causing " << melee << " points of damage!" << std::endl;
	}
};