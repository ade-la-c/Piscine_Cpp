/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 02:22:40 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 02:37:48 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {


public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & copy );
	FragTrap &	operator=( FragTrap const & rhs );
	~FragTrap( void );

	void	highFiveGuys( void );
};

std::ostream &	operator<<( std::ostream & COUT, FragTrap const & rhs );

#endif
