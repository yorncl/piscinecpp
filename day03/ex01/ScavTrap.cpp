#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n)
{
	std::cout << "SCAV-TP " << name << " is born!" << std::endl;
	hit = 100;
	maxHit = 100;
	energy = 50;
	maxEnergy = 50;
	level = 1;
	name = n;
	melee = 20;
	ranged = 15;
	armor = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP " << name << " is destructed!" << std::endl;
}

void ScavTrap::addEnergy(int amount)
{
	energy += amount;
	if (energy < 0)
		energy = 0;
	if (energy > maxEnergy)
		energy = maxEnergy;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	if (!hit)
		std::cout << "SCAV-TP " << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << "SCAV-TP " << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << "SCAV-TP " << name << " attacks " << target << " at range, causing " << ranged << " points of damage!" << std::endl;
	}
};

void ScavTrap::meleeAttack(std::string const &target)
{
	if (!hit)
		std::cout << "SCAV-TP " << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << "SCAV-TP " << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << "SCAV-TP " << name << " attacks " << target << " at melee, causing " << melee << " points of damage!" << std::endl;
	}
};

void ScavTrap::takeDamage(unsigned int amount)
{
	int oof = amount;
	oof -= armor;
	if (oof > 0)
	{
		hit -= oof;
		if (hit < 0)
		{
			hit = 0;
			std::cout << "SCAV-TP " << name << " just got beaten up to death!" << std::endl;
		}
		else
			std::cout << "SCAV-TP " << name << " takes " << amount << " damages, losing " << oof << " points of HP!" << std::endl;
	}
	else
		std::cout << "SCAV-TP " << name << " takes " << amount << " damages, but is protected by his armor!" << std::endl;
};

void ScavTrap::beRepaired(unsigned int amount)
{
	hit += amount;
	if (hit > maxHit)
	{
		hit = maxHit;
	}
	std::cout << "SCAV-TP " << name << " is now " << hit << " HP!" << std::endl;
};

void ScavTrap::challengeNewcomer()
{
	std::string attacks[] = {"doing a backflip", "doing a barrell roll", "going to jail", "playing minecraft", "buying groceries"};
	std::cout << "SCAV-TP " << name << " is " << attacks[rand() % 5]  << " !" << std::endl;
}
