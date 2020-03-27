
#if !defined(HUMANA_HPP)
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;

public:
	HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {};
	void attack();
};
#endif // HUMANA_HPP