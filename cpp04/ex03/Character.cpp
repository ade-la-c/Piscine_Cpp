/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:59 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 15:26:39 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) : _name("") {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( std::string name ) : _name(name) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( Character const & copy ) {

	*this = copy;
}

Character &	Character::operator=( Character const & rhs ) {

	if (this == &rhs)
		return *this;

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i]->clone();

	return *this;
}

Character::~Character( void ) {

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

std::string const &		Character::getName( void ) const {

	return this->_name;
}

void		Character::equip( AMateria * m ) {

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL)
			this->_inventory[i] = m;
	}
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

	if (this->_inventory[idx] != NULL && idx < 4) {}
		this->_inventory[idx]->use(target);
	std::cout << this->_inventory[idx]->getType() << std::endl;
}
