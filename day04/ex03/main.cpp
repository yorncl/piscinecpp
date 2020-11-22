#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "======== Character tests ========" << std::endl;
    {
        {
            Character a("bob le bricoleur");
            a.equip(new Ice());
            Character b(a);
            Character c("you shall not pass");
            c.equip(new Cure());
            c = a;
            Character d("cible");

            // constructor, copy and assignment
            std::cout << "a: " << a.getName() << std::endl;
            std::cout << "b: " << b.getName() << std::endl;
            std::cout << "c: " << c.getName() << std::endl;
            a.use(0, d);
            b.use(0, d);
            c.use(0, d);
        }

        // Delete while assignment
        {
            Character a("dora l'exploratrice");
            a.equip(new Ice());
            a.equip(new Ice());
            a.equip(new Ice());
            a.equip(new Ice());
            Ice * ptr = new Ice();
            a.equip(ptr); // should do nothing
            delete ptr;
            Character b("babouche");
            b.equip(new Cure());
            a = b;
            a.use(0, b);
        }
        //Range tests
        {
            Character a("Gargantua");
            a.equip(new Ice());
            a.equip(new Ice());
            Character b("Gulliver");
            a.use(-54, b);
            a.use(-1, b);
            a.use(45, b);
            a.use(3, b);
            a.use(2, b);
            a.use(1, b); // only these last two must work
            a.use(0, b);
        }
    }

    std::cout << "======== Materia tests ========" << std::endl;


    std::cout << "======== Subject tests ========" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        return 0;
    }
}