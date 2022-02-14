/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:18:47 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/14 20:07:39 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class	Bureaucrat {


public:

	Bureaucrat( void );
	Bureaucrat( Bureaucrat const & copy );
	Bureaucrat &	operator=( Bureaucrat const & rhs );
	~Bureaucrat( void );

	class std::exception exception;

	void			increment( void );
	void			decrement( void );

	std::string		getName( void ) const;
	int				getGrade( void ) const;

private:

	std::string const	_name;

	int		_grade;

};

std::ostream &	operator<<( std::ostream & COUT, Bureaucrat const & rhs );

#endif
