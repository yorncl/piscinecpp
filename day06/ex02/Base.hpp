#if !defined(BASE_HPP)
#define BASE_HPP


class Base
{
public:
    Base();
    Base(const Base &);
    Base &operator=(const Base &);
    virtual ~Base();
};
#endif // BASE_HPP
