/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:51:17 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 14:38:00 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap {


public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & copy );
	ScavTrap &	operator=( ScavTrap const & rhs );
	~ScavTrap( void );

	void	attack( const std::string & target );
	void	guardGate( void );

};

std::ostream &	operator<<( std::ostream & COUT, ScavTrap const & rhs );

#endif
