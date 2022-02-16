/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:21:53 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 15:40:20 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <iostream>

class	Bureaucrat;

class	Form {


public:

	Form( void );
	Form( std::string name, int gradeToSign, int gradeToExecute );
	Form( Form const & copy );
	Form &	operator=( Form const & rhs );
	virtual ~Form( void );

	void			beSigned( Bureaucrat const & bureaucrat );

	virtual void	execute( Bureaucrat const & executor ) const = 0;

	std::string		getName( void ) const;
	int				getGradeToSign( void ) const;
	int				getGradeToExecute( void ) const;
	bool			getSignedStatus( void ) const;

	class	GradeTooHighException : public std::exception {

	public: 
		const char * what() const throw();
	};

	class	GradeTooLowException : public std::exception {

	public: 
		const char * what() const throw();
	};

	class	AlreadySignedException : public std::exception {

	public: 
		const char * what() const throw();
	};

	class	NotSignedException : public std::exception {

	public:
		const char * what() const throw();
	};


private:

	std::string const	_name;
	bool				_signed;
	int					_gradeToSign;
	int					_gradeToExecute;

};

std::ostream &	operator<<( std::ostream & COUT, Form const & rhs );

#endif
