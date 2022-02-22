/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:42:09 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/22 16:16:05 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main( void ) {

	std::vector< int >	vector;
	int 				find;

	vector.push_back(5);
	vector.push_back(94);
	vector.push_back(-1);
	vector.push_back(0);

	std::cout << "vector content :";
	for (size_t i = 0; i < vector.size(); i++) {
		std::cout << ' ' << vector.at(i);
	}
	std::cout << std::endl;

	try {
		find = easyfind(vector, 5);
		std::cout <<find << std::endl;
	} catch ( const std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		find = easyfind(vector, -1);
		std::cout << find << std::endl;
	} catch ( const std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		find = easyfind(vector, 100);
		std::cout << find << std::endl;
	} catch ( const std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
