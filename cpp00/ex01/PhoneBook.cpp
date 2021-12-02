/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:31:03 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/02 03:12:29 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "Destructor called" << std::endl;
}

int		PhoneBook::waitInput( void ) {

	std::string	input;

	std::cout << "Hello there 👋" << std::endl;
	std::cout << "Welcome to the crappy and (not) awesome Phone Book, ";
	std::cout << "You can interact with it using the following commands" << std::endl;
	std::cout << "ADD (create a contact)," << std::endl;
	std::cout << "SEARCH (look for an existing contact)" << std::endl;
	std::cout << "and EXIT (quit phonebook)" << std::endl;
	std::getline(std::cin, input);
	while (1)
	{
		if (!input.compare("ADD"))
			this->addContact();
		else if (!input.compare("SEARCH"))
			this->searchContact();
		else if (!input.compare("EXIT"))
			return 1;
		else
			this->wrongInput();
	}
	return 0;
}

void	PhoneBook::wrongInput( void ) {

	std::cout << "Wrong Input" << std::endl;
}

void	PhoneBook::addContact( void ) {

	std::string		input;
	Contact			cont;

	std::cout << "Hi, Please type the First Name of the contact : ";
	std::getline(std::cin, input);
	while (cont.setFirstName(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "I'll also need the Last Name please : ";
	std::getline(std::cin, input);
	while (cont.setLastName(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "Now I'll ask you his Nickname : ";
	std::getline(std::cin, input);
	while (cont.setNickName(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "Please give me the phone number of your contact : ";
	while (cont.setPhoneNumber(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "Ok now give his Darkest Secret (or consequences) 🔫 : ";
	while (cont.setDarkestSecret(input) == 1) {
		std::cout << "Everyone has a darkest secret 😈 : ";
		std::getline(std::cin, input);
	}

	this->_contact[this->_index] = cont;
	if (this->_index < 57) {
		this->_index++;
		std::cout << "Done :)" << std::endl;
	}
	return;
}

void	PhoneBook::searchContact( void ) {

	std::string	input;
	int			i;

	std::cout << "Here are the Phonebook contacts :" << std::endl;
	for (i = 0; ; i++) {
		std::cout << std::setw(10);
		std::cout << i + 1 << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].getFirstName() << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].getLastName() << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].getNickName() << "|";
	}
	return ;
}
