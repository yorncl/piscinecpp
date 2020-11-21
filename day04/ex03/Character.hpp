#if !defined(CHARACTER_HPP)
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define NB_MATERIA 4

class Character : public ICharacter
{
public:
    Character(std::string name);
    Character(const Character &);
    Character &operator=(const Character &);
    ~Character();
    const std::string &getName();
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

private:
    AMateria *_inventory[4];
    std::string _name;
};

#endif // CHARACTER_HPP
