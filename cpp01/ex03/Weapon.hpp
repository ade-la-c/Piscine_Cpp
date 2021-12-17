/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:10:14 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/08 13:42:53 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class	Weapon {


public:

	Weapon( std::string type );
	~Weapon( void );
	
	std::string		getType( void ) const;

	void	setType( std::string name );


private:

	std::string		_weaponType;

};

#endif