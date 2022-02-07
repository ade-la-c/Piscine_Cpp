/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:49:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 16:17:38 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

// faire vaiables constantes pour default values pour les attributs parents

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {


public:

	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const & copy );
	DiamondTrap &	operator=( DiamondTrap const & rhs );
	~DiamondTrap( void );

	void		whoAmI( void );


private:

	std::string		_name;

};

std::ostream &	operator<<( std::ostream & COUT, DiamondTrap const & rhs );

#endif
