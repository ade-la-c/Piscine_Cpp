/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:20:14 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 20:08:40 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat : public Animal {


public:

	Cat( void );
	Cat( Cat const & copy );
	Cat &	operator=( Cat const & rhs );
	~Cat( void );

	void	makeSound( void ) const;

};

#endif
