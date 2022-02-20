/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:28 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/20 15:09:53 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int		main( void ) {

	{
		Intern someRandomIntern;

		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << std::endl;

		Form* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << std::endl;

		Form* scf;
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << std::endl;

		Form* srf;
		srf = someRandomIntern.makeForm("some random", "Bender");

		delete rrf;
		delete ppf;
		delete scf;
	}

	// system("leaks intern");

	// try {
	// 	Bureaucrat				PhilippePoutou("Philippe Poutou", 100);
	// 	std::cout << PhilippePoutou << std::endl;
	// 	ShrubberyCreationForm	Shrubbery("Foret");
	// 	std::cout << Shrubbery << std::endl;

	// 	PhilippePoutou.signForm(Shrubbery);
	// 	PhilippePoutou.executeForm(Shrubbery);

	// } catch ( const std::exception & e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try {
	// 	Bureaucrat				HumainMechant("Humain Mechant", 45);
	// 	std::cout << HumainMechant << std::endl;
	// 	Bureaucrat				BeepBoop("BeepBoop", 72);
	// 	std::cout << BeepBoop << std::endl;
	// 	RobotomyRequestForm		Robotomy("Humain Random");
	// 	std::cout << Robotomy << std::endl;

	// 	BeepBoop.signForm(Robotomy);
	// 	HumainMechant.executeForm(Robotomy);
	// 	BeepBoop.executeForm(Robotomy);

	// } catch ( const std::exception & e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try {
	// 	Bureaucrat					DonaldTrump("Donald Trump", 1);
	// 	std::cout << DonaldTrump << std::endl;
	// 	PresidentialPardonForm		PresidentialPardon("Lil Wayne");
	// 	std::cout << PresidentialPardon << std::endl;

	// 	DonaldTrump.signForm(PresidentialPardon);
	// 	DonaldTrump.executeForm(PresidentialPardon);

	// } catch ( const std::exception & e) {
	// 	std::cerr << e.what() << std::endl;
	// }


	// try {
	// 	Bureaucrat	Thomas = Bureaucrat("Thomas", 50);
	// 	std::cout << Thomas << std::endl;
	// 	Form		declaration_impots = Form("declaration_impots", 40, 30);
	// 	std::cout << declaration_impots << std::endl;

	// 	Thomas.signForm(declaration_impots);

	// } catch(const std::exception & e) {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	// try {
	// 	Bureaucrat	Mateo = Bureaucrat("Mateo", 20);
	// 	std::cout << Mateo << std::endl;
	// 	Form		document_important = Form("document_important", 20, 10);
	// 	std::cout << document_important << std::endl;

	// 	Mateo.signForm(document_important);
	// 	Mateo.signForm(document_important);

	// } catch(const std::exception & e) {
	// 	std::cerr << e.what() << std::endl;
	// }


	// try {
	// 	Bureaucrat	Thierry = Bureaucrat("Thierry", 1);
	// 	std::cout << Thierry << std::endl;

	// 	Thierry.increment();
	// 	std::cout << Thierry << std::endl;
	// } catch (std::exception & e) {
	// 	std::cerr << "Thierry exception : " << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat	Sebastrick = Bureaucrat("Sebastrick", 200);

	// } catch (std::exception & e) {
	// 	std::cerr << "Sebstrick exception : " << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat	Titouan = Bureaucrat("Titouan", 35);
	// 	std::cout << Titouan << std::endl;

	// 	Titouan.decrement();
	// 	Titouan.increment();
	// 	Titouan.increment();
	// 	std::cout << Titouan << std::endl;

	// } catch (std::exception & e) {
	// 	std::cerr << "Titouan exception : " << e.what() << std::endl;
	// }


	return 0;
}
