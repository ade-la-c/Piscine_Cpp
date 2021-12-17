/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:16:55 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/08 00:33:51 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name ) {

	Zombie*		zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie[i].setName(name);
	return zombie;
}
