/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:46:12 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/08 13:39:56 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie {


public:

	Zombie( void );
	~Zombie( void );

	void	announce( void );

	void	setName( std::string name );

	std::string		getName( void ) const;


private:

	std::string		_zombieName;

};

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif
