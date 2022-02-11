/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:39:21 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/11 21:02:38 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include <iostream>

class	ICharacter;

class	AMateria {


public:

	// AMateria( void ) {}
	AMateria( std::string const & type );
	virtual ~AMateria( void ) {}

	std::string const &		getType( void ) const; // returns the materia type

	virtual AMateria *		clone( void ) const = 0;
	virtual void			use( ICharacter & target ) = 0;


protected:

	std::string		type;

};

#endif
