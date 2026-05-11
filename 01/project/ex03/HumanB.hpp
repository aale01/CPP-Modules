/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:36:39 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 17:11:30 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
	public:
		HumanB( std::string const & name);
		~HumanB();

		void setWeapon(Weapon & weapon);
		void attack( void ) const;

	private:
		std::string name;
		Weapon * weapon;
};

#endif //HUMANB_HPP
