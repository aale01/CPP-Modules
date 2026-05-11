/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:35:46 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 17:27:18 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string const & type ): type( type )
{
	return ;
}

Weapon::Weapon( void )
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

std::string const & Weapon::getType() const
{
	return this->type;
}

void Weapon::setType( std::string const & newValue )
{
	this->type = newValue;
	return ;
}
