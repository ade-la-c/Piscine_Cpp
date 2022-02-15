/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:21:28 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/15 15:31:15 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void ) {

	try
	{
		Bureaucrat	Thomas = Bureaucrat("Thomas", 50);
		std::cout << Thomas << std::endl;
		Form		declaration_impots = Form("declaration_impots", 40, 30);
		std::cout << declaration_impots << std::endl;

		Thomas.signForm(declaration_impots);

	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	

	// try {
	// 	Bureaucrat	Thierry = Bureaucrat("Thierry", 1);
	// 	std::cout << Thierry << std::endl;

	// 	Thierry.increment();
	// 	std::cout << Thierry << std::endl;
	// } catch (std::exception & e) {
	// 	std::cout << "Thierry exception : " << e.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat	Sebastrick = Bureaucrat("Sebastrick", 200);

	// } catch (std::exception & e) {
	// 	std::cout << "Sebstrick exception : " << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat	Titouan = Bureaucrat("Titouan", 35);
	// 	std::cout << Titouan << std::endl;

	// 	Titouan.decrement();
	// 	Titouan.increment();
	// 	Titouan.increment();
	// 	std::cout << Titouan << std::endl;

	// } catch (std::exception & e) {
	// 	std::cout << "Titouan exception : " << e.what() << std::endl;
	// }
	return 0;
}
