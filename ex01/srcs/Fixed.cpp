//
// Created by Altagracia Cierra on 11/15/22.
//

#include "Fixed.hpp"

// The Orthodox Canonical Class Form

// Default Constructor
Fixed::Fixed()
{
	_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Int Constructor
Fixed::Fixed(int const value)
{
	_point = value << _nb_bits;
	std::cout << "Int constructor called" << std::endl;
}

// Float Constructor
Fixed::Fixed(float const value)
{
	_point = (int)roundf(value * (1 << _nb_bits));
	std::cout << "Float constructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Copy Assignment Operator
Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->setRawBits(copy.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return _point;
}

void Fixed::setRawBits( int const raw )
{
	_point = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)_point / (1 << _nb_bits));
}

int Fixed::toInt( void ) const
{
	return (_point >> _nb_bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
