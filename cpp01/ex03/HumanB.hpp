/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:37:22 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/10 18:02:23 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class	HumanB {


public:

	HumanB( std::string name );
	~HumanB( void );

	void	setWeapon( Weapon& weapon );

	void	attack( void ) const;

	Weapon*		weapon;


private:

	std::string		_name;

};

#endif
