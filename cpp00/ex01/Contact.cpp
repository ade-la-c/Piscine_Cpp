/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:51:01 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/02 02:58:11 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact( void ) {}

Contact::~Contact( void ) {}

int				Contact::setFirstName( std::string str ) {

	int	i;

	if (str.empty() == true)
		return 1;
	for (i = 0; str[i]; i++) {
		if (str[i] >= '0' && str[i] <= '9')
			return 1;
	}

	if (str.size() > 10) {
		str[9] = '.';
		for (i = 0; str[i]; i++)
			str[i];
	}
	this->_FirstName = str;
	return 0;
}

int				Contact::setLastName( std::string str ) {

	int	i;

	if (str.empty() == true)
		return 1;
	for (i = 0; str[i]; i++) {
		if (str[i] >= '0' && str[i] <= '9')
			return 1;
	}

	if (str.size() > 10) {
		str[9] = '.';
		for (i = 0; str[i]; i++)
			str[i];
	}
	this->_LastName = str;
	return 0;
}

int				Contact::setNickName( std::string str ) {

	int	i;

	if (str.empty() == true)
		return 1;

	if (str.size() > 10) {
		str[9] = '.';
		for (i = 10; str[i]; i++)
			str[i];
	}
	this->_NickName = str;
	return 0;
}

int				Contact::setPhoneNumber( std::string str ) {

	int	i;

	if (str.empty() == true)
		return 1;
	for (i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return 1;

	if (str.size() > 10) {
		str[9] = '.';
		str[10] = '\0';
	}
	this->_PhoneNumber = str;
	return 0;
}

int				Contact::setDarkestSecret( std::string str ) {

	int	i;

	if (str.empty() == true)
		return 1;

	if (str.size() > 10) {
		str[9] = '.';
		for (i = 0; str[i]; i++)
			str[i];
	}
	this->_DarkestSecret = str;
	return 0;
}

std::string		Contact::getFirstName( void ) const {

	return this->_FirstName;
}

std::string		Contact::getLastName( void ) const {

	return this->_LastName;
}

std::string		Contact::getNickName( void ) const {

	return this->_NickName;
}

std::string		Contact::getPhoneNumber( void ) const {

	return this->_PhoneNumber;
}

std::string		Contact::getDarkestSecret( void ) const {

	return this->_DarkestSecret;
}
