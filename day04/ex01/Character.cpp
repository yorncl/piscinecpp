#include "Character.hpp"

Character::Character(std::string const &name) : name(name), ap(40), weapon(0)
{
}

Character::~Character()
{
}

void Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;	
}

void Character::equip(AWeapon *w)
{
	weapon = w;
}

void Character::attack(Enemy *enemy)
{
	if (!weapon)
		return;
	int apcost = weapon->getAPCost();
	if (apcost > ap)
		return;
	std::cout << name << " attacks " << enemy->getType() << " with " << weapon->getName() << std::endl;
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());
	ap -= apcost;
}

std::string const Character::getName() const
{
	return name;
}

int Character::getAp() const
{
	return ap;
}

AWeapon* Character::getWeapon() const
{
	return weapon;
}

std::ostream &operator<<(std::ostream& os, Character& c)
{
	if (c.getWeapon())
		os << c.getName() << " has " << c.getAp() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		os << c.getName() << " has " << c.getAp() << " AP and is unarmed" << std::endl;
	return os;
}
