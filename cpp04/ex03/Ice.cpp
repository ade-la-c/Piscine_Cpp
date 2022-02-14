/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:58:14 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 15:32:12 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( Ice const & copy ) : AMateria(copy.type) {

	*this = copy;
}

Ice &	Ice::operator=( Ice const & rhs ) {

	if (this != &rhs)
		this->type = "ice";
	return *this;
}

Ice::~Ice( void ) {}

std::string const &		Ice::getType( void ) const {

	return this->type;
}

AMateria *			Ice::clone( void ) const {

	return new Ice();
}

void			Ice::use( ICharacter & target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
