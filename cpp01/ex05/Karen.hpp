/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:24:04 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/18 03:08:08 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>

class	Karen {


public:

	Karen( void );
	~Karen( void );

	void	complain( std::string level );
	

private:

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );

};

#endif
