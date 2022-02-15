/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:18:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/15 15:20:33 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat {


public:

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & copy );
	Bureaucrat &	operator=( Bureaucrat const & rhs );
	~Bureaucrat( void );

	void			signForm( Form & form );
	void			increment( void );
	void			decrement( void );

	std::string			getName( void ) const;
	int					getGrade( void ) const;

	class	GradeTooHighException : public std::exception {

	public: 
		const char * what() const throw();
	};

	class	GradeTooLowException : public std::exception {

	public: 
		const char * what() const throw();
	};

private:

	std::string const	_name;

	int		_grade;

};

std::ostream &	operator<<( std::ostream & COUT, Bureaucrat const & rhs );

#endif
