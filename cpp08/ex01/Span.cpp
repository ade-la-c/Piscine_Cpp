/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:16 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/22 18:47:37 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _n(0) {}

Span::Span( unsigned int N ) : _n(N) {}

Span::Span( Span const & copy ) {

	*this = copy;
}

Span &	Span::operator=( Span const & rhs ) {

	if (this != &rhs) {
		this->_n = rhs._n;
		this->_v = rhs._v;
	}
	return *this;
}

Span::~Span( void ) {}

void	Span::addNumber( int n ) {

	if (_v.size() == _n)
		throw NoSpaceLeftException();
	_v.push_back(n);
}

void	Span::addRange( unsigned int N ) {

	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		addNumber(rand());
	}
}

int		Span::shortestSpan( void ) {

	int		n = INT32_MAX;

	if (_v.size() < 2)
		throw NotEnoughNumbersException();

	std::sort(_v.begin(), _v.end());

	for (size_t i = 0; i + 1 < _v.size(); i++) {
		int value = _v[i + 1] - _v[i];
		if ( value < n)
			n = value;
	}
	return n;
}

int		Span::longestSpan( void ) {

	if (_v.size() < 2)
		throw NotEnoughNumbersException();

	std::sort(_v.begin(), _v.end());

	return _v[_v.size() - 1] - _v[0];
}

const char *	Span::NotEnoughNumbersException::what() const throw () {

	return "vector doesn't have enough numbers\n";
}

const char *	Span::NoSpaceLeftException::what() const throw () {

	return "vector is full\n";
}
