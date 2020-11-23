#include <iostream>
#include "Array.hpp"

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
        a[0] = 666;
        a[1] = 666;
        a[2] = 666;
        std::cout << "arr a: " << a[0] << " " << a[1] << " " << a[2] << " " << std::endl;
        std::cout << "arr b: " << b[0] << " " << b[1] << " " << b[2] << " " << std::endl;
        std::cout << "arr c: " << c[0] << " " << c[1] << " " << c[2] << " " << std::endl;
    }
    std::cout << std::endl;
    {
        std::cout << "======== Size ========" << std::endl;
        Array<int> a(52);
        std::cout << a.size() << std::endl;
        Array<int> b = Array<int>();
        std::cout << b.size() << std::endl;
    }
    std::cout  << std::endl;
    {
        std::cout << "======== Exceptions ========" << std::endl;
        Array<int> a(52);
        try
        {
            std::cout << a[52] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
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
