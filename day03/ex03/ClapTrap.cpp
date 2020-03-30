#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n)
{
	name = n;
	std::cout << "CLAP-TP " << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAP-TP " << name << " is desructed!" << std::endl;
}

void ClapTrap::addEnergy(int amount)
{
	energy += amount;
	if (energy < 0)
		energy = 0;
	if (energy > maxEnergy)
		energy = maxEnergy;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	if (!hit)
		std::cout << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << name << " attacks " << target << " at range, causing " << ranged << " points of damage!" << std::endl;
	}
};

void ClapTrap::meleeAttack(std::string const &target)
{
	if (!hit)
		std::cout << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << name << " attacks " << target << " at melee, causing " << melee << " points of damage!" << std::endl;
	}
};

void ClapTrap::takeDamage(unsigned int amount)
{
	int oof = amount;
	oof -= armor;
	if (oof > 0)
	{
		hit -= oof;
		if (hit < 0)
		{
			hit = 0;
			std::cout << name << " just got beaten up to death!" << std::endl;
		}
		else
			std::cout << name << " takes " << amount << " damages, losing " << oof << " points of HP!" << std::endl;
	}
	else
		std::cout << name << " takes " << amount << " damages, but is protected by his armor!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
	hit += amount;
	if (hit > maxHit)
	{
		hit = maxHit;
	}
	std::cout << name << " is now " << hit << " HP!" << std::endl;
};