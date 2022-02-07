/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:25:52 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/06 22:41:01 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main( void ) {

	ClapTrap	Potter("Harry Potter");
	operator<<(std::cout, Potter);
	ClapTrap	Severus("Severus Snape");
	operator<<(std::cout, Severus);

	Potter.attack("Severus Snape");
	Severus.takeDamage(Potter.getAttackDamage());
	Severus.attack("Severus Snape");
	Severus.takeDamage(10);
	Severus.beRepaired(10);
	Potter.attack("Severus Snape");
	Severus.takeDamage(4);
	Potter.beRepaired(5);
	operator<<(std::cout, Potter);
	operator<<(std::cout, Severus);
}
