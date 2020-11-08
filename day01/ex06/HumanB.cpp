#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}