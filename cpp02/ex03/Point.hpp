/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:53:46 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 17:49:41 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class	Point {


public:

	Point( void );
	Point( const Fixed x, const Fixed y );
	Point( Point const & copy );
	~Point( void );

	Point &	operator=( Point const & rhs );

	Fixed const		getX( void ) const;
	Fixed const		getY( void ) const;


private:

	Fixed const		_x;
	Fixed const		_y;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif
