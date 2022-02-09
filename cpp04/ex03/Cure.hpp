/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:01:11 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 18:57:10 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria {


public:

	Cure( void );
	Cure( std::string const & type );
	Cure( Cure const & copy );
	Cure &	operator=( Cure const & rhs );
	~Cure( void );

	std::string const &		getType( void ) const;

	AMateria *				clone( void ) const = 0;
	void					use( ICharacter & target );

};

#endif
