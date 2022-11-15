//
// Created by Altagracia Cierra on 11/15/22.
//

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
private:
	int _point;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator=(Fixed const &copy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif

