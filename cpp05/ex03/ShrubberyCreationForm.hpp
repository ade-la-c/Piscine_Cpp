/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:44:24 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 15:22:19 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class	ShrubberyCreationForm : public virtual Form {


public:

	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & copy );
	ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );
	~ShrubberyCreationForm( void );

	void		execute( Bureaucrat const & executor ) const;


private:

	std::string		_target;

};


#endif
