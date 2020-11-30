#if !defined(ASSAULTTERMINATOR_HPP)
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator &operator=(const AssaultTerminator &);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	virtual ~AssaultTerminator();

private:
	
};

#endif // ASSAULTTERMINATOR_HPP
