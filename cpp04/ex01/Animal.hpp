/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:29 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 14:27:35 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class	Animal {


public:

	Animal( void );
	Animal( std::string type );
	Animal( Animal const & copy );
	Animal &	operator=( Animal const & rhs );
	virtual ~Animal( void );

	virtual void	makeSound( void ) const;

	std::string		getType( void ) const;


protected:

	std::string		type;

};

#endif
