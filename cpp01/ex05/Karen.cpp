/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:23:43 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/18 03:14:54 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {}

Karen::~Karen( void ) {}

void	Karen::complain( std::string level ) {

	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// void			fcts[4] = {(Karen::)( void )};

	typedef	void(*fonctionPtr)();
	fonctionPtr		fcts[4] = {(*this->_debug)(), (*this->_info)(),
				(*this->_warning)(), (*this->_error)()};

	for (int i = 0; levels[i]; i++) {
		if (!levels[i].compare(level))
			Karen::fcts[i]();
	}
	return;
}
