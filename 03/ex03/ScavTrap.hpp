/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 06:07:06 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 06:54:09 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( void );
		explicit ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		void attack( const std::string& target );
		void guardGate( void ) const;

	protected:
		static const int _defaultHitPoints = 100;
		static const int _defaultEnergyPoints = 50;
		static const int _defaultAttackDamage = 20;
};

#endif // SCAVTRAP_H
