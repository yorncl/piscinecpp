#if !defined(CHARACTER_HPP)
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

#define NB_MATERIA 4

class Character : public ICharacter
{
public:
    Character();
    Character(std::string name);
    Character(const Character &);
    Character &operator=(const Character &);
    virtual ~Character();
    const std::string &getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

private:
    AMateria *_inventory[NB_MATERIA];
    std::string _name;
};

#endif // CHARACTER_HPP
