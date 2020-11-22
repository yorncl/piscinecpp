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
    std::cout << std::endl;
    std::cout << "======== Materia Source tests ========" << std::endl;
    {
        // Constructor and assignation tests
        MateriaSource m = MateriaSource();
        m.learnMateria(new Cure());
        MateriaSource m2(m);
        MateriaSource m3 = MateriaSource();
        m3.learnMateria(new Cure());
        m3 = m;

        AMateria *p1; AMateria *p2; AMateria *p3;
        p1 = m.createMateria("cure");
        p2 = m2.createMateria("cure");
        p3 = m3.createMateria("cure");

        std::cout << "materia: " << p1->getType() << " " << p1->getXP() << std::endl;
        std::cout << "materia: " << p2->getType() << " " << p2->getXP() << std::endl;
        std::cout << "materia: " << p3->getType() << " " << p3->getXP() << std::endl;

        delete p1;
        delete p2;
        delete p3;
    }
    {
        // Range tests
        MateriaSource *m = new MateriaSource();
        m->learnMateria(new Ice());
        m->learnMateria(new Ice());
        m->learnMateria(new Ice());
        m->learnMateria(new Ice());
        AMateria *p = new Cure();
        m->learnMateria(p); // should do nothing
        std::cout << "Should be null: " << m->createMateria("cure") << std::endl;
        delete p;
        p = m->createMateria("ice");
        std::cout << "Should NOT be null: " << p << std::endl;

        delete p;
        delete m;
    }
    std::cout << std::endl;
    std::cout << "======== Materia tests ========" << std::endl;
    {
        // Constructors, copy and assignment
        {
            Cure *a = new Cure();
            Character c = Character("dummy");
            std::cout << "type: " << a->getType() << std::endl;
            a->use(c);
            Cure copy(*a);
            std::cout << "Should be 10: " << copy.getXP() << std::endl;
            Cure b = Cure ();
            copy.use(c);
            b = copy;
            std::cout << "Should be 20: " << b.getXP() << std::endl;
            delete a;
        }
        {
            Ice *a = new Ice();
            Character c = Character("dummy");
            std::cout << "type: " << a->getType() << std::endl;
            a->use(c);
            Ice copy(*a);
            std::cout << "Should be 10: " << copy.getXP() << std::endl;
            Ice b = Ice ();
            copy.use(c);
            b = copy;
            std::cout << "Should be 20: " << b.getXP() << std::endl;
            delete a;
        }
        {
            // Cloning
            AMateria *m;
            AMateria *test;
            m = new Ice();
            test = m->clone();
            std::cout << "Should be ice: " << test->getType() << test->getXP() << std::endl;
            std::cout << test << " vs " << m << std::endl;
            delete m;
            delete test;
            m = new Cure();
            test = m->clone();
            std::cout << "Should be cure: " << test->getType() << test->getXP() << std::endl;
            std::cout << test << " vs " << m << std::endl;
            delete m;
            delete test;
        }
    }
    std::cout << std::endl;
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