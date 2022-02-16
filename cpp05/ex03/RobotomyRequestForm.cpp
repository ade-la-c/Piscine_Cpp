/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:02:51 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 17:02:06 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( void ) 
: Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
: Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & copy ) {

	*this = copy;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

void		RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	if (this->getSignedStatus() == false) {
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw NotSignedException();
	}
	if (this->getGradeToExecute() < executor.getGrade()) {
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw GradeTooLowException();
	}

	if (rand() % 2 == 1) {
		std::cout << "* loud drilling noises *" << std::endl;
		std::cout << this->_target << " has been robotomized.\n" << std::endl;
	}

}
