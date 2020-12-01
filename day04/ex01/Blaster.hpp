#if !defined(BLASTER_HPP)
#define BLASTER_HPP

#include "AWeapon.hpp"
#include <iostream>
#include <string>
class Blaster : public AWeapon
{
public:
	Blaster();
	Blaster(const Blaster &);
	Blaster &operator=(const Blaster &);
	virtual ~Blaster();
	void attack() const;
};
#endif // BLASTER_HPP
