#include "Character.hpp"

Character::Character(std::string name) : ICharacter()
{
    _name = name;
    _inventory[0] = NULL;
    _inventory[1] = NULL;
    _inventory[2] = NULL;
    _inventory[3] = NULL;
}

Character::Character(const Character &c) : ICharacter()
{
    _name = c._name;

    for (size_t i = 0; i < 4; i++)
    {

        if (c._inventory[i])
            _inventory[i] = c._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
}

Character& Character::operator=(const Character &c)
{
    _name = c._name;

    for (size_t i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
        if (c._inventory[i])
            _inventory[i] = c._inventory[i]->clone();
        else
            _inventory[i] = 0;
    }
}

Character::~Character()
{
    for (size_t i = 0; i < 4; i++)
        if (_inventory[i])
            delete _inventory[i];
}

void Character::equip(AMateria* m)
{
    for (size_t i = 0; i < 4; i++)
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

