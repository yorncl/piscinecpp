#if !defined(RADSCORPION_HPP)
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion &operator=(const RadScorpion &);
	virtual ~RadScorpion();
};

#endif // RADSCORPION_HPP
