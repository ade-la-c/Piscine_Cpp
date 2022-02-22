/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:22:01 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/22 17:40:22 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <algorithm>
# include <vector>

class	Span {


public:

	Span( void );
	Span( unsigned int N );
	Span( Span const & copy );
	Span &	operator=( Span const & rhs );
	~Span( void );

	void		addNumber( int n );
	void		addRange( unsigned int N );

	int			shortestSpan( void );
	int			longestSpan( void );

	class	NotEnoughNumbersException : public std::exception {

	public:
		virtual const char *	what() const throw();
	};

	class	NoSpaceLeftException : public std::exception {

	public:
		virtual const char *	what() const throw();
	};


private:

	unsigned int		_n;
	std::vector<int>	_v;

};

#endif
