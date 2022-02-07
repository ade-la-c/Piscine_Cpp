/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:14:50 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 19:31:56 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {

	this->type = "Random animal";
}

Animal::Animal( std::string type ) : type(type) {}

Animal::Animal( Animal const & copy ) {

	*this = copy;
}

Animal &	Animal::operator=( Animal const & rhs ) {

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
