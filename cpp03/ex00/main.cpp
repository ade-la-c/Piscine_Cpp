/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:25:52 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/06 15:52:57 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main( void ) {

	ClapTrap	trap("Harry Potter");
	ClapTrap	trap2("Severus Snape");

	trap.attack("Severus Snape");
	trap2.takeDamage(trap.getAttackDamage());
}
