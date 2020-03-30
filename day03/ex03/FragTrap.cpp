#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::cout << "FR4G-TP " << name << " is born!" << std::endl;
	hit = 100;
	maxHit = 100;
	energy = 100;
	maxEnergy = 100;
	level = 1;
	melee = 30;
	ranged = 20;
	armor = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << name << " is desructed!" << std::endl;
}

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
