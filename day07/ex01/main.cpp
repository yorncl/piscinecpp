#include <iostream>
#include <string>
#include "iter.hpp"


static void print(std::string &s)
{
    std::cout << "Elem: " << s << std::endl;
}

int main( void )
{    
    std::string arr1[] = { "Yo", "mec", "bien", "ou", "bien", " ?"};
    std::string arr2[] = {"Je suis seul"};
    std::string arr3[] = {};

    std::cout << "==== arr1 ====" << std::endl;
    ::iter(arr1, 6, print);
    std::cout << "==== arr2 ====" << std::endl;
    ::iter(arr2, 1, print);
    std::cout << "==== arr3 ====" << std::endl;
    ::iter(arr3, 0, print);
    return 0;
}