#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon)
{
	this->weapon = weapon;
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}