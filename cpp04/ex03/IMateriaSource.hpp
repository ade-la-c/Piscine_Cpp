/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:15:29 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/11 16:52:37 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.hpp"

class	IMateriaSource {


public:

	virtual ~IMateriaSource( void ) {}
	virtual void			learnMateria( AMateria * ) = 0;
	virtual AMateria *		createMateria( std::string const & type ) = 0;

};

#endif
