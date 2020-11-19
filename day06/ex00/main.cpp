#include <string>
#include <iostream>
#include <cstdio>
#include <math.h>


enum e_type {CHAR, INT, FLOAT, NONE};
std::string arr[] = { "char", "int", "float", "none"};
// static void printChar(char* arg)
// {

//     if ()
//     std::cout << "char: " << std::endl;

// }


static e_type getType(std::string str)
{

    if (str.empty())
        return NONE;

    // CHAR / INT
    if (str.size() == 1)
        return CHAR;
    if (str.find_first_not_of("0123456789") == std::string::npos)
        return INT;

    // DOUBLE / FLOAT
    // special cases
    if (str == "nan" || str == "inf" || str == "-inf")
        return FLOAT;
    // number parsing
    int nat,dec;
    if (std::sscanf(str.c_str(), "%d.%d", &nat, &dec) == 2)
    {
        size_t i = 0;
        if (str[i] == '-') // multiple sign char ?
            i++;    
        while (std::isdigit(str[i]))
            i++;
        i++;
        while (std::isdigit(str[i]))
            i++;
        if (!str[i] || (str[i] == 'f' && !str[i + 1]))
            return FLOAT;
    }
    return NONE;
}

int main(int argc, const char** argv) {


    if (argc != 2)
    {
        std::cout << "Usage: ./convert [value]" << std::endl;
        std::cout << "Converts value to char, int, float and double " << std::endl;
    }
    (void) argv;
    
    
    std::string str(argv[1]);
    e_type t = getType(str);
    std::cout << "TYPE == " << arr[t] << std::endl;

    return 0;
}