#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout << "SCAV-TP " << name << " is born!" << std::endl;
	hit = 100;
	maxHit = 100;
	energy = 50;
	maxEnergy = 50;
	level = 1;
	melee = 20;
	ranged = 15;
	armor = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP " << name << " is destructed!" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::string attacks[] = {"doing a backflip", "doing a barrell roll", "going to jail", "playing minecraft", "buying groceries"};
	std::cout << "SCAV-TP " << name << " is " << attacks[rand() % 5]  << " !" << std::endl;
}
