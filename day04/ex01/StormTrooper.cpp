#include "StormTrooper.hpp"

StormTrooper::StormTrooper() : Enemy(66, "StormTrooper")
{
    std::cout << "For the empire !" << std::endl;
}

StormTrooper::StormTrooper(const StormTrooper &s) : Enemy(s.getHP(), s.getType())
{
    std::cout << "For the empire !" << std::endl;
}

StormTrooper &StormTrooper::operator=(const StormTrooper &s) {
    Enemy::operator=(s);
	return *this;
}

StormTrooper::~StormTrooper()
{
    std::cout << "Arrrrrrrr....." << std::endl;
}
