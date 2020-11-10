#if !defined(ZOMBIEHORD_HPP)
#define ZOMBIEHORD_HPP

#include <cstdlib>
#include "Zombie.hpp"


class ZombieHorde
{
private:
	struct WrongSize : public std::exception
	{
		const char * what () const throw ()
		{
			return "Horde size must be positive";
		}
	};
	int		_size;
	Zombie*	_horde;
public:
	ZombieHorde();
	ZombieHorde(int n);
	ZombieHorde(const ZombieHorde &);
	ZombieHorde &operator=(const ZombieHorde &);
	~ZombieHorde();
	void	announce() const;
};

#endif // ZOMBIEHORD_HPP
