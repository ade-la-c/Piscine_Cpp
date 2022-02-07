/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:10:24 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 20:15:16 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {


public:

	WrongCat( void );
	WrongCat( WrongCat const & copy );
	WrongCat &	operator=( WrongCat const & rhs );
	~WrongCat( void );


private:



};

#endif
