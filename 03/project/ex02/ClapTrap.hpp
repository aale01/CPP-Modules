/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 04:48:53 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 06:18:43 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
 #define CLAPTRAP_H

# include <iostream>

class ClapTrap {
    public:
        explicit ClapTrap( std::string name );
        ClapTrap( ClapTrap const & src );
        ~ClapTrap( void );
        
        ClapTrap &	operator=( ClapTrap const & rhs );

		const std::string &	getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

		bool isFunctional( void ) const;
		void addHitPoints( int amount );
		void addEnergyPoints( int amount );
};

#endif // CLAPTRAP_H
