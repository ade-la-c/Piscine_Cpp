/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:16:07 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/21 15:01:00 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template< typename T >
class	Array {


public:

	Array( void ) : _n(0), _array(new T *) {}
	Array( unsigned int n ) : _n(n), _array(new T[_n]()) {}
	Array( Array<T> const & copy ) : _array(NULL) { *this = copy; }
	Array<T> &	operator=( Array const & rhs ) {

		if (this != &rhs) {
			this->_n = rhs._n;
			if (this->_array)
				delete [] this->_array;
			this->_array = new T[_n]();
			for (unsigned int i = 0; i < _n; i++)
				this->_array[i] = rhs._array[i];
		}
		return *this;
	}
	~Array( void ) { delete [] this->_array; }

	unsigned int	size( void ) const { return this->_n; }

	class	ArrayOutOfBoundsExeption : public std::exception {

		virtual char const *	what() const throw() {
			return "Array out of bounds exception\n";
		}
	};

	T &	operator[](int id) const throw(ArrayOutOfBoundsExeption) {
		if (id < 0 || static_cast<unsigned int>(id) >= _n)
			throw (ArrayOutOfBoundsExeption());
		return _array[id];
	}


private:

	unsigned int	_n;
	T *				_array;

};



#endif
