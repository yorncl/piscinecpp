#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &c) : AMateria(c)
{
    (void) c;
}

Cure &Cure::operator=(const Cure &c)
{
    AMateria::operator=(c);
    return *this;
}

Cure::~Cure()
{    
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
    return new Cure();
}