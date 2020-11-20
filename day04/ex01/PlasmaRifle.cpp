#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &r) : AWeapon(r.getName(), r.getAPCost(), r.getAPCost())
{
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &r)
{
	AWeapon::operator=(r);
	return *this;
} 

PlasmaRifle::~PlasmaRifle()
{
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
