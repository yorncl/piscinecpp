#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &i) : AMateria(i)
{
    (void) i;
}

Ice &Ice::operator=(const Ice &i)
{
    AMateria::operator=(i);
    return *this;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at "<< target.getName() <<"*" << std::endl;
}

Ice* Ice::clone() const
{
    return new Ice(*this);
}
