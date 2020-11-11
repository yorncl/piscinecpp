
#if !defined(HUMANA_HPP)
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon; // Doesn't change after initialization, best to use a reference that can't be modified afterward

public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
	~HumanA();
};
#endif // HUMANA_HPP