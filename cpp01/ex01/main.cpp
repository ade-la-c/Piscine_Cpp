/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:16:11 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/08 00:40:14 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {

	Zombie*		zombie;
	int			N = 6;

	zombie = zombieHorde(N, "zombicito");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete [] zombie;
	return 0;
}
