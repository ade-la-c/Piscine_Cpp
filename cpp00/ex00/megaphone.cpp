/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:43:11 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/11/29 16:35:52 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( int ac, char **av ) {

	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (i = 1; av[i]; i++) {
			for (j = 0; av[i][j]; j++)
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					av[i][j] -= 32;
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	return 0;
}