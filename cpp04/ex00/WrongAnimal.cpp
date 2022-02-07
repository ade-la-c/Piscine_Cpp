/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:12:58 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 20:28:27 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {}

WrongAnimal::WrongAnimal( WrongAnimal const & copy ) {

	*this = copy;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs ) {

	return *this;
}

WrongAnimal::~WrongAnimal( void ) {}
