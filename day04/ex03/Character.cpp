#include "Character.hpp"

Character::Character(std::string name) : ICharacter()
{
    _name = name;
    for (size_t i = 0; i < NB_MATERIA; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character &c) : ICharacter()
{
    _name = c._name;

    for (size_t i = 0; i < NB_MATERIA; i++)
    {

        if (c._inventory[i])
            _inventory[i] = c._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character &c)
{
    _name = c._name;

    for (size_t i = 0; i < NB_MATERIA; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
        if (c._inventory[i])
            _inventory[i] = c._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character::~Character()
{
    for (size_t i = 0; i < NB_MATERIA; i++)
        if (_inventory[i])
            delete _inventory[i];
}

void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < NB_MATERIA; i++)
    {
        if (_inventory[i] == NULL)
        {
             _inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (_inventory[idx])
    {
        _inventory[idx]->use(target);
    }
}

