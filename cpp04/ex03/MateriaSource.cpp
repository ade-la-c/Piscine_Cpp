/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:41 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 15:35:57 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {

	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & copy ) {

	*this = copy;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs ) {

	if (this == &rhs)
		return *this;

	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	for (int i = 0; i < 4; i++)
		this->_materias[i] = rhs._materias[i]->clone();

	return *this;
}

MateriaSource::~MateriaSource( void ) {

	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
}

void			MateriaSource::learnMateria( AMateria * materia ) {

	int	i = 0;

	while ( i < 4 && this->_materias[i] != NULL)
		i++;
	if (i == 4)
		return;

	this->_materias[i] = materia;
}

AMateria *		MateriaSource::createMateria( std::string const & type ) {

	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL) {
			if (this->_materias[i]->getType().compare(type) == 0)
				return this->_materias[i]->clone();
		}
	}
	return 0;
}
