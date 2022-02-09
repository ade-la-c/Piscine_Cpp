/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:13:34 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 13:22:55 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class	Brain {


public:

	Brain( void );
	Brain( Brain const & copy );
	Brain &	operator=( Brain const & rhs );
	~Brain( void );


private:

	std::string		_ideas[100];

};

#endif
