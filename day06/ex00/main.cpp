#include <string>
#include <iostream>
#include <cstdio>


// struct main
// {
//     /* data */
// };


// static void printChar(char* arg)
// {

//     if ()
//     std::cout << "char: " << std::endl;

// }



int main(int argc, const char** argv) {


    if (argc != 2)
    {
        std::cout << "Usage: ./convert [value]" << std::endl;
        std::cout << "Converts value to char, int, float and double " << std::endl;
    }
    (void) argv;
    // std::string value(argv[1]);
    // printChar();

    float t = 0.0/0.0;
    // char c = (char) nanf;
    std::cout <<(int)t << std::endl;

    return 0;
}