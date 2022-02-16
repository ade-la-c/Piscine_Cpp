/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:40:32 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 15:22:09 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class	PresidentialPardonForm : public virtual Form {


public:

	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & copy );
	PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
	~PresidentialPardonForm( void );

	void		execute( Bureaucrat const & executor ) const;


private:

	std::string		_target;

};


#endif
