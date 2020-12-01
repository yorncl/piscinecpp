#include "Blaster.hpp"

Blaster::Blaster() : AWeapon("Blaster", 10, 10)
{
}

Blaster::Blaster(const Blaster &p) : AWeapon(p.getName(), p.getAPCost(), p.getDamage())
{
}

Blaster& Blaster::operator=(const Blaster &p)
{
	AWeapon::operator=(p);
	return *this;
}

Blaster::~Blaster()
{
}

void Blaster::attack() const
{
	std::cout << "* iconic blaster sound *" << std::endl;
}
