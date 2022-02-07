/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:49:30 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 02:11:29 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20) {

	std::cout << "New ScavTrap just spawned" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20) {

	std::cout << "New " << name << " ScavTrap just spawned" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy ) {

	std::cout << "Copy ScavTrap just spawned" << std::endl;
	*this = copy;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {

	if (this != &rhs) {
		// this->_name = rhs._name;
		this->setName(rhs.getName());
		// this->_attackDamage = rhs._attackDamage;
		this->setAttackDamage(rhs.getAttackDamage());
		// this->_energyPoints = rhs._energyPoints;
		this->setEnergyPoints(rhs.getEnergyPoints());
		// this->_hitPoints = rhs._hitPoints;
		this->setHitPoints(rhs.getHitPoints());
	}
	return *this;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << this->getName() << " ScavTrap explodes and there is nothing left";
	std::cout << std::endl;
}

void	ScavTrap::attack( const std::string & target ) {

	std::cout << this->getName() << " ScavTrap attacks " << target << ", causing ";
	std::cout << this->getAttackDamage() << " points of damage!" << std::endl;

	// this->_energyPoints--;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void	ScavTrap::guardGate( void ) {

	std::cout << this->getName() << " ScavTrap now guards the gate" << std::endl;
}

std::ostream &	operator<<( std::ostream & COUT, ScavTrap const & rhs ) {

	COUT << "Name :\t\t" << rhs.getName() << std::endl;
	COUT << "Hit Points :\t" << rhs.getHitPoints() << std::endl;
	COUT << "Energy Points :\t" << rhs.getEnergyPoints() << std::endl;
	COUT << "Attack Damage :\t" << rhs.getAttackDamage() << std::endl;
	COUT << std::endl;
	return COUT;
}
