/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:11:59 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/06 15:53:50 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) {

	std::cout << "New " << name << " ClapTrap just spawned" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( ClapTrap const & copy ) {

	std::cout << "Copy ClapTrap just spawned" << std::endl;
	*this = copy;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {

	if (this != &rhs) {
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	return *this;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << this->_name << " explodes and there is nothing left" << std::endl;
}

void	ClapTrap::attack( const std::string & target ) {

	std::cout << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << this->getName() << " takes ";
	std::cout << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
		std::cout << this->getName() << " died" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << this->getName() << " drinks a healing potion and restores ";
	std::cout << amount << "hit points!" << std::endl;
}

std::string		ClapTrap::getName( void ) const {

	return this->_name;
}

unsigned int	ClapTrap::getHitPoints( void ) const {

	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints( void ) const {

	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage( void ) const {

	return this->_attackDamage;
}

std::ostream &	operator<<( std::ostream & COUT, ClapTrap const & rhs ) {

	COUT << "Name : " << rhs.getName() << std::endl;
	return COUT;
}
