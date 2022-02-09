/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:59:10 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 18:59:55 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria {


public:

	Ice( void );
	Ice( std::string const & type );
	Ice( Ice const & copy );
	Ice &	operator=( Ice const & rhs );
	~Ice( void );

	std::string const &		getType( void ) const;

	AMateria *				clone( void ) const = 0;
	void					use( ICharacter & target );

};

#endif