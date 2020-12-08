#include <iostream>
#include <sstream>
#include <string>
#include <string.h>
#include <time.h>
#include <cstdlib>

#include "Data.hpp"

void *serialize(void)
{
    Data *data = new Data();
    static char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    data->s1 = "";
    for (size_t i = 0; i < 8; i++)
        data->s1.push_back(alphanum[rand() % (sizeof(alphanum) - 1)]);
    data->n = rand() + rand();
    data->s2 = "";
    for (size_t i = 0; i < 8; i++)
        data->s2.push_back(alphanum[rand() % (sizeof(alphanum) - 1)]);
    return reinterpret_cast<void*>(data);
}

Data * deserialize(void * raw)
{
    Data* data = reinterpret_cast<Data*>(raw);   
    return data;
}

int main(void)
{
    srand(time(0));

    Data *data =  deserialize(serialize());
    std::cout << "==== SERIALIZED THEN DESERIALIZEDD DATA ====" << std::endl;
    std::cout << data->s1 << std::endl;
    std::cout << data->n << std::endl;
    std::cout << data->s2 << std::endl;
    std::cout << "==== Size of \"Data\" ====" << std::endl;
    std::cout << "sizeof string: " << sizeof(std::string) << std::endl;
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof Data: " << sizeof(Data) << std::endl;
    delete data;
}
