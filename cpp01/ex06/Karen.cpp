/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:16:31 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/22 02:55:20 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {

	std::cout << "*Karen enters the restaurant*" << std::endl;
}

Karen::~Karen( void ) {

	std::cout << "*Karen leaves the restaurant*" << std::endl;
}

void	Karen::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level ) {

	int				i = -1;
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (++i < 4) {
		if (!levels[i].compare(level)) {
			break;
		}
	}
	switch (i) {
		case 0 :
			this->debug();
			std::cout << std::endl;
		case 1 :
			this->info();
			std::cout << std::endl;
		case 2 :
			this->warning();
			std::cout << std::endl;
		case 3 :
			this->error();
			break;
		case 4 :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
