/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:10:24 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 01:08:17 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class	WrongCat : public virtual WrongAnimal {


public:

	WrongCat( void );
	WrongCat( WrongCat const & copy );
	WrongCat &	operator=( WrongCat const & rhs );
	~WrongCat( void );

	void	makeSound( void ) const;

};

#endif
