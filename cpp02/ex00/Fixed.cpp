/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 22:49:16 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/01/10 12:47:55 by ade-la-c         ###   ########.fr       */
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

Fixed&	Fixed::operator=( Fixed const & copy ) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
		this->_fixedValue = copy.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixedValue = raw;
}
