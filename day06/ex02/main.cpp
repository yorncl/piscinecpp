#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

Base *generate(void)
{
    int i = rand() % 3;

    switch (i)
    {
    case 0:
        return new A();
        break;
    case 1:
        return new B();
        break;
    case 2:
        return new C();
        break;
    default:
        break;
    }
}

void identify_from_pointer(Base * p)
{
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);;
    C* c = dynamic_cast<C*>(p);;
    if (a)
        std::cout << "A" << std::endl;
    if (b)
        std::cout << "B" << std::endl;
    if (c)
        std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p)
{
    Base *p = &p;
    identify_from_pointer(p);
}

int main(void)
{
    srand(time(0));

    Base *test = generate();

    delete test;
    return 0;
}
