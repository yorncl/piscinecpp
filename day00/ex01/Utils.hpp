#if !defined(UTILS)
#define UTILS

#include <iostream>
#include <string>

class Utils
{
private:
    Utils() = default;
    Utils(Utils &&) = default;
    Utils(const Utils &) = default;
    Utils &operator=(Utils &&) = default;
    Utils &operator=(const Utils &) = default;
    ~Utils() = default;

public:
    static std::string getInput();
    
};

#endif // UTILS
