#if !defined(AMATERIA_HPP)
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string _type;
	unsigned int _xp;

public:
	AMateria(std::string const &type);
	AMateria(const AMateria &);
	AMateria& operator=(const AMateria &);
	virtual ~AMateria();
	std::string const &getType() const;
	unsigned int getXP() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP
