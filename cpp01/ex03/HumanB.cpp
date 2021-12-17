/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:37:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/10 18:02:09 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) {

	this->_name = name;
}

HumanB::~HumanB( void ) {}

void	HumanB::setWeapon( Weapon& wpn ) {

	this->weapon = &wpn;
}

void	HumanB::attack( void ) const {

	std::cout << this->_name << " attacks with his " << this->weapon->getType();
	std::cout << std::endl;
	return;
}
