/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:31:03 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/06 20:29:23 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	this->_index = 0;
	std::cout << "*Phone Book initializes*" << std::endl;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "*Phone Book self-destroys*" << std::endl;
}

int		PhoneBook::waitInput( void ) {

	std::string	input;

	std::cout << "Hello there 👋" << std::endl;
	std::cout << "Welcome to the crappy and (not) awesome Phone Book, " << std::endl;
	std::cout << "You can interact with it using the following commands" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		sleep(1);
		std::cout << "ADD (create a contact)," << std::endl;
		std::cout << "SEARCH (look for an existing contact)" << std::endl;
		std::cout << "and EXIT (quit phonebook)" << std::endl;
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			this->addContact();
		else if (!input.compare("SEARCH"))
			this->searchContact();
		else if (!input.compare("EXIT"))
			return 1;
		else
			std::cout << "Wrong Input" << std::endl;
	}
	return 0;
}

void	PhoneBook::addContact( void ) {

	std::string		input;
	// Contact			cont;

	if (this->_index == 8) {
		std::cout << "You can't have more than 8 contacts" << std::endl;
		return;
	}
	std::cout << "Hi, Please type the First Name of the contact : ";
	std::getline(std::cin, input);
	while (this->_contact[(int)this->_index].setFirstName(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "I'll also need the Last Name please : ";
	std::getline(std::cin, input);
	while (this->_contact[(int)this->_index].setLastName(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "Now I'll ask you for his Nickname : ";
	std::getline(std::cin, input);
	while (this->_contact[(int)this->_index].setNickName(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "Please give me the phone number of your contact : ";
	std::getline(std::cin, input);
	while (this->_contact[(int)this->_index].setPhoneNumber(input) == 1) {
		std::cout << "Sorry, can you try again ? : ";
		std::getline(std::cin, input);
	}

	std::cout << "Ok now give his Darkest Secret (or consequences) 🔫 : ";
	std::getline(std::cin, input);
	while (this->_contact[(int)this->_index].setDarkestSecret(input) == 1) {
		std::cout << "Everyone has a darkest secret 😈 : ";
		std::getline(std::cin, input);
	}

	// this->_contact[(int)this->_index] = cont;
	if (this->_index < 8) {
		this->_index++;
		std::cout << "Contact created successfully :)" << std::endl;
	}
	return;
}

void	PhoneBook::searchContact( void ) const {

	int	i;

	if (this->_index == 0) {
		std::cout << "You don't have any contacts yet :(" << std::endl;
		return;
	}
	std::cout << "Here are the Phonebook contacts :" << std::endl << std::endl;
	for (i = 0; i < this->_index; i++) {
		std::cout << std::setw(3);
		std::cout << i + 1 << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].getFirstName(true) << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].getLastName(true) << "|";
		std::cout << std::setw(10);
		std::cout << this->_contact[i].getNickName(true) << std::endl;
	}
	while (this->displayContact() == 1) {
		std::cout << "Wrong input, try again" << std::endl;
	}
	return;
}

int		PhoneBook::displayContact( void ) const {

	std::string			input;
	std::stringstream	ss;
	int					i;

	std::cout << "To display a contact, please type the index : ";
	std::getline(std::cin, input);
	if (input.size() > 1 || (input[0] < '1' && input[0] > '8'))
		return 1;
	ss << input;
	ss >> i;
	if (i < 1 || i > 8)
		return 1;
	i -= 1;
	std::cout << "First Name : " << this->_contact[i].getFirstName(false) << std::endl;
	std::cout << "Last Name : " << this->_contact[i].getLastName(false) << std::endl;
	std::cout << "NickName : " << this->_contact[i].getNickName(false) << std::endl;
	std::cout << "Phone Number : " << this->_contact[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->_contact[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
	return 0;
}
