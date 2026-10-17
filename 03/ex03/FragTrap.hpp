/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 06:07:05 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 06:55:07 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		explicit FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		void highFivesGuys( void ) const;

	protected:
		static const int _defaultHitPoints = 100;
		static const int _defaultEnergyPoints = 100;
		static const int _defaultAttackDamage = 30;
};

#endif // FRAGTRAP_H
