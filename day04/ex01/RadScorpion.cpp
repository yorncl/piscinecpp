#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &r) : Enemy(r.getHP(), r.getType())
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion& RadScorpion::operator=(const RadScorpion &r)
{
	Enemy::operator=(r);
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
