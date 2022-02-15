/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:25:21 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/15 19:26:58 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {

	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( Cat const & copy ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat &	Cat::operator=( Cat const & rhs ) {

	if (this != &rhs) {
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat( void ) {

	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou miaou mon reuf" << std::endl;
}
