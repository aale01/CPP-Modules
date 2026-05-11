/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:36:05 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 18:02:22 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string const & name, Weapon & wp):	name(name),
														weapon(wp)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void HumanA::attack() const
{
	std::cout	<< this->name
				<< " attacks with their "
				<< this->weapon.getType()
				<< std::endl;
	return ;
}
