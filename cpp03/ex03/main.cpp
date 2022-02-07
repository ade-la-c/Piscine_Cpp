/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:48:56 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 16:42:20 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main( void ) {

	DiamondTrap	Dobby("Dobby_elfe_libre");
	std::cout << std::endl;
	operator<<(std::cout, Dobby);

	Dobby.whoAmI();
	std::cout << std::endl;
	Dobby.takeDamage(15);
	Dobby.beRepaired(30);
	Dobby.attack("Lucius ce chien");
	Dobby.highFiveGuys();
	Dobby.guardGate();
	std::cout << std::endl;
	operator<<(std::cout, Dobby);


	// FragTrap	Ron("Ron_Weasley");
	// operator<<(std::cout, Ron);

	// Ron.takeDamage(25);
	// Ron.beRepaired(10);
	// Ron.attack("Random non-ginger wizard");
	// Ron.highFiveGuys();
	// operator<<(std::cout, Ron);


	// ScavTrap	Hagrid("Hagrid");
	// operator<<(std::cout, Hagrid);
	// ScavTrap	Lestrange("Bellatrix_Lestrange");
	// operator<<(std::cout, Lestrange);

	// Lestrange.attack("Hagrid");
	// Hagrid.takeDamage(Lestrange.getAttackDamage());
	// Hagrid.guardGate();
	// operator<<(std::cout, Hagrid);
	// operator<<(std::cout, Lestrange);


	// ClapTrap	Potter("Harry_Potter");
	// operator<<(std::cout, Potter);
	// ClapTrap	Severus("Severus_Snape");
	// operator<<(std::cout, Severus);

	// Potter.attack("Severus_Snape");
	// Severus.takeDamage(Potter.getAttackDamage());
	// Severus.attack("Severus_Snape");
	// Severus.takeDamage(10);
	// Severus.beRepaired(10);
	// Potter.attack("Severus_Snape");
	// Severus.takeDamage(4);
	// Potter.beRepaired(5);
	// operator<<(std::cout, Potter);
	// operator<<(std::cout, Severus);
}
