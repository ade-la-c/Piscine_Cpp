/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:26:54 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 16:59:54 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(""), _signed(false) {}

Form::Form( std::string name, int gradeToSign, int gradeToExecute )
: _name(name), _signed(false) {

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

	if (this != &rhs) {
		this->_signed = rhs._signed;
		this->_gradeToSign = rhs._gradeToSign;
		this->_gradeToExecute = rhs._gradeToExecute;
	}
	return *this;
}

Form::~Form( void ) {}

void			Form::beSigned( Bureaucrat const & bureaucrat ) {

	if (bureaucrat.getGrade() > this->_gradeToSign || this->_signed == true) {
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name;
		std::cout << " because ";
		if (this->_signed == true)
			throw AlreadySignedException();
		throw GradeTooLowException();
	}
	this->_signed = true;
	std::cout << this->_name << " has been signed by " << bureaucrat << std::endl;
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

bool			Form::getSignedStatus( void ) const {

	return this->_signed;
}

const char *	Form::GradeTooHighException::what( void ) const throw() {

	return "the grade is too high.\n";
}

const char *	Form::GradeTooLowException::what( void ) const throw() {

	return "the grade is too low.\n";
}

const char *	Form::AlreadySignedException::what( void ) const throw() {

	return "the form has already been signed.\n";
}

const char *	Form::NotSignedException::what( void ) const throw() {

	return "the form has not yet being signed.\n";
}

std::ostream &	operator<<( std::ostream & COUT, Form const & rhs ) {

	COUT << rhs.getName() << ", grade to be signed " << rhs.getGradeToSign();
	COUT << ", grade to be executed " << rhs.getGradeToExecute() << "." << std::endl;
	return COUT;
}
