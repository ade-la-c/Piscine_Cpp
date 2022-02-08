/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:56:08 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 17:55:19 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#define X getX()
#define Y getY()

Point::Point( void ) : _x(0), _y(0) {}

Point::Point( const Fixed x, const Fixed y ) : _x(x), _y(y) {}

Point::Point( Point const & copy ) : _x(copy._x), _y(copy._y) {}

Point::~Point( void ) {}

Point &	Point::operator=( Point const & rhs ) {

	if (this != &rhs) {}
	return *this;
}

Fixed const		Point::getX( void ) const {

	return _x;
}

Fixed const		Point::getY( void ) const {

	return _y;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {

	Fixed	s, t, area;

	area = Fixed(0.5f) * (-b.Y * c.X + a.Y * (-b.X + c.X) + a.X * (b.Y - c.Y) + b.X * c.Y);

	s = Fixed(1) / (Fixed(2) * area) * (a.Y * c.X - a.X * c.Y + (c.Y - a.Y) * point.X + (a.X - c.X) * point.Y);
	t = Fixed(1) / (Fixed(2) * area) * (a.X * b.Y - a.Y * b.X + (a.Y - b.Y) * point.X + (b.X - a.X) * point.Y);

	if (s > Fixed(0) && t > Fixed(0) && (Fixed(1) - s - t) > Fixed(0))
		return true;
	else
		return false;
}

#undef X
#undef Y
