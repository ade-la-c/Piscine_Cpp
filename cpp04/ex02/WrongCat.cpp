/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:10:02 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 01:03:35 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("wrong_cat") {}

WrongCat::WrongCat( WrongCat const & copy ) {

	*this = copy;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat( void ) {}

void	WrongCat::makeSound( void ) const {

	std::cout << "wrong Miaou miaou mon reuf" << std::endl;
}
