#if !defined(AMATERIA_HPP)
#define AMATERIA_HPP

class AMateria
{
private:
	// [...]
	unsigned int _xp;

public:
	AMateria(std::string const &type);
	// [...]
	virtual ~AMateria();
	std::string const &getType() const; //Returns the materia type
	unsigned int getXP() const;			//Returns the Materia's XP
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP
