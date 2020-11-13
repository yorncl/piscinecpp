#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n)
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
	std::cout << "FR4G-TP " << _name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f)
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
	std::cout << "FR4G-TP " << _name << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << _name << " is desructed!" << std::endl;
}

void FragTrap::addEnergy(int amount)
{
	_energy += amount;
	if (_energy < 0)
		_energy = 0;
	if (_energy > _maxEnergy)
		_energy = _maxEnergy;
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

void FragTrap::takeDamage(unsigned int amount)
{
	int oof = amount;
	oof -= _armor;
	if (oof > 0)
	{
		_hit -= oof;
		if (_hit < 0)
		{
			_hit = 0;
			std::cout << "FR4G-TP " << _name << " just got beaten up to death!" << std::endl;
		}
		else
			std::cout << "FR4G-TP " << _name << " takes " << amount << " damages, losing " << oof << " points of HP!" << std::endl;
	}
	else
		std::cout << "FR4G-TP " << _name << " takes " << amount << " damages, but is protected by his armor!" << std::endl;
};

void FragTrap::beRepaired(unsigned int amount)
{
	_hit += amount;
	if (_hit > _maxHit)
	{
		_hit = _maxHit;
	}
	std::cout << "FR4G-TP " << _name << " is now " << _hit << " HP with " << _energy <<" !" << std::endl;
};

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[] =
	{
		"Step right up, to the Bulletnator 9000!",
		"Heyyah!",
		"Ha ha ha! Fall before your robot overlord!",
		"I am a tornado of death and bullets!",
		"Wow, did I really do that?"
	};
	if (!_hit)
		std::cout << "FR4G-TP " << _name << " NEEDS REPAIR" << std::endl;
	if (_energy < 25)
		std::cout << "FR4G-TP " << _name << " NEEDS ENERGY" << std::endl;
	if (_hit && _energy >= 25)
	{
		addEnergy(-25);
		std::cout << "FR4G-TP says \"" << attacks[std::rand() % 5] << "\" while attacking " << target << std::endl;
	}
}


void FragTrap::print()
{
	std::cout << "--------- FR4G-TP ---------" << std::endl <<
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
