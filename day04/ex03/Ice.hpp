#if !defined(ICE_HPP)
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &);
    Ice &operator=(const Ice &);
    ~Ice();
	void use(ICharacter &target);
    Ice *clone() const;

private:
    
};

#endif // ICE_HPP
