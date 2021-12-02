/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:30:59 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/02 03:07:35 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.hpp"
# include <unistd.h>
# include <iostream>
# include <sstream>
# include <iomanip>


class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	int				waitInput( void );
	void			wrongInput( void );

	void			addContact( void );
	void			searchContact( void );
	int				setIndex( int x );

private:

	Contact			_contact[8];
	char			_index;

};

#endif
