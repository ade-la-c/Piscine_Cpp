/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:21:53 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/15 15:01:54 by ade-la-c         ###   ########.fr       */
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
	~Form( void );

	void	beSigned( Bureaucrat const & bureaucrat );

	std::string		getName( void ) const;
	int				getGradeToSign( void ) const;
	int				getGradeToExecute( void ) const;

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
	bool				_singed;
	int					_gradeToSign;
	int					_gradeToExecute;

};

std::ostream &	operator<<( std::ostream & COUT, Form const & rhs );

#endif
