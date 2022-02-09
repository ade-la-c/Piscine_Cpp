/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:58:14 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 19:00:56 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) {}

Ice::Ice( std::string const & type ) {}

Ice::Ice( Ice const & copy ) {

	*this = copy;
}

Ice &	Ice::operator=( Ice const & rhs ) {

	if (this != &rhs) {}
	return *this;
}

Ice::~Ice( void ) {}

std::string const &		Ice::getType( void ) const {}

AMateria *			Ice::clone( void ) const {}

void			Ice::use( ICharacter & target ) {

	std::cout << "* shoots an ice bolt at " << this->type << " *" << std::endl;
}
