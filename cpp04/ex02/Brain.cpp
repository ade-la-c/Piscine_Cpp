/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:13:13 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 13:35:21 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Brain constructs itself" << std::endl;
}

Brain::Brain( Brain const & copy ) {

	std::cout << "Copy brain constructs itself" << std::endl;
	*this = copy;
}

Brain &	Brain::operator=( Brain const & rhs ) {

	if (this != &rhs) {
		for (size_t i = 0; i < rhs._ideas->length(); i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

Brain::~Brain( void ) {

	std::cout << "Brain disintegrates" << std::endl;
}
