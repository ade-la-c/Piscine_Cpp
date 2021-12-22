/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:13:41 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/22 02:44:27 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main( int ac, char **av ) {

	if (ac != 2) {
		std::cerr << "Error : Karen filter needs one argument" << std::endl;
		return 1;
	}

	Karen	karen;

	karen.complain(av[1]);
	return 0;
}
