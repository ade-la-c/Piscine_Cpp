/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:11:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 20:30:08 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class	WrongAnimal {


public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & copy );
	WrongAnimal &	operator=( WrongAnimal const & rhs );
	~WrongAnimal( void );


protected:

};

#endif
