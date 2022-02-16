/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:28 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 13:50:57 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main( void ) {

	try {
		Bureaucrat	Thierry = Bureaucrat("Thierry", 1);
		std::cout << Thierry << std::endl;

		Thierry.increment();
		std::cout << Thierry << std::endl;
	} catch (std::exception & e) {
		std::cerr << "Thierry exception : " << e.what() << std::endl;
	}

	try {
		Bureaucrat	Sebastrick = Bureaucrat("Sebastrick", 200);

	} catch (std::exception & e) {
		std::cerr << "Sebstrick exception : " << e.what() << std::endl;
	}
	try {
		Bureaucrat	Titouan = Bureaucrat("Titouan", 35);
		std::cout << Titouan << std::endl;

		Titouan.decrement();
		Titouan.increment();
		Titouan.increment();
		std::cout << Titouan << std::endl;

	} catch (std::exception & e) {
		std::cerr << "Titouan exception : " << e.what() << std::endl;
	}

	// system("leaks bureaucrat");

	return 0;
}
