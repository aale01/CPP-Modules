/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 04:08:21 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 05:54:48 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string name );
		~ScavTrap( void );

		void attack( const std::string& target );
		void guardGate( void ) const;
};

#endif // SCAVTRAP_H
