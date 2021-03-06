/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:17:04 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 13:34:26 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal("Dog") {

	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
	// this->_brain.operator=(new Brain());
}

Dog::Dog( Dog const & copy ) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog &	Dog::operator=( Dog const & rhs ) {

	if (this != &rhs) {
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound( void ) const {

	std::cout << "Ouaf ouaf je suis le chien tsais" << std::endl;
}

// std::string		Dog::getType( void ) const {

// 	return this->type;
// }
