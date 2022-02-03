/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:14:53 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/03 00:30:33 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class	Fixed {


public:

	Fixed( void );
	Fixed( Fixed const & copy );
	Fixed( int const num );
	Fixed( float const num );
	~Fixed( void );

	Fixed&		operator=( Fixed const & rhs );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

	float		toFloat( void ) const;
	int			toInt( void ) const;


private:

	int		_fixedValue;

	static const int	_nbrBits = 8;

};

std::ostream &		operator<<( std::ostream & COUT, Fixed const & rhs );

#endif
