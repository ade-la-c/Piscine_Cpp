/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:44 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/22 18:52:05 by ade-la-c         ###   ########.fr       */
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

	std::cout << "shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "longest : " << sp.longestSpan() << std::endl;

	try {
		Span	sp2(3);

		sp2.addRange(4);

	} catch ( const std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Span	sp3(1);

		sp3.addNumber(1);
		sp3.shortestSpan();
	} catch ( const std::exception & e ) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
