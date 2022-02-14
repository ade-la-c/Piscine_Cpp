/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:01:37 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 13:36:41 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( Cure const & copy ) : AMateria(copy.type) {

	*this = copy;
}

Cure &	Cure::operator=( Cure const & rhs ) {

	if (this != &rhs) {}
	return *this;
}

Cure::~Cure( void ) {}

std::string const &		Cure::getType( void ) const {

	return this->type;
}

AMateria *			Cure::clone( void ) const {

	return new Cure;
}

void			Cure::use( ICharacter & target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
