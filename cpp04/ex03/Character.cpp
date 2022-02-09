/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:49:59 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 17:52:38 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ) {}

Character::Character( Character const & copy ) {

	*this = copy;
}

Character &	Character::operator=( Character const & rhs ) {

	if (this != &rhs) {}
	return *this;
}

Character::~Character( void ) {}
