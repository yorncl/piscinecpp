#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = a._value;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	_value = i << Fixed::_fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << Fixed::_fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

void Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = f._value;
}

float Fixed::toFloat( void ) const
{
	return float(_value) / (1 << Fixed::_fractional_bits);
}

int Fixed::toInt( void ) const
{
	return _value >> Fixed::_fractional_bits;
}

std::ostream&  operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}
