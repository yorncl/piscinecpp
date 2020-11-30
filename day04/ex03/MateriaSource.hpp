#if !defined(MATERIASOURCE_HPP)
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define NB_MATERIA 4

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource &);
    MateriaSource &operator=(const MateriaSource &);
    virtual ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

private:
    AMateria* _source[NB_MATERIA];
};

#endif // MATERIASOURCE_HPP
