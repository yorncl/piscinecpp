#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < NB_MATERIA; i++)
        _source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
    for (size_t i = 0; i < NB_MATERIA; i++)
    {

        if (m._source[i])
            _source[i] = m._source[i]->clone();
        else
            _source[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &m)
{
    for (size_t i = 0; i < NB_MATERIA; i++)
    {
        if (_source[i])
            delete _source[i];
        if (m._source[i])
            _source[i] = m._source[i]->clone();
        else
            _source[i] = NULL;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < NB_MATERIA; i++)
    if (_source[i])
        delete _source[i];
}

void MateriaSource::learnMateria(AMateria* a)
{
    for (size_t i = 0; i < NB_MATERIA; i++)
    {
        if (_source[i] == NULL)
        {
             _source[i] = a->clone();
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < NB_MATERIA; i++)
    {
        if (_source[i]->getType() == type)
            return _source[i]->clone();
    }
    return 0;
}