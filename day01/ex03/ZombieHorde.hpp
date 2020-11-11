#if !defined(ZOMBIEHORD_HPP)
#define ZOMBIEHORD_HPP

#include <cstdlib>
#include "Zombie.hpp"


class ZombieHorde
{
private:
	struct WrongSize : public std::exception
	{
		const char * what () const throw ();
	};
	int		_size;
	Zombie*	_horde;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	announce() const;
};

#endif // ZOMBIEHORD_HPP
