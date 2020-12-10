#include <iostream>
#include <string>
#include "iter.hpp"

template<typename T>
void printT(T &t)
{
    std::cout << "T: " << t << std::endl;
}

static void printS(std::string &s)
{
    std::cout << "String: " << s << std::endl;
}

static void printI(int &i)
{
    std::cout << "Int: " << i << std::endl;
}

int main( void )
{    
    std::string arr1[] = { "Yo", "mec", "bien", "ou", "bien", " ?"};
    int arr2[] = {1, 2, 3, 4, 5};
    std::string arr3[] = {};

    std::cout << "==== arr1 ====" << std::endl;
    ::iter(arr1, 6, printS);
    ::iter(arr1, 6, printT);
    std::cout << "==== arr2 ====" << std::endl;
    ::iter(arr2, 5, printI);
    ::iter(arr2, 5, printT);
    std::cout << "==== arr3 ====" << std::endl;
    ::iter(arr3, 0, printS);
    ::iter(arr3, 0, printT);
    return 0;
}