/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:13:13 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 18:26:01 by ade-la-c         ###   ########.fr       */
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

	if (this != &rhs) {}
	return *this;
}

Brain::~Brain( void ) {

	std::cout << "Brain disintegrates" << std::endl;
}
