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
    return NULL;
}

void identify_from_pointer(Base * p)
{
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "A" << std::endl;
    if (b)
        std::cout << "B" << std::endl;
    if (c)
        std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void) a;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void) b;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void) c;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
}

int main(void)
{
    srand(time(0));

    A a;
    B b;
    C c;

    std::cout << "====== By pointer =====" << std::endl;
    identify_from_pointer(&a);
    identify_from_pointer(&b);
    identify_from_pointer(&c);

    std::cout << "====== By reference =====" << std::endl;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);

    std::cout << "====== Generate =====" << std::endl;
    {
        Base *test = generate();
        identify_from_pointer(test);
        delete test;
    }
    {
        Base *test = generate();
        identify_from_pointer(test);
        delete test;
    }
    {
        Base *test = generate();
        identify_from_pointer(test);
        delete test;
    }
    {
        Base *test = generate();
        identify_from_pointer(test);
        delete test;
    }
    {
        Base *test = generate();
        identify_from_pointer(test);
        delete test;
    }
    return 0;
}
