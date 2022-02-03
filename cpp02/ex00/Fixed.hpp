/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 22:49:51 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/01/10 12:38:43 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed {


public:

	Fixed( void );
	Fixed( Fixed const & copy );
	~Fixed( void );

	Fixed&	operator=( Fixed const & copy );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );


private:

	int		_fixedValue;

	static const int	_nbrBits = 8;

};

#endif
