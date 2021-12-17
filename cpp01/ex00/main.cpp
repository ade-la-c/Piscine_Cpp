/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:22:53 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/07 21:07:09 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {

	Zombie*		zombie;
	
	zombie = newZombie("Baby zombie on a chicken");
	zombie->announce();
	delete zombie;
	randomChump("Lil Zombi");
	return 0;
}
