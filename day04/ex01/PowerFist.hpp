#if !defined(POWERFIST_HPP)
#define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>
#include <string>
class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &);
	PowerFist &operator=(const PowerFist &);
	virtual ~PowerFist();
	void attack() const;
};
#endif // POWERFIST_HPP
