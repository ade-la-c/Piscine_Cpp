/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:10:55 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/21 14:50:17 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void	fct( T const & a ) {

	std::cout << a << std::endl;
}

int		main( void ) {

	int				tab[5] = { 10, 15, 20, 25, 30 };
	std::string		strs[3] = { "un", "deux", "trois" };

	iter(tab, 5, &fct);
	std::cout << std::endl;
	iter(strs, 3, &fct);
	std::cout << std::endl;

	return 0;
}
