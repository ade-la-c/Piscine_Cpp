/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:03:19 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 17:02:19 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) 
: Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & copy ) {

	*this = copy;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

void		ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {

	if (this->getSignedStatus() == false) {
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw NotSignedException();
	}
	if (this->getGradeToExecute() < executor.getGrade()) {
		std::cout << executor.getName() << " couldn't execute " << this->getName() << " because ";
		throw GradeTooLowException();
	}

	std::ofstream	ofs((this->_target + "_shrubbery").c_str());

	ofs << "                                              ." << std::endl;
	ofs << "                                   .         ;" << std::endl;
	ofs << "      .              .              ;%     ;;" << std::endl;
	ofs << "        ,           ,                :;%  %;" << std::endl;
	ofs << "         :         ;                   :;%;'     .," << std::endl;
	ofs << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	ofs << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	ofs << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	ofs << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	ofs << "             `@%.  `;@%.      ;@@%;" << std::endl;
	ofs << "               `@%%. `@%%    ;@@%;" << std::endl;
	ofs << "                 ;@%. :@%%  %@@%;" << std::endl;
	ofs << "                   %@bd%%%bd%%:;" << std::endl;
	ofs << "                     #@%%%%%:;;" << std::endl;
	ofs << "                     %@@%%%::;" << std::endl;
	ofs << "                     %@@@%(o);  . '" << std::endl;
	ofs << "                     %@@@o%;:(.,'" << std::endl;
	ofs << "                 `.. %@@@o%::;" << std::endl;
	ofs << "                    `)@@@o%::;" << std::endl;
	ofs << "                     %@@(o)::;" << std::endl;
	ofs << "                    .%@@@@%::;" << std::endl;
	ofs << "                    ;%@@@@%::;." << std::endl;
	ofs << "                   ;%@@@@%%:;;;." << std::endl;
	ofs << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	ofs.close();

}