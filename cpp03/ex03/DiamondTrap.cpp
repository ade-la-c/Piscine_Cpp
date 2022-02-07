/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:49:10 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 16:39:36 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("_clap_name", 100, 50, 30), ScavTrap(), FragTrap() {

	std::cout << "New DiamondTrap just spawned" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap() {

	std::cout << "New " << name << " DiamondTrap just spawned" << std::endl;
	this->_name = name;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ) {

	std::cout << "Copy DiamondTrap just spawned" << std::endl;
	*this = copy;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs ) {

	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setAttackDamage(rhs.getAttackDamage());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setHitPoints(rhs.getHitPoints());
	}
	return *this;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << this->_name << " DiamondTrap explodes and there is nothing left";
	std::cout << std::endl;
}

void		DiamondTrap::whoAmI( void ) {

	std::cout << "- Who am I ? - asks " << this->_name << " to himself" << std::endl;
	std::cout << "(His real identity is " << this->ClapTrap::getName() << ")" << std::endl;
}

std::ostream &	operator<<( std::ostream & COUT, DiamondTrap const & rhs ) {

	COUT << "Name :\t\t" << rhs.getName() << std::endl;
	COUT << "Hit Points :\t" << rhs.getHitPoints() << std::endl;
	COUT << "Energy Points :\t" << rhs.getEnergyPoints() << std::endl;
	COUT << "Attack Damage :\t" << rhs.getAttackDamage() << std::endl;
	COUT << std::endl;
	return COUT;
}
