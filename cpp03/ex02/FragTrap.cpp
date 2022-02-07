/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 02:21:44 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 02:42:49 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("", 100, 100, 30) {

	std::cout << "New FragTrap just spawned" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {

	std::cout << "New " << name << " FragTrap just spawned" << std::endl;
}

FragTrap::FragTrap( FragTrap const & copy ) {

	std::cout << "Copy FragTrap just spawned" << std::endl;
	*this = copy;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs ) {

	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setAttackDamage(rhs.getAttackDamage());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setHitPoints(rhs.getHitPoints());
	}
	return *this;
}

FragTrap::~FragTrap( void ) {

	std::cout << this->getName() << " ScavTrap explodes and there is nothing left";
	std::cout << std::endl;
}


std::ostream &	operator<<( std::ostream & COUT, FragTrap const & rhs ) {

	COUT << "Name :\t\t" << rhs.getName() << std::endl;
	COUT << "Hit Points :\t" << rhs.getHitPoints() << std::endl;
	COUT << "Energy Points :\t" << rhs.getEnergyPoints() << std::endl;
	COUT << "Attack Damage :\t" << rhs.getAttackDamage() << std::endl;
	COUT << std::endl;
	return COUT;
}
