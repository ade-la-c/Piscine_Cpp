/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:21:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/10 17:36:26 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& wpn ): weapon(wpn) {

	this->_name = name;
}

HumanA::~HumanA( void ) {}

void	HumanA::attack( void ) const {

	std::cout << this->_name << " attacks with his " << this->weapon.getType();
	std::cout << std::endl;
	return;
}
