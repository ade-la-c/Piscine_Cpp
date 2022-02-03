/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:23:45 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/03 00:35:54 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedValue(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed( void ) {

	std::clout << "Destructor called" << std::endl;
}

Fixed &		Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedValue = rhs._fixedValue;
	return *this;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixedValue = raw;
}

std::ostream &		operator<<(std::ostream & COUT, Fixed const & rhs ) {

	COUT << rhs.toFloat();
	return COUT;
}

int		Fixed::toInt( void ) const {

	return (this->_fixedValue >> this->_nbrBits);
}

float	Fixed::toFloat( void ) const {

	return ((float)this->_fixedValue / (1 << this->_nbrBits));
}

bool		Fixed::operator>( Fixed const & rhs ) {}

bool		Fixed::operator<( Fixed const & rhs ) {}

bool		Fixed::operator>=( Fixed const & rhs ) {}

bool		Fixed::operator<=( Fixed const & rhs ) {}

bool		Fixed::operator==( Fixed const & rhs ) {}

bool		Fixed::operator!=( Fixed const & rhs ) {}

Fixed &		Fixed::operator+( Fixed const & rhs ) {}

Fixed &		Fixed::operator-( Fixed const & rhs ) {}

Fixed &		Fixed::operator*( Fixed const & rhs ) {}

Fixed &		Fixed::operator/( Fixed const & rhs ) {}

Fixed &		Fixed::operator++( void ) {}

Fixed &		Fixed::operator--( void ) {}

Fixed &		Fixed::operator++( 0 ) {}

Fixed &		Fixed::operator--( 0 ) {}

static int &	Fixed::min( int & x, int & y ) {

	return &x < &y ? x : y;
}
