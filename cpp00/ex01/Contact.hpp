/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:51:20 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/07 12:57:11 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class	Contact {


public:

	Contact( void );
	~Contact( void );

	std::string		getFirstName( bool x ) const;
	std::string		getLastName( bool x ) const;
	std::string		getNickName( bool x ) const;
	std::string		getPhoneNumber( void ) const;
	std::string		getDarkestSecret( void ) const;

	int		setFirstName( std::string str );
	int		setLastName( std::string str );
	int		setNickName( std::string str );
	int		setPhoneNumber( std::string str );
	int		setDarkestSecret( std::string str );


private:

	std::string		_FirstName;
	std::string		_LastName;
	std::string		_NickName;
	std::string		_PhoneNumber;
	std::string		_DarkestSecret;

};

#endif
