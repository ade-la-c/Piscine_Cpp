/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:44 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/23 14:43:20 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortest span :\t" << sp.shortestSpan() << std::endl;
	std::cout << "longest span :\t" << sp.longestSpan() << std::endl;

	try {
		Span	sp2(3);

		sp2.addRange(4);

	} catch ( const std::exception & e ) {
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	try {
		Span	sp3(100000);

		sp3.addRange(100000);
		std::cout << "100 000 numbers have been successfully added to vector" << std::endl;
		std::cout << "shortest span :\t" << sp3.shortestSpan() << std::endl;
		std::cout << "longest span :\t" << sp3.longestSpan() << std::endl;

	} catch ( const std::exception & e ) {
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	return 0;
}
