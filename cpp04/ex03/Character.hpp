/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:50:11 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 14:04:48 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class	Character : public ICharacter {


public:

	Character( void );
	Character( std::string name );
	Character( Character const & copy );
	Character &	operator=( Character const & rhs );
	virtual ~Character( void );

	std::string const &		getName( void ) const;
	void					equip( AMateria * m );
	void					unequip( int idx );
	void					use( int idx, ICharacter & target );


private:

	std::string		_name;

	AMateria *		_inventory[4];

};

#endif
