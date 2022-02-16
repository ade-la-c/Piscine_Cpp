/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:56:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 19:13:05 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::Intern( Intern const & copy ) {

	*this = copy;
}

Intern &	Intern::operator=( Intern const & rhs ) {

	if (this != &rhs) {}
	return *this;
}

Intern::~Intern( void ) {}

Form *		Intern::makeForm( std::string name, std::string target ) {

	std::string				names[3] = { "shrubbery creation",
										"robotomy request",
										"presidential pardon" };
	Form *					forms[3] = { new ShrubberyCreationForm(target), 
										new RobotomyRequestForm(target),
										new PresidentialPardonForm(target) };
	Form *					form = NULL;

	for (int i = 0; i < 3; i++) {
		if (!name.compare(names[i])) {
			std::cout << "Intern creates " << name << "." << std::endl;
			form = forms[i];
		} else
			delete forms[i];
	}
	if (form == NULL) {
		std::cerr << "The " << name << " form you requested doesn't exist... Here's your coffee.";
		std::cerr << std::endl;
	}
	return form;
}
