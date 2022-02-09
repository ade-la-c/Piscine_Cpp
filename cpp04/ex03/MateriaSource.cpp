/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:41 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 17:46:25 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {}

MateriaSource::MateriaSource( MateriaSource const & copy ) {

	*this = copy;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs ) {

	if (this != &rhs) {}
	return *this;
}

MateriaSource::~MateriaSource( void ) {}
