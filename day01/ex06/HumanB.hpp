
#if !defined(HUMANB_HPP)
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string name, Weapon* weapon = 0);
	void setWeapon(Weapon& weapon);
	void attack();
};
#endif // HUMANA_HPP