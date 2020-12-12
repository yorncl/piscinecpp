#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <set>
#include <vector>


int main(void)
{
    std::cout << "===== Lists =====" << std::endl;
    std::cout << "== Error" << std::endl;
    {
        std::list<int> l(10, 15); // create list of 10 elemts at value 15
        std::cout << "-> Not in container" << std::endl;
        try
        {
            easyfind(l, 666);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Cannot access element: " << e.what() << '\n';
        }
        std::cout << "-> Empty container" << std::endl;
        std::list<int> empty;
        try
        {
            easyfind(empty, 666);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Cannot access element: " << e.what() << '\n';
        }
    }
    std::cout << "== Normal access" << std::endl;
    {
        std::list<int> l;
        l.push_back(0);
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);
        l.push_back(4);
        l.push_back(5);
        l.push_back(6);
    
        std::cout << "-> Start" << std::endl;
        int r = easyfind(l, 0);
        std::cout << "found r = " << r << std::endl;
    
        std::cout << "-> Middle" << std::endl;
        r = easyfind(l, 3);
        std::cout << "found r = " << r << std::endl;
    
        std::cout << "-> End" << std::endl;
        r = easyfind(l, 6);
        std::cout << "found r = " << r << std::endl;
    }

    std::cout << "===== Vector =====" << std::endl;
    std::cout << "== Error" << std::endl;
    {
        std::vector<int> v(10, 15);
        std::cout << "-> Not in container" << std::endl;
        try
        {
            easyfind(v, 666);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Cannot access element: " << e.what() << '\n';
        }
        std::cout << "-> Empty container" << std::endl;
        std::vector<int> empty;
        try
        {
            easyfind(empty, 666);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Cannot access element: " << e.what() << '\n';
        }
    }
    std::cout << "== Normal access" << std::endl;
    {
        std::vector<int> v;
        v.push_back(0);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
    
        std::cout << "-> Start" << std::endl;
        int r = easyfind(v, 0);
        std::cout << "found r = " << r << std::endl;
    
        std::cout << "-> Middle" << std::endl;
        r = easyfind(v, 3);
        std::cout << "found r = " << r << std::endl;
    
        std::cout << "-> End" << std::endl;
        r = easyfind(v, 6);
        std::cout << "found r = " << r << std::endl;
    }
 
 
    std::cout << "===== Set =====" << std::endl;
    std::cout << "== Error" << std::endl;
    {
        std::set<int> s;
        s.insert(0);
        s.insert(0);
        s.insert(0);
        s.insert(0);
        s.insert(0);
        std::cout << "-> Not in container" << std::endl;
        try
        {
            easyfind(s, 666);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Cannot access element: " << e.what() << '\n';
        }
        std::cout << "-> Empty container" << std::endl;
        std::set<int> empty;
        try
        {
            easyfind(empty, 666);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Cannot access element: " << e.what() << '\n';
        }
    }
    std::cout << "== Normal access" << std::endl;
    {
        std::set<int> s;
        s.insert(0);
        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);
        s.insert(6);

        std::cout << "-> Start" << std::endl;
        int r = easyfind(s, 0);
        std::cout << "found r = " << r << std::endl;
    
        std::cout << "-> Middle" << std::endl;
        r = easyfind(s, 3);
        std::cout << "found r = " << r << std::endl;
    
        std::cout << "-> End" << std::endl;
        r = easyfind(s, 6);
        std::cout << "found r = " << r << std::endl;
    }
    return 0;
}
