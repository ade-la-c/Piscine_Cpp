/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:12:58 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 22:36:13 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

	this->type = "wrong_random_animal";
}

WrongAnimal::WrongAnimal( std::string type ) : type(type) {}

WrongAnimal::WrongAnimal( WrongAnimal const & copy ) {

	*this = copy;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "* Bruit d'animal random *" << std::endl;
}

std::string		WrongAnimal::getType( void ) const {

	return this->type;
}
