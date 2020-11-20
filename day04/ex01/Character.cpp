#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(0)
{
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
	if (_ap > 40)
		_ap = 40;	
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
	std::cout << _name << " attacks " << enemy->getType() << " with " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	_ap -= apcost;
}

std::string const Character::getName() const
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
