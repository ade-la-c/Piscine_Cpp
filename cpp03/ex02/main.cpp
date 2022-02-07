/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:48:56 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 12:16:47 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main( void ) {

	FragTrap	Ron("Ron Weasley");
	operator<<(std::cout, Ron);

	Ron.takeDamage(25);
	Ron.beRepaired(10);
	Ron.attack("Random non-ginger wizard");
	Ron.highFiveGuys();
	operator<<(std::cout, Ron);

	// ScavTrap	Hagrid("Hagrid");
	// operator<<(std::cout, Hagrid);
	// ScavTrap	Lestrange("Bellatrix Lestrange");
	// operator<<(std::cout, Lestrange);

	// Lestrange.attack("Hagrid");
	// Hagrid.takeDamage(Lestrange.getAttackDamage());
	// Hagrid.guardGate();
	// operator<<(std::cout, Hagrid);
	// operator<<(std::cout, Lestrange);


	// ClapTrap	Potter("Harry Potter");
	// operator<<(std::cout, Potter);
	// ClapTrap	Severus("Severus Snape");
	// operator<<(std::cout, Severus);

	// Potter.attack("Severus Snape");
	// Severus.takeDamage(Potter.getAttackDamage());
	// Severus.attack("Severus Snape");
	// Severus.takeDamage(10);
	// Severus.beRepaired(10);
	// Potter.attack("Severus Snape");
	// Severus.takeDamage(4);
	// Potter.beRepaired(5);
	// operator<<(std::cout, Potter);
	// operator<<(std::cout, Severus);
}
