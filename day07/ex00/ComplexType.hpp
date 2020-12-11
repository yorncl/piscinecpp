#if !defined(COMPLEXTYPE_HPP)
#define COMPLEXTYPE_HPP

#include <ostream>

class ComplexType
{
public:
    ComplexType();
    ComplexType(int n);
    ComplexType(const ComplexType &);
    ComplexType &operator=(const ComplexType &);
    ~ComplexType();
    bool operator==(ComplexType const &c);
    bool operator!=(ComplexType const &c);
    bool operator>(ComplexType const &c);
    bool operator<(ComplexType const &c);
    bool operator>=(ComplexType const &c);
    bool operator<=(ComplexType const &c);
    int getN() const;

private:
    int _n;
};

std::ostream& operator<<(std::ostream& os, const ComplexType& c);

#endif // COMPLEXTYPE_HPP
