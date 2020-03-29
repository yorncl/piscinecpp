#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const Fixed &a)
{
	this->value = a.value;
}

Fixed::Fixed(const int i)
{
	this->value = i << this->nBits;
}

Fixed::Fixed(const float f)
{
	this->value = roundf(f * 256);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return float(this->value) / 256;
}

int Fixed::toInt(void) const
{
	return this->value >> this->nBits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

int Fixed::operator>(const Fixed &f) const { return this->value > f.value; };
int Fixed::operator<(const Fixed &f) const { return this->value < f.value; };
int Fixed::operator>=(const Fixed &f) const { return this->value >= f.value; };
int Fixed::operator<=(const Fixed &f) const { return this->value <= f.value; };
int Fixed::operator==(const Fixed &f) const { return this->value == f.value; };
int Fixed::operator!=(const Fixed &f) const { return this->value != f.value; };

Fixed &Fixed::operator=(const Fixed &f)
{
	this->value = f.value;
	return *this;
}
Fixed Fixed::operator-(const Fixed &f)
{
	Fixed r;
	r.setRawBits(this->value - f.value);
	return r;
};
Fixed Fixed::operator+(const Fixed &f)
{
	Fixed r;
	r.setRawBits(this->value + f.value);
	return r;
};
Fixed Fixed::operator/(const Fixed &f) { return Fixed(this->toFloat() / f.toFloat()); };
Fixed Fixed::operator*(const Fixed &f) { return Fixed(this->toFloat() * f.toFloat()); };

Fixed& Fixed::operator--(){this->value--;return *this;};
Fixed Fixed::operator--(int){Fixed r(*this);this->value--;return r;};
Fixed& Fixed::operator++(){this->value++;return *this;};
Fixed Fixed::operator++(int){Fixed r(*this);this->value++;return r;};

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return a > b ? b : a;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return a > b ? b : a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return a < b ? b : a;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return a < b ? b : a;
}

// int main(void)
// {
// 	Fixed a, x;
// 	Fixed const b(10);
// 	Fixed const c(42.42f);
// 	Fixed const d(b);
// 	a = Fixed(1);
// 	x = Fixed(2);

// 	std::cout << "1 Truth value " << a / x << std::endl;
// 	std::cout << "2 Truth value " << min(a, x) << std::endl;
// 	std::cout << "3 Truth value " << max(a, x) << std::endl;
// 	std::cout <<  std::endl;
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	return 0;
// }

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}