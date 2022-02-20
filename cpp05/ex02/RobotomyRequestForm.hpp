/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:43:20 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/20 15:03:48 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class	RobotomyRequestForm : public virtual Form {


public:

	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & copy );
	RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );
	~RobotomyRequestForm( void );

	void		execute( Bureaucrat const & executor ) const;


private:

	std::string		_target;

};


#endif
