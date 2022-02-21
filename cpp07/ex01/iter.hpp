/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:11:28 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/21 14:49:48 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template< typename T >
void	iter( T * a, int n, void (*fct)( T const & a ) ) {

	for (int i = 0; i < n; i++) {
		fct(a[i]);
	}
}

#endif
