/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:40:01 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 17:02:11 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) 
: Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
: Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & copy ) {

	*this = copy;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

void		PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	if (this->getSignedStatus() == false) {
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw NotSignedException();
	}
	if (this->getGradeToExecute() < executor.getGrade()) {
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw GradeTooLowException();
	}

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n" << std::endl;
}
