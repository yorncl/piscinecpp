#include <string.h>
#include <iostream>
#include <cstdio>
#include <math.h>
#include <limits.h>
#include <limits>
#include <errno.h>
#include <float.h>


enum e_type {CHAR, INT, FLOAT, DOUBLE, NONE};

static e_type getType(std::string str)
{

    if (str.empty())
        return NONE;

    // CHAR
    if (str.size() == 1 && !isdigit(str[0]))
        return CHAR;
    
    // SPECIAL CASES
    if (str == "nanf" || str == "+inff" || str == "-inff")
        return FLOAT;
    if (str == "nan" || str == "+inf" || str == "-inf")
        return DOUBLE;

    // INT / DOUBLE / FLOAT parsing
    size_t i = 0;
    if (str[i] == '-')
        i++;    
    while (std::isdigit(str[i]))
        i++;
    if (!str[i])
        return INT;
    if (str[i] == '.')
        i++;
    while (std::isdigit(str[i]))
        i++;
    if (!str[i])
        return DOUBLE;
    if (str[i] == 'f' && !str[i + 1])
        return FLOAT;
    return NONE;
}

static void printChar(double d)
{
    std::cout << "char: ";
    if (d < CHAR_MIN || d > CHAR_MAX)
        std::cout << "overflow";
    else
    {
        char c = static_cast<char>(d);
        if (std::isprint(c))
            std::cout << c ;
        else
            std::cout << "Non displayable";
    }
    std::cout << std::endl;
}

static void printInt(double d)
{
    std::cout << "int: ";
    if (d < INT_MIN || d > INT_MAX)
        std::cout << "overflow";
    else
    {
        int i = static_cast<int>(d);
        std::cout << i;
    }
    std::cout << std::endl;
}

static void printFloat(double d)
{
    std::cout << "float: ";

    if (std::isnan(d))
        std::cout << "nanf";
    else if (d == INFINITY || d == -INFINITY)
        std::cout << (d < 0 ? "-inff" : "+inff");
    else if (d < FLT_MIN || d > FLT_MAX )
        std::cout << "overflow";
    else
    {
        float f = static_cast<float>(d);
        std::cout.precision(std::numeric_limits<float>::digits10);
        std::cout << f;
        if (floor(f) == f)
            std::cout << ".0";
        std::cout << 'f';
    }
    std::cout << std::endl;
}

static void printDouble(double d)
{
    std::cout << "double: ";
    if (std::isnan(d))
        std::cout << d;
    else if (d == INFINITY || d == -INFINITY)
        std::cout << (d > 0 ? '+' : '\0') << d;
    else
    {
        std::cout.precision(std::numeric_limits<double>::digits10);
        std::cout << d;
        if (floor(d) == d)
                std::cout << ".0";   
    }
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert [value]" << std::endl;
        std::cout << "Converts value to char, int, float and double " << std::endl;
        return 0;
    }
    char *str = argv[1];

    // getting type
    e_type t = getType(std::string(str));
    if (t == NONE)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return 0;
    }

    // getting value in largest type
    double d;
    if (t != CHAR)
    {
        d = strtod(str, 0);
        if ((d == HUGE_VALF || d == -HUGE_VALF) && errno == ERANGE)
        {
            std::cout << "char: overflow" << std::endl;
            std::cout << "int: overflow" << std::endl;
            std::cout << "float: overflow" << std::endl;
            std::cout << "double: overflow" << std::endl;
            return 0;
        }
    }
    else
        d = static_cast<double>(*str);
    
    // Printing
    if (std::isnan(d))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else
    {
        printChar(d);
        printInt(d);   
    }
    printFloat(d);
    printDouble(d);
    return 0;
}
