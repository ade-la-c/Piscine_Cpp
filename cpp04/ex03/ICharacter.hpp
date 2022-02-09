/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:21:21 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 16:27:14 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

# include "AMateria.hpp"

class	ICharacter {


public:

	virtual	~ICharacter( void ) {}
	virtual std::string const &		getName( void ) const = 0;
	virtual void					equip( AMateria * m ) = 0;
	virtual void					unequip( int idx ) = 0;
	virtual void					use( int idx, ICharacter & target) = 0;
};

#endif
