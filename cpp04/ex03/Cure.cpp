/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:01:37 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 18:59:11 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) {}

Cure::Cure( std::string const & type ) {}

Cure::Cure( Cure const & copy ) {

	*this = copy;
}

Cure &	Cure::operator=( Cure const & rhs ) {

	if (this != &rhs) {}
	return *this;
}

Cure::~Cure( void ) {}

std::string const &		Cure::getType( void ) const {}

AMateria *			Cure::clone( void ) const {}

void			Cure::use( ICharacter & target ) {

	std::cout << "* heals " << this->type << "'s wounds *" << std::endl;
}
