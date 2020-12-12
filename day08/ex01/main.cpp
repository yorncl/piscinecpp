#include <iostream>
#include "Span.hpp"

int main(void)
{
    std::cout << "===== Subject tests =====" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "===== My tests =====" << std::endl;
    {
        std::cout << "=== Errors" << std::endl;
        Span sp = Span(5);
        try
        {
            sp.shortestSpan();
        }
        catch(const std::exception& e)
        {
            std::cout << "-> Exception catched" << std::endl;
            std::cerr << e.what() << '\n';
        }
        sp.addNumber(0);
        try
        {
            sp.longestSpan();
        }
        catch(const std::exception& e)
        {
            std::cout << "-> Exception catched" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }
    {
        std::cout << "=== Positive numbers range" << std::endl;
        Span sp = Span(5);
        std::cout << "-> {40, 50 , 45}" << std::endl;
        sp.addNumber(40);
        sp.addNumber(50);
        sp.addNumber(45);
        std::cout << "shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "longest : " << sp.longestSpan() << std::endl;
        }
    {
        std::cout << "=== Negative numbers range" << std::endl;
        Span sp = Span(5);
        std::cout << "-> {-40, -50 , -45}" << std::endl;
        sp.addNumber(-40);
        sp.addNumber(-50);
        sp.addNumber(-45);
        std::cout << "shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "longest : " << sp.longestSpan() << std::endl;
    }
    {
        std::cout << "=== Reel numbers range" << std::endl;
        Span sp = Span(5);
        std::cout << "-> {-40, -50 , 45}" << std::endl;
        sp.addNumber(-40);
        sp.addNumber(-50);
        sp.addNumber(45);
        std::cout << "shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "longest : " << sp.longestSpan() << std::endl;
    }

    return 0;
}