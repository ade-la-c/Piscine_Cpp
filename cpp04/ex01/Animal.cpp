/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:14:50 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 14:38:32 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << "Animal has been created" << std::endl;
	this->type = "random_animal";
}

Animal::Animal( std::string type ) : type(type) {

	std::cout << "Animal " << type << " has been created" << std::endl;
}

Animal::Animal( Animal const & copy ) {

	std::cout << "Copy Animal has been created" << std::endl;
	*this = copy;
}

Animal &	Animal::operator=( Animal const & rhs ) {

	std::cout << "Assignation overload called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal( void ) {}

void	Animal::makeSound( void ) const {

	std::cout << "* Bruit d'animal random *" << std::endl;
}

std::string		Animal::getType( void ) const {

	return this->type;
}
