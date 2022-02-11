/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:34:57 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/11 20:47:11 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

class	MateriaSource : public IMateriaSource {


public:

	MateriaSource( void );
	MateriaSource( MateriaSource const & copy );
	MateriaSource &	operator=( MateriaSource const & rhs );
	~MateriaSource( void );

	void		learnMateria( AMateria * materia );
	AMateria *	createMateria( std::string const & type );

private:

	AMateria *		_materias[4];

};

#endif
