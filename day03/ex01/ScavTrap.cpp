#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n)
{
	_hit = 100;
	_maxHit = 100;
	_energy = 100;
	_maxEnergy = 100;
	_level = 1;
	_name = n;
	_melee = 30;
	_ranged = 20;
	_armor = 5;
	std::cout << "SCAV-TP " << _name << " is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f)
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
	std::cout << "SCAV-TP " << _name << " is born!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &f)
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

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP " << _name << " is desructed!" << std::endl;
}

void ScavTrap::addEnergy(int amount)
{
	_energy += amount;
	if (_energy < 0)
		_energy = 0;
	if (_energy > _maxEnergy)
		_energy = _maxEnergy;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	if (!_hit)
		std::cout << "SCAV-TP " << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 10)
		std::cout << "SCAV-TP " << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 10)
	{
		addEnergy(-10);
		std::cout << "SCAV-TP " << _name << " attacks " << target << " at range, causing " << _ranged << " points of damage!" << std::endl;
	}
};

void ScavTrap::meleeAttack(std::string const &target)
{
	if (!_hit)
		std::cout << "SCAV-TP " << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 10)
		std::cout << "SCAV-TP " << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 10)
	{
		addEnergy(-10);
		std::cout << "SCAV-TP " << _name << " attacks " << target << " at melee, causing " << _melee << " points of damage!" << std::endl;
	}
};

void ScavTrap::takeDamage(unsigned int amount)
{
	int oof = amount;
	oof -= _armor;
	if (oof > 0)
	{
		_hit -= oof;
		if (_hit < 0)
		{
			_hit = 0;
			std::cout << "SCAV-TP " << _name << " just got beaten up to death!" << std::endl;
		}
		else
			std::cout << "SCAV-TP " << _name << " takes " << amount << " damages, losing " << oof << " points of HP!" << std::endl;
	}
	else
		std::cout << "SCAV-TP " << _name << " takes " << amount << " damages, but is protected by his armor!" << std::endl;
};

void ScavTrap::beRepaired(unsigned int amount)
{
	_hit += amount;
	if (_hit > _maxHit)
	{
		_hit = _maxHit;
	}
	std::cout << "SCAV-TP " << _name << " is now " << _hit << " HP !" << std::endl;
};

void ScavTrap::print()
{
	std::cout << "--------- SCAV-TP ---------" << std::endl <<
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

void ScavTrap::challengeNewcomer()
{
	std::string attacks[] = {"doing a backflip", "doing a barrell roll", "going to jail", "playing minecraft", "buying groceries"};
	std::cout << "SCAV-TP " << _name << " is " << attacks[rand() % 5]  << " !" << std::endl;
}
