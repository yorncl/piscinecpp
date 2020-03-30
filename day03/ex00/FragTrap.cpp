#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n)
{
	hit = 100;
	maxHit = 100;
	energy = 100;
	maxEnergy = 100;
	level = 1;
	name = n;
	melee = 30;
	ranged = 20;
	armor = 5;
}

FragTrap::~FragTrap()
{
}

void FragTrap::addEnergy(int amount)
{
	energy += amount;
	if (energy < 0)
		energy = 0;
	if (energy > maxEnergy)
		energy = maxEnergy;
}

void FragTrap::rangedAttack(std::string const &target)
{
	if (!hit)
		std::cout << "FR4G-TP " << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << "FR4G-TP " << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << ranged << " points of damage!" << std::endl;
	}
};

void FragTrap::meleeAttack(std::string const &target)
{
	if (!hit)
		std::cout << "FR4G-TP " << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << "FR4G-TP " << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << melee << " points of damage!" << std::endl;
	}
};

void FragTrap::takeDamage(unsigned int amount)
{
	int oof = amount;
	oof -= armor;
	if (oof > 0)
	{
		hit -= oof;
		if (hit < 0)
		{
			hit = 0;
			std::cout << "FR4G-TP " << name << " just got beaten up to death!" << std::endl;
		}
		else
			std::cout << "FR4G-TP " << name << " takes " << amount << " damages, losing " << oof << " points of HP!" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << name << " takes " << amount << " damages, but is protected by his armor!" << std::endl;
};

void FragTrap::beRepaired(unsigned int amount)
{
	hit += amount;
	if (hit > maxHit)
	{
		hit = maxHit;
	}
	std::cout << "FR4G-TP " << name << " is now " << hit << " HP!" << std::endl;
};

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[] = {"Dab sur", "dance la polka sur", "apprends le suedois à", "detruit les espoirs de", "report pour wall-hack ce satané"};

	if (!hit)
		std::cout << "FR4G-TP " << name << " NEEDS REPAIR" << std::endl;
	if (energy < 25)
		std::cout << "FR4G-TP " << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 25)
	{
		addEnergy(-25);
		std::cout << "FR4G-TP " << name << " " << attacks[rand() % 5] << " " << target << " at melee, causing " << melee << " points of damage!" << std::endl;
	}
}
