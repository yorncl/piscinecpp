#if !defined(ZOMBIEEVENT_HPP)
#define ZOMBIEEVENT_HPP

#include <cstdlib>
#include <string>

#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	ZombieEvent(const ZombieEvent &);
	~ZombieEvent();

private:
	std::string type;
public:
	void	setZombieType(std::string type = "default");
	Zombie*	newZombie(std::string name = "ABCDEF");
	void	randomChump();
};
#endif // ZOMBIEEVENT_HPP