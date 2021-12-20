/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:24:04 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/20 09:38:59 by ade-la-c         ###   ########.fr       */
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

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif
