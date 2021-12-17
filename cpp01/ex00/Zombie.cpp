/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:49:41 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/07 21:04:19 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

	std::cout << "Oh no, a zombie is approaching" << std::endl;
}

Zombie::~Zombie( void ) {

	std::cout << this->_zombieName;
	std::cout << " stumbles and dies miserably" << std::endl;
}

void	Zombie::announce( void ) {

	std::cout << "<" << this->_zombieName << "> BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
	return;
}

void	Zombie::setName( std::string name ) {

	this->_zombieName = name;
}

std::string		Zombie::getName( void ) const {

	return this->_zombieName;
}
