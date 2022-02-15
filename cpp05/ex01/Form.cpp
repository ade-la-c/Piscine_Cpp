/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:26:54 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/15 15:34:07 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(""), _singed(false) {}

Form::Form( std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _singed(false) {

	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else {
		this->_gradeToSign = gradeToSign;
		this->_gradeToExecute = gradeToExecute;
	}
}

Form::Form( Form const & copy ) {

	*this = copy;
}

Form &	Form::operator=( Form const & rhs ) {

	if (this != &rhs) {}

	return *this;
}

Form::~Form( void ) {}

void			Form::beSigned( Bureaucrat const & bureaucrat ) {

	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_singed = true;
	std::cout << this->_name << " Form has been signed by " << bureaucrat << std::endl;
}

std::string		Form::getName( void ) const {

	return this->_name;
}

int				Form::getGradeToSign( void ) const {

	return this->_gradeToSign;
}

int				Form::getGradeToExecute( void ) const {

	return this->_gradeToExecute;
}

const char *	Form::GradeTooHighException::what( void ) const throw() {

	return "The grade is too high, grade must be between 1 and 150\n";
}

const char *	Form::GradeTooLowException::what( void ) const throw() {

	return "The grade is too low, grade must be between 1 and 150\n";
}

std::ostream &	operator<<( std::ostream & COUT, Form const & rhs ) {

	COUT << rhs.getName() << ", grade to be signed " << rhs.getGradeToSign();
	COUT << ", grade to be executed " << rhs.getGradeToExecute() << std::endl;
	return COUT;
}
