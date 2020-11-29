#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <time.h>
#include <cstdlib>

#include "Data.hpp"

void *serialize(void)
{
    char *r = new char[8 + sizeof(int) + 8]; // implicit conversion ?
    char *s1 = r;
    int *pi = reinterpret_cast<int*> (r + 8);
    char *s2 = r + 8 + sizeof(int);
    static char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (size_t i = 0; i < 8; i++)
        s1[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    *pi = rand() + rand(); // is this clean ? certainly returns negative numbers
    for (size_t i = 0; i < 8; i++)
        s2[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    return reinterpret_cast<void*>(r);
}

Data * deserialize(void * raw)
{
    char *arr = reinterpret_cast<char*>(raw);
    Data* data = new Data();   

    data->s1 = std::string(arr, 8);
    data->n = *(reinterpret_cast<int*>(arr + 8));
    data->s2 = std::string(arr + 8 + sizeof(int), 8);
    return data;
}

int main(void)
{
    srand(time(0));

    Data *data =  deserialize(serialize()); // check leaks
    std::cout << data->s1 << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s2 << std::endl;
}
