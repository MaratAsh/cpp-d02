//
// Created by Altagracia Cierra on 11/15/22.
//

#include "Fixed.hpp"


// Дефолтные конструкторы ортодоксальной каноническай формы
//
Fixed::Fixed()
{
	_point = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
// конструктор копирования
Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
// оператор присвоения
Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_point = copy.getRawBits();
	// _point = copy._point; // так писать проще не использую геттер
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
