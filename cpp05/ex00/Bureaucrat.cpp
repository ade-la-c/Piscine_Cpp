/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 20:08:07 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( Bureaucrat const & copy ) {

	*this = copy;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {

	if (this != &rhs) {}

	return *this;
}

Bureaucrat::~Bureaucrat( void ) {}

void	Bureaucrat::increment( void ) {

	try {
		if ( this->_grade == 1)
			throw this->exception;			// code wip idk what i'm doing
	}
	this->_grade--;
}

void	Bureaucrat::decrement( void ) {

	this->_grade++;
}

std::ostream &	operator<<( std::ostream & COUT, Bureaucrat const & rhs ) {

	COUT << "Name : " << rhs.getName() << std::endl;
	COUT << "Grade : " << rhs.getGrade() << std::endl;
	return COUT;
}
