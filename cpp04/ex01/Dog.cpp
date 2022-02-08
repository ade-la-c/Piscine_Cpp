/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:17:04 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 19:32:49 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {}

Dog::Dog( Dog const & copy ) {

	*this = copy;
}

Dog &	Dog::operator=( Dog const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Dog::~Dog( void ) {}

void	Dog::makeSound( void ) const {

	std::cout << "Ouaf ouaf je suis le chien tsais" << std::endl;
}

// std::string		Dog::getType( void ) const {

// 	return this->type;
// }
