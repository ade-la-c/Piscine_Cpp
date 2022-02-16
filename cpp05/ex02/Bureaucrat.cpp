/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:00 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 16:57:19 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy ) {

	*this = copy;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {

	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat( void ) {}

void	Bureaucrat::signForm( Form & form ) {

	form.beSigned(*this);
	std::cout << this->_name << " signed " << form.getName() << ".\n" << std::endl;
}

void	Bureaucrat::executeForm( Form const & form ) const {

	form.execute(*this);
	std::cout << this->_name << " executed " << form.getName() << ".\n" << std::endl;
}

void	Bureaucrat::increment( void ) {

	if ( this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
	std::cout << this->_name << " gets promoted to grade " << this->_grade << std::endl;
}

void	Bureaucrat::decrement( void ) {

	if ( this->_grade == 1)
		throw GradeTooLowException();
	this->_grade++;
	std::cout << this->_name << " gets demoted to grade " << this->_grade << std::endl;
}

std::string			Bureaucrat::getName( void ) const {

	return this->_name;
}

int					Bureaucrat::getGrade( void ) const {

	return this->_grade;
}

const char *		Bureaucrat::GradeTooHighException::what( void ) const throw() {

	return "The grade is too high, grade must be between 1 and 150.\n";
}

const char *		Bureaucrat::GradeTooLowException::what( void ) const throw() {

	return "The grade is too low, grade must be between 1 and 150.\n";
}

std::ostream &	operator<<( std::ostream & COUT, Bureaucrat const & rhs ) {

	COUT << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return COUT;
}
