/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:39:21 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 18:47:38 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include <iostream>

class	AMateria {


public:

	AMateria( void );
	AMateria( std::string const & type );

	std::string const &		getType( void ) const; // returns the materia type

	virtual AMateria *		clone( void ) const = 0;
	virtual void			use( ICharacter & target );


protected:

	std::string		type;
	ICharacter &	target;

};

#endif
