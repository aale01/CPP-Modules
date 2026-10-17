/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:36:39 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 18:02:33 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string const & name ):	name(name), weapon(NULL)
{
	return ;
}

HumanB::~HumanB()
{
}

void HumanB::attack( void ) const
{
	if (this->weapon)
	std::cout	<< this->name
				<< " attacks with their "
				<< this->weapon->getType()
				<< std::endl;
	return ;
}

void HumanB::setWeapon(Weapon & wp)
{
	this->weapon = &wp;
}
