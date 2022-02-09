/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:29 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/09 15:14:18 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class	AAnimal {


public:

	AAnimal( void );
	AAnimal( std::string type );
	AAnimal( AAnimal const & copy );
	AAnimal &	operator=( AAnimal const & rhs );
	virtual ~AAnimal( void );

	virtual void	makeSound( void ) const = 0;

	std::string		getType( void ) const;


protected:

	std::string		type;

};

#endif
