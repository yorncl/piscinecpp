#if !defined(MACRO)
#define MACRO

#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif // MACRO

