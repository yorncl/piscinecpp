#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	std::cout << "NINJA-TP " << name << " is born!" << std::endl;
	hit = 60;
	maxHit = 60;
	energy = 120;
	maxEnergy = 120;
	level = 1;
	melee = 60;
	ranged = 5;
	armor = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NINJA-TP " << name << " is desructed!" << std::endl;
}

void ninjaShoebox(ScavTrap& s)
{
	s.takeDamage(10);
	std::cout << "NINJA-TP - Get Scavtrapped!" << std::endl;
};
void ninjaShoebox(FragTrap& f)
{
	f.takeDamage(10);
	std::cout << "NINJA-TP - Get Fragtrapped!" << std::endl;
};
void ninjaShoebox(NinjaTrap& n)
{
	n.takeDamage(10);
	std::cout << "NINJA-TP - bruh, we're on the same team >:[" << std::endl;
};