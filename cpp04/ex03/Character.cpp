/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:59 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/11 20:49:30 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {}

Character::Character( std::string name ) : _name(name) {}

Character::Character( Character const & copy ) {

	*this = copy;
}

Character &	Character::operator=( Character const & rhs ) {

	if (this != &rhs) {
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
		// this->_name = rhs.getName();
	}
	return *this;
}

Character::~Character( void ) {

	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

std::string const &		Character::getName( void ) const {

	return this->_name;
}

void		Character::equip( AMateria * m ) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] == NULL ? this->_inventory[i] = m : 0;
}

void		Character::unequip( int idx ) {

	if (this->_inventory[idx]) {
		std::cout << "Materia of type " << this->_inventory[idx]->getType();
		std::cout << " gets dropped on the ground" << std::endl;
		this->_inventory[idx] = NULL;
	}
	return;
}

void		Character::use( int idx, ICharacter & target ) {

	this->_inventory[idx]->use(target);
}
