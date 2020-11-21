#include "AMateria.hpp"


AMateria::AMateria(std::string const &type)
{
    _xp = 0;
    _type = type;
}


AMateria::AMateria(const AMateria &a)
{
    _xp = a._xp;
    _type = a._type;
}

AMateria& AMateria::operator=(const AMateria &a)
{
    _xp = a._xp;
    _type = a._type;
}

AMateria::~AMateria()
{
}

const std::string& AMateria::getType() const
{
    return _type;
}

unsigned int AMateria::getXP() const
{
    return _xp;
}

void AMateria::use(ICharacter &target)
{
    (void) target;
    _xp += 10;
}
