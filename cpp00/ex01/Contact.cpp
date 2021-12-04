/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:51:01 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/04 18:00:11 by ade-la-c         ###   ########.fr       */
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

	// this->_FirstName.clear();
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

	this->_LastName.clear();
	this->_LastName = str;
	return 0;
}

int				Contact::setNickName( std::string str ) {

	if (str.empty() == true)
		return 1;

	this->_NickName.clear();
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

	this->_PhoneNumber = str;
	return 0;
}

int				Contact::setDarkestSecret( std::string str ) {

	if (str.empty() == true)
		return 1;

	this->_DarkestSecret = str;
	return 0;
}

std::string		Contact::getFirstName( bool x ) const {

	std::string	str;

	str = this->_FirstName;
	if (str.size() > 10 && x == true) {
		str[9] = '.';
		return str.substr(0, 10);
	}
	else
		return this->_FirstName;
}

std::string		Contact::getLastName( bool x ) const {

	std::string	str;

	str = this->_LastName;
	if (str.size() > 10 && x == true) {
		str[9] = '.';
		return str.substr(0, 10);
	}
	else
		return this->_LastName;
}

std::string		Contact::getNickName( bool x ) const {

	std::string	str;

	str = this->_NickName;
	if (str.size() > 10 && x == true) {
		str[9] = '.';
		return str.substr(0, 10);
	}
	else
		return this->_NickName;
}

std::string		Contact::getPhoneNumber( void ) const {

	return this->_PhoneNumber;
}

std::string		Contact::getDarkestSecret( void ) const {

	return this->_DarkestSecret;
}
