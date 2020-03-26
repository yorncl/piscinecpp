#if !defined(ZOMBIEEVENT_HPP)
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>

class ZombieEvent
{
private:
	std::string type;
public:
	void	setZombieType(std::string type = "default");
	Zombie*	newZombie(std::string name = "ABCDEF");
	void	randomChump();
};
#endif // ZOMBIEEVENT_HPP