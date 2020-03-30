#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::cout << "FR4G-TP " << name << " is born!" << std::endl;
	hit = init_hit;
	maxHit = init_maxHit;
	energy = init_energy;
	maxEnergy = init_maxEnergy;
	level = init_level;
	melee = init_melee;
	ranged = init_ranged;
	armor = init_armor;
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

void FragTrap::rangedAttack(std::string const &target)
{
	if (!hit)
		std::cout << name << " NEEDS REPAIR" << std::endl;
	if (energy < 10)
		std::cout << name << " NEEDS ENERGY" << std::endl;
	if (hit && energy >= 10)
	{
		addEnergy(-10);
		std::cout << "FRAG-TP " << name << " attacks " << target << " at range, causing " << ranged << " points of damage!" << std::endl;
	}
};