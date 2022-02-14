/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:01:11 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 15:34:28 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : virtual public AMateria {


public:

	Cure( void );
	Cure( Cure const & copy );
	Cure &	operator=( Cure const & rhs );
	~Cure( void );

	std::string const &		getType( void ) const;

	AMateria *				clone( void ) const;
	void					use( ICharacter & target );

};

#endif
