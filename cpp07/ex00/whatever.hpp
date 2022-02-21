/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:41:50 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/21 14:53:21 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>


template< typename T >
void		swap( T & a, T & b ) {

	T		tmp = a;

	a = b;
	b = tmp;
}

template< typename T >
T const &	min( T const & a, T const & b ) {

	return a < b ? a : b;
}

template< typename T >
T const &	max( T const & a, T const & b ) {

	return a > b ? a : b;
}

#endif
