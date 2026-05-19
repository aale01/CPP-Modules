/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 06:08:06 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 18:24:42 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

DiamondTrap::DiamondTrap( void ) : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;

	return;
}

DiamondTrap::DiamondTrap( std::string name ) :	ClapTrap(name + "_clap_name"),
												ScavTrap(name),
												FragTrap(name),
												_name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	this->_hitPoints = FragTrap::_defaultHitPoints;
	this->_energyPoints = ScavTrap::_defaultEnergyPoints;
	this->_attackDamage = FragTrap::_defaultAttackDamage;

	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) :	ClapTrap(src),
														ScavTrap(src),
														FragTrap(src),
														_name(src._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;

	return;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;

	return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& rhs)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;

	if (this != &rhs)
	{
		ClapTrap::operator=(rhs); // copia base unica
		this->_name = rhs._name;
	}
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & setter                              */
/* -------------------------------------------------------------------------- */

void DiamondTrap::getStats() const
{
	std::cout << "DiamondTrap " << this->_name << " stats: " << std::endl;
	std::cout << "- HP: " << this->_hitPoints << std::endl;
	std::cout << "- EP: " << this->_energyPoints << std::endl;
	std::cout << "- AP: " << this->_attackDamage << std::endl;

	return ;
}

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;

	return ;
}
