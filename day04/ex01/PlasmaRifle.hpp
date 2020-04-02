#if !defined(PLASMARIFLE_HPP)
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>
#include <string>
class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &) = default;
	PlasmaRifle &operator=(const PlasmaRifle &) = default;
	~PlasmaRifle();
	void attack() const;
};
#endif // PLASMARIFLE_HPP
