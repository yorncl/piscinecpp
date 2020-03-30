#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout << "SCAV-TP " << name << " is born!" << std::endl;
	hit = init_hit;
	maxHit = init_maxHit;
	energy = init_energy;
	maxEnergy = init_maxEnergy;
	level = init_level;
	melee = init_melee;
	ranged = init_ranged;
	armor = init_armor;
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
