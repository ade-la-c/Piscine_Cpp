/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:41 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/11 21:08:07 by ade-la-c         ###   ########.fr       */
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

void			MateriaSource::learnMateria( AMateria * materia ) {

	for (int i = 0; i < 4; i++)
		this->_materias[i] == NULL ? this->_materias[i] = materia : 0;
}

AMateria *		MateriaSource::createMateria( std::string const & type ) {

	for (int i = 0; i < 4; i++)
		// if (this->_materias[i] && type == this->_materias[i]->getType())
		if (this->_materias[i] && !(type.compare(this->_materias[i]->getType())))
			return this->_materias[i];

	return 0;
}
