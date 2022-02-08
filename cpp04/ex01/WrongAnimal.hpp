/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:11:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 01:07:05 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class	WrongAnimal {


public:

	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const & copy );
	WrongAnimal &	operator=( WrongAnimal const & rhs );
	~WrongAnimal( void );

	void			makeSound( void ) const;

	std::string		getType( void ) const;


protected:

	std::string		type;

};

#endif
