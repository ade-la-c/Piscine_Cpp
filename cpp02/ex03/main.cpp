/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:53:15 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 17:57:05 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point a = Point(Fixed(0), Fixed(0));
	Point b = Point(Fixed(1), Fixed(0));
	Point c = Point(Fixed(0), Fixed(1));

	std::cout << bsp(a, b, c, Point(Fixed(0.3f), Fixed(0.3f))) << std::endl; // dedans
	std::cout << bsp(a, b, c, Point(Fixed(0.5f), Fixed(0.5f))) << std::endl; // sur le bord
	std::cout << bsp(a, b, c, Point(Fixed(1), Fixed(1))) << std::endl; // dehors
}
