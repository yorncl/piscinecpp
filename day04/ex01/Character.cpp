#include "Character.hpp"

Character::Character()
{
	_name = "default";
	_ap = CHARACTER_MAX_AP;
	_weapon = NULL;
}

Character::Character(std::string const &name)
{
	_name = name;
	_ap = CHARACTER_MAX_AP;
	_weapon = NULL;
}

Character::Character(const Character& c)
{
	_name = c._name;
	_ap = c._ap;
	_weapon = c._weapon;
}

Character & Character::operator=(const Character& c)
{
	_name = c._name;
	_ap = c._ap;
	_weapon = c._weapon;
	return *this;
}

Character::~Character()
{
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > CHARACTER_MAX_AP)
		_ap = CHARACTER_MAX_AP;	
}

void Character::equip(AWeapon *w)
{
	_weapon = w;
}

void Character::attack(Enemy *enemy)
{
	if (!_weapon)
		return;
	int apcost = _weapon->getAPCost();
	if (apcost > _ap)
		return;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	_ap -= apcost;
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const &Character::getName() const
{
	return _name;
}

int Character::getAp() const
{
	return _ap;
}

AWeapon* Character::getWeapon() const
{
	return _weapon;
}

std::ostream &operator<<(std::ostream& os, Character& c)
{
	if (c.getWeapon())
		os << c.getName() << " has " << c.getAp() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		os << c.getName() << " has " << c.getAp() << " AP and is unarmed" << std::endl;
	return os;
}
