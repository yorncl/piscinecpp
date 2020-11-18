#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n)
{
	_name = n;
	_hit = 0;
	_maxHit = 0;
	_energy = 0;
	_maxEnergy = 0;
	_level = 0;
	_melee = 0;
	_ranged = 0;
	_armor = 0;
	std::cout << "CLAP-TP " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
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
	std::cout << "CLAP-TP " << _name << " is born!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &f)
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

ClapTrap::~ClapTrap()
{
	std::cout << "CLAP-TP " << _name << " is desructed!" << std::endl;
}

void ClapTrap::addEnergy(int amount)
{
	_energy += amount;
	if (_energy < 0)
		_energy = 0;
	if (_energy > _maxEnergy)
		_energy = _maxEnergy;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	if (!_hit)
		std::cout << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 10)
		std::cout << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 10)
	{
		addEnergy(-10);
		std::cout << _name << " attacks " << target << " at range, causing " << _ranged << " points of damage!" << std::endl;
	}
}

void ClapTrap::meleeAttack(std::string const &target)
{
	if (!_hit)
		std::cout << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 10)
		std::cout << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 10)
	{
		addEnergy(-10);
		std::cout << _name << " attacks " << target << " at melee, causing " << _melee << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int oof = amount;
	oof -= _armor;
	if (oof > 0)
	{
		_hit -= oof;
		if (_hit <= 0)
		{
			_hit = 0;
			std::cout << _name << " just got beaten up to death!" << std::endl;
		}
		else
			std::cout << _name << " takes " << amount << " damages, losing " << oof << " points of HP!" << std::endl;
	}
	else
		std::cout << _name << " takes " << amount << " damages, but is protected by his armor!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hit += amount;
	if (_hit > _maxHit)
	{
		_hit = _maxHit;
	}
	std::cout << _name << " is now " << _hit << " HP!" << std::endl;
}

void ClapTrap::print()
{
	std::cout << "--------- CLAP-TP ---------" << std::endl <<
	"_hit : " << _hit << std::endl <<
	"_maxHit : " << _maxHit << std::endl <<
	"_energy : " << _energy << std::endl <<
	"_maxEnergy : " << _maxEnergy << std::endl <<
	"_level : " << _level << std::endl <<
	"_name : " << _name << std::endl <<
	"_melee : " << _melee << std::endl <<
	"_ranged : " << _ranged << std::endl <<
	"_armor : " << _armor << std::endl <<
	"-------------------------" << std::endl;
}