/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:22:06 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/10 17:23:01 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class	HumanA {


public:

	HumanA( std::string const name, Weapon& wpn );
	~HumanA( void );

	void	attack( void ) const;

	Weapon&		weapon;


private:

	std::string		_name;

};

#endif
