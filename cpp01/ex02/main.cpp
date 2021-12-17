/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:51:13 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/08 01:20:25 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ) {

	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "string address			: " << &string << std::endl;
	std::cout << "string address with stringPTR	: " << stringPTR << std::endl;
	std::cout << "string address with stringREF	: " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "string using stringPTR	: " << *stringPTR << std::endl;
	std::cout << "string using stringREF	: " << stringREF << std::endl;
	return 0;
}
