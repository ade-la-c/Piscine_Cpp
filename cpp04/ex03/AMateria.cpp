/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:39:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 19:20:25 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// AMateria::AMateria( std::string const & type ) {}

std::string const &		AMateria::getType( void ) const {

	return this->type;
}

void		AMateria::use( ICharacter & target ) {

	
}
