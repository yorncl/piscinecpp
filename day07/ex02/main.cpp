#include <iostream>
#include "Array.hpp"
#include <string>

int main(void)
{
    {
        std::cout << "======== Constructors. copy and assigment =========" << std::endl;
        Array<int> a(3);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
        Array<int> b(a);
        Array<int> c(45);
        c = a;
        a[0] = 6;
        a[1] = 6;
        a[2] = 6;
        std::cout << "arr a: " << a[0] << " " << a[1] << " " << a[2] << " " << std::endl;
        std::cout << "arr b: " << b[0] << " " << b[1] << " " << b[2] << " " << std::endl;
        std::cout << "arr c: " << c[0] << " " << c[1] << " " << c[2] << " " << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "======== Size ========" << std::endl;
        Array<std::string> a(52);
        std::cout << "Size of a:" << std::endl;
        std::cout << a.size() << std::endl;
        std::cout << "Size of b:" << std::endl;
        Array<std::string> b = Array<std::string>();
        std::cout << b.size() << std::endl;
    }
    std::cout  << std::endl;
    {
        std::cout << "======== Exceptions ========" << std::endl;
        Array<float> a(52);
        a[51] = 666.666f;
        try
        {
            std::cout << "Trying to access index 52:" << std::endl;
            std::cout << a[52] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "Trying to access index -51:" << std::endl;
            std::cout << a[-51] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "Trying to access index 51:" << std::endl;
            std::cout << a[51] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        std::cout << "========= Destructor =========" << std::endl;
        Array<int> *a = new Array<int> (17);
        delete a;
    }
    return 0;
}
