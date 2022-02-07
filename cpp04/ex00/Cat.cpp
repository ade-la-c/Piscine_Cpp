/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:25:21 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 19:32:54 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {}

Cat::Cat( Cat const & copy ) {

	*this = copy;
}

Cat &	Cat::operator=( Cat const & rhs ) {

	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Cat::~Cat( void ) {}

void	Cat::makeSound( void ) const {

	std::cout << "Miaou miaou mon reuf" << std::endl;
}

// std::string		Cat::getType( void ) const {

// 	return this->type;
// }
