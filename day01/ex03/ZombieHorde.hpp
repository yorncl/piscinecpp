#if !defined(ZOMBIEHORD_HPP)
#define ZOMBIEHORD_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie* arr;
public:
	ZombieHorde(int n);
	ZombieHorde(const ZombieHorde &);
	ZombieHorde &operator=(const ZombieHorde &);
	~ZombieHorde();
};

#endif // ZOMBIEHORD_HPP
