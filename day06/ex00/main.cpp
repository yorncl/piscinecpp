#include <string>
#include <iostream>
#include <cstdio>
#include <math.h>


enum e_type {CHAR, INT, FLOAT, DOUBLE, NONE};
std::string arr[] = { "char", "int", "float", "none"};


static void printFloat(const char* arg, e_type t)
{
    float f;

    if (t == CHAR)
}

static void printInt(const char* arg, e_type t)
{
    int i = 0;

    if (t == CHAR)
        i = static_cast<int>(*arg);
    else if (t == INT)
        i = std::atoi(arg);
    else if (t == FLOAT)
    {
        double d = std::atof(arg);
        i = static_cast<int>(d);
    }
    std::cout << "int: " << i << std::endl;
}


static void printChar(const char* arg, e_type t)
{
    char c = '\0';

    std::cout << "char: ";
    if (t == CHAR)
        c = *arg;
    else if (t == INT)
    {
        int i = std::atoi(arg);
        c = static_cast<char>(i);
        if (i < -128 || i > 127)
        {
            std::cout << "Out of range" << std::endl;
            return ;
        }
    }
    else if (t == FLOAT)
    {
        float f = std::atof(arg);
        c = static_cast<char>(f);
        if (f < -128 || f > 127)
        {
            std::cout << "Out of range" << std::endl;
            return ;
        }
    }
    else if (t == DOUBLE)
    {
        double d = std::atof(arg);
        c = static_cast<char>(d);
        if (d < -128 || d > 127)
        {
            std::cout << "Out of range" << std::endl;
            return ;
        }
    }
    if (std::isprint(c))
        std::cout << c << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}


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

    // INT / DOUBLE / FLOAT pasing
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

int main(int argc, const char** argv) {


    if (argc != 2)
    {
        std::cout << "Usage: ./convert [value]" << std::endl;
        std::cout << "Converts value to char, int, float and double " << std::endl;
        return 0;
    }
    (void) argv;
    
    
    std::string str(argv[1]);
    e_type t = getType(str);
    if (t == NONE)
    {
        std::cout << "No type matched" << std::endl;
    }
    std::cout << "TYPE == " << arr[t] << std::endl;
    printChar(argv[1], t);

    return 0;
}