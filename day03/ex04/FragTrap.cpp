#include "FragTrap.hpp"

const int FragTrap::init_hit = 100;
const int FragTrap::init_maxHit = 100;
const int FragTrap::init_energy = 100;
const int FragTrap::init_maxEnergy = 100;
const int FragTrap::init_level = 1;
const int FragTrap::init_melee = 30;
const int FragTrap::init_ranged = 20;
const int FragTrap::init_armor = 5;

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	_hit = init_hit;
	_maxHit = init_maxHit;
	_energy = init_energy;
	_maxEnergy = init_maxEnergy;
	_level = init_level;
	_melee = init_melee;
	_ranged = init_ranged;
	_armor = init_armor;
	std::cout << "FR4G-TP " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f._name)
{
    _hit = f._hit;
	_maxHit = f._maxHit;
	_energy = f._energy;
	_maxEnergy = f._maxEnergy;
	_level = f._level;
	_melee = f._melee;
	_ranged = f._ranged;
	_armor = f._armor;
	std::cout << "FR4G-TP " << _name << " is born!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &f)
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

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << " is desructed!" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	if (!_hit)
		std::cout << "FR4G-TP " << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 10)
		std::cout << "FR4G-TP " << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 10)
	{
		addEnergy(-10);
		std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _ranged << " points of damage!" << std::endl;
	}
};

void FragTrap::meleeAttack(std::string const &target)
{
	if (!_hit)
		std::cout << "FR4G-TP " << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 10)
		std::cout << "FR4G-TP " << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 10)
	{
		addEnergy(-10);
		std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " << _melee << " points of damage!" << std::endl;
	}
};

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[] = {"Dab sur", "dance la polka sur", "apprends le suedois à", "detruit les espoirs de", "report pour wall-hack ce satané"};

	if (!_hit)
		std::cout << "FR4G-TP " << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 25)
		std::cout << "FR4G-TP " << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 25)
	{
		addEnergy(-25);
		std::cout << "FR4G-TP " << _name << " " << attacks[std::rand() % 5] << " " << target << " at melee, causing " << _melee << " points of damage!" << std::endl;
	}
}


