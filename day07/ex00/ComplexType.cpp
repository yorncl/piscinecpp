#include "ComplexType.hpp"

ComplexType::ComplexType()
{
    _n = 0;
}

ComplexType::ComplexType(int n)
{
    _n = n;
}

ComplexType::ComplexType(const ComplexType &c)
{
    _n = c._n;
}

ComplexType &ComplexType::operator=(const ComplexType &c)
{
    _n = c._n;
    return *this;
}

ComplexType::~ComplexType()
{
}

bool  ComplexType::operator==(ComplexType const & c)
{
    return (this->_n == c._n);
}

bool  ComplexType::operator!=(ComplexType const & c)
{
    return (this->_n != c._n);
}

bool  ComplexType::operator>(ComplexType const & c)
{
    return (this->_n > c._n);
}

bool  ComplexType::operator<(ComplexType const & c)
{
    return (this->_n < c._n);
}

bool  ComplexType::operator>=(ComplexType const & c)
{
    return (this->_n >= c._n);
}

bool  ComplexType::operator<=(ComplexType const & c)
{
    return (this->_n <= c._n);
}

int ComplexType::getN() const
{
    return _n;
}

std::ostream& operator<<(std::ostream& os, const ComplexType& c)
{
    os << c.getN();
    return os;
}