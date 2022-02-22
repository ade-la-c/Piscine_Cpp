/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:53:57 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/22 19:41:34 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <algorithm>
# include <deque>
# include <iterator>

template< typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack< T, Container > {


public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack( void ) {}
	MutantStack( MutantStack const & copy ) { *this = copy; }
	MutantStack &	operator=( MutantStack const & rhs ) {
		if (this != &rhs) {}
		return *this;
	}
	~MutantStack( void ) {}

	iterator	begin() {
		return this->c.begin();
	}

	iterator	end() {
		return this->c.end();
	}

};

#endif
