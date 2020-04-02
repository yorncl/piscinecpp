#if !defined(ASSAULTTERMINATOR_HPP)
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &) = default;
	AssaultTerminator &operator=(const AssaultTerminator &) = default;
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	~AssaultTerminator();

private:
	
};

#endif // ASSAULTTERMINATOR_HPP
