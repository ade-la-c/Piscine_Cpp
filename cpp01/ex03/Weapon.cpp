/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:15:11 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/10 16:45:39 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {

	this->setType(type);
}

Weapon::~Weapon( void ) {}

void	Weapon::setType( std::string name ) {

	this->_weaponType = name;
}

std::string		Weapon::getType( void ) const {

	return this->_weaponType;
}
