/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:17:25 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 20:08:49 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog : public Animal {


public:

	Dog( void );
	Dog( Dog const & copy );
	Dog &	operator=( Dog const & rhs );
	~Dog( void );

	void	makeSound( void ) const;

};

#endif
