/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:23:45 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 17:16:48 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedValue(0) {

	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy ) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( int const num ) {

	// std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = (num << this->_nbrBits);
}

Fixed::Fixed( float const num ) {

	// std::cout << "Float constructor called" << std::endl;
	_fixedValue = (int)roundf(num * (1 << this->_nbrBits));
}

Fixed::~Fixed( void ) {

	// std::cout << "Destructor called" << std::endl;
}

Fixed &		Fixed::operator=( Fixed const & rhs ) {

	// std::cout << "Assignation operator called" << std::endl;
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

int		Fixed::toInt( void ) const {

	return this->_fixedValue >> this->_nbrBits;
}

float	Fixed::toFloat( void ) const {

	return (float)this->_fixedValue / (1 << this->_nbrBits);
}

bool		Fixed::operator>( Fixed const & rhs ) const {

	return this->_fixedValue > rhs._fixedValue ? true : false;
}

bool		Fixed::operator<( Fixed const & rhs ) const {

	return this->_fixedValue < rhs._fixedValue ? true : false;
}

bool		Fixed::operator>=( Fixed const & rhs ) const {

	return this->_fixedValue >= rhs._fixedValue ? true : false;
}

bool		Fixed::operator<=( Fixed const & rhs ) const {

	return this->_fixedValue <= rhs._fixedValue ? true : false;
}

bool		Fixed::operator==( Fixed const & rhs ) const {

	return this->_fixedValue == rhs._fixedValue ? true : false;
}

bool		Fixed::operator!=( Fixed const & rhs ) const {

	return this->_fixedValue != rhs._fixedValue ? true : false;
}

Fixed		Fixed::operator+( Fixed const & rhs ) const {

	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed		Fixed::operator-( Fixed const & rhs ) const {

	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed		Fixed::operator-( void ) const {

	return Fixed(-this->toFloat());
}

Fixed		Fixed::operator*( Fixed const & rhs ) const {

	return this->toFloat() * rhs.toFloat();
}

Fixed		Fixed::operator/( Fixed const & rhs ) const {

	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &		Fixed::operator++( void ) {

	this->_fixedValue++;
	return *this;
}

Fixed &		Fixed::operator--( void ) {

	this->_fixedValue--;
	return *this;
}

Fixed		Fixed::operator++( int ) {

	Fixed	cpy(*this);

	this->operator++();
	return cpy;
}

Fixed		Fixed::operator--( int ) {

	Fixed	cpy(*this);

	this->operator--();
	return cpy;
}

Fixed &			Fixed::min(Fixed & x, Fixed & y ){

	return x < y ? x : y;
}

Fixed &			Fixed::max(Fixed & x, Fixed & y ) {

	return x < y ? y : x;
}

const Fixed &	Fixed::min( Fixed const & x, Fixed const & y ) {

	return x < y ? x : y;
}

const Fixed &	Fixed::max( Fixed const & x, Fixed const & y ) {

	return x < y ? y : x;
}

std::ostream &		operator<<(std::ostream & COUT, Fixed const & rhs ) {

	COUT << rhs.toFloat();
	return COUT;
}
