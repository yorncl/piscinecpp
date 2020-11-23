#include <iostream>
#include <string>
#include "iter.hpp"


static void print(std::string &s)
{
    std::cout << "Elem: " << s << std::endl;
}

int main( void )
{    
    std::string arr[] = { "Yo", "mec", "bien", "ou", "bien", " ?"};

    ::iter(arr, 6, print);
    return 0;
}