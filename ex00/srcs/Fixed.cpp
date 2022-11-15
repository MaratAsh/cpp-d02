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

//----------------------------------------------------------------
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _point;
}
void Fixed::setRawBits( int const raw )
{
	_point = raw;
}
