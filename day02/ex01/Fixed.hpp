#if !defined(MACRO)
#define MACRO

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int nBits = 8;

public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(Fixed &&) = default;
	Fixed(const Fixed &);
	void operator=(const Fixed &);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &, const Fixed &f);
#endif // MACRO
