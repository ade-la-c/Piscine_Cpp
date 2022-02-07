/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:48:34 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/07 01:30:12 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class	ClapTrap {


public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( std::string name, int hp, int ep, int ad );
	ClapTrap( ClapTrap const & copy);
	ClapTrap &	operator=( ClapTrap const & rhs );
	~ClapTrap( void );

	void	attack( const std::string & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string			getName( void ) const;
	unsigned int		getHitPoints( void ) const;
	unsigned int		getEnergyPoints( void ) const;
	unsigned int		getAttackDamage( void ) const;

	void		setName( std::string name );
	void		setHitPoints( unsigned int amount );
	void		setEnergyPoints( unsigned int amount );
	void		setAttackDamage( unsigned int amount );


private:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

};

std::ostream &	operator<<(std::ostream & COUT, ClapTrap const & rhs );

#endif
