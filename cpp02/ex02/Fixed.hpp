/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 22:24:02 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/03 00:36:01 by ade-la-c         ###   ########.fr       */
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
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );

	float		toFloat( void ) const;
	int			toInt( void ) const;

	bool		operator>( Fixed const & rhs ) const;
	bool		operator<( Fixed const & rhs ) const;
	bool		operator>=( Fixed const & rhs ) const;
	bool		operator<=( Fixed const & rhs ) const;
	bool		operator==( Fixed const & rhs ) const;
	bool		operator!=( Fixed const & rhs ) const;

	Fixed &		operator+( Fixed const & rhs ) const;
	Fixed &		operator-( Fixed const & rhs ) const;
	Fixed &		operator*( Fixed const & rhs ) const;
	Fixed &		operator/( Fixed const & rhs ) const;
	
	Fixed &		operator++( void );
	Fixed &		operator--( void );
	Fixed &		operator++( int );
	Fixed &		operator--( int );
	
	static const Fixed &	min( Fixed const & x, Fixed const & y );
	static const Fixed &	max( Fixed const & x, Fixed const & y );


private:

	int		_fixedValue;

	static const int	_nbrBits = 8;

};

std::ostream &		operator<<( std::ostream & COUT, Fixed const & rhs );

#endif
