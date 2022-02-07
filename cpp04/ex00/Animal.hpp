/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:29 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 20:08:23 by ade-la-c         ###   ########.fr       */
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
	~Animal( void );

	virtual void	makeSound( void ) const;

	std::string		getType( void ) const;


protected:

	std::string		type;

};

#endif
