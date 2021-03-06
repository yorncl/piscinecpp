#if !defined(CURE_HPP)
#define CURE_HPP

#include "AMateria.hpp"
#include <string>

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &);
    Cure &operator=(const Cure &);
    virtual ~Cure();
	void use(ICharacter &target);
    Cure *clone() const;

private:
    
};

#endif // CURE_HPP
