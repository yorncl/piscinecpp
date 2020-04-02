#if !defined(POWERFIST_HPP)
#define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>
#include <string>
class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &) = default;
	PowerFist &operator=(const PowerFist &) = default;
	~PowerFist();
	void attack() const;
};
#endif // POWERFIST_HPP
