//
// Created by Altagracia Cierra on 11/15/22.
//

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>
# include <math.h>

class Fixed
{
private:
	int					_point;
	static const int	_nb_bits = 8;

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	~Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator=(Fixed const &copy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	// Arithmetic operators
	Fixed& operator++(void);	// prefix increment
	Fixed operator++(int);		// postfix increment
	Fixed& operator--(void);	// prefix decrement
	Fixed operator--(int);		// postfix decrement

	Fixed operator+(Fixed const &fixed);	// addition operator
	Fixed operator-(Fixed const &fixed);	// subtraction operator
	Fixed operator*(Fixed const &fixed);	// multiplication operator
	Fixed operator/(Fixed const &fixed);	// division operator

	// Comparison operators
	bool operator>(Fixed const &fixed) const;	// > operator (greater than operator)
	bool operator<(Fixed const &fixed) const;	// < operator (less than operator)
	bool operator>=(Fixed const &fixed) const;	// >= operator (greater than or equal to operator)
	bool operator<=(Fixed const &fixed) const;	// <= operator (less than or equal to operator)
	bool operator==(Fixed const &fixed) const;	// == operator (equal to operator)
	bool operator!=(Fixed const &fixed) const;	// != operator (not equal to operator)

	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed&  min(const Fixed &a, const Fixed &b);
	static const Fixed&  max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, const Fixed& fixed);

#endif
