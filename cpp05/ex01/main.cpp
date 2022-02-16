/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:28 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 14:31:29 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void ) {

	try {
		Bureaucrat	Thomas = Bureaucrat("Thomas", 50);
		std::cout << Thomas << std::endl;
		Form		declaration_impots = Form("declaration_impots", 40, 30);
		std::cout << declaration_impots << std::endl;

		Thomas.signForm(declaration_impots);

	} catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat	Mateo = Bureaucrat("Mateo", 20);
		std::cout << Mateo << std::endl;
		Form		document_important = Form("document_important", 20, 10);
		std::cout << document_important << std::endl;

		Mateo.signForm(document_important);
		Mateo.signForm(document_important);

	} catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}


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

	// system("leaks bureaucrat");

	return 0;
}
