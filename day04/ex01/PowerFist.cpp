#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &p) : AWeapon(p.getName(), p.getAPCost(), p.getDamage())
{
}

PowerFist& PowerFist::operator=(const PowerFist &p)
{
	AWeapon::operator=(p);
	return *this;
}

PowerFist::~PowerFist()
{
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
