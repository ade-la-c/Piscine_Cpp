/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:14:50 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 15:29:59 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal( void ) {

	std::cout << "Animal has been created" << std::endl;
	this->type = "random_animal";
}

AAnimal::AAnimal( std::string type ) : type(type) {

	std::cout << "Animal (" << type << ") has been created" << std::endl;
}

AAnimal::AAnimal( AAnimal const & copy ) {

	std::cout << "Copy Animal has been created" << std::endl;
	*this = copy;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs ) {

	std::cout << "Assignation overload called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal( void ) {

	std::cout << "Animal (" << type << ") dies, press F to pay respects" << std::endl;
}

std::string		AAnimal::getType( void ) const {

	return this->type;
}
