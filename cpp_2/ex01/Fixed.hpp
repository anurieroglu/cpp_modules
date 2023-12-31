#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int fractionalBits = 0;
	public:
		Fixed();
		~Fixed();
		Fixed (const Fixed &copy);
		Fixed &operator=(const Fixed &number);
		Fixed(const int intVal);
		Fixed(const float floatVal);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator << (std::ostream &output, const Fixed &fixed);

#endif