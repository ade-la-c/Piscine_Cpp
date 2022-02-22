/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:42:35 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/22 16:15:36 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <stdexcept>

template< typename T >
int &	easyfind( T & a, int n ) {

	typename T::iterator	iter;
	iter = std::find(a.begin(), a.end(), n);

	std::cout << "easyfind tries to find integer " << n << ':' << std::endl;

	if (iter == a.end())
		throw std::exception();
	return *iter;
}

#endif
