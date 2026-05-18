/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:14:22 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 00:44:26 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name),
										_hitPoints(10),
										_energyPoints(10),
										_attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;

	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "Assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}

	return *this;
}

void ClapTrap::attack( const std::string & target )
{
	if ( this->_energyPoints < 1 || this->_hitPoints < 1 )
		return;

	std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" <<
			std::endl;

	this->_energyPoints--;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if ( amount > this->_hitPoints )
		amount = this->_hitPoints ;

	this->_hitPoints -= amount;

	std::cout << "ClapTrap " << this->_name << " takes " << amount
	<< " points of damage!" << std::endl;

	return ;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if ( this->_energyPoints < 1 || this->_hitPoints < 1 )
		return ;

	this->_hitPoints += amount;
	this->_energyPoints--;

	std::cout << "ClapTrap " << this->_name << " is repaired by " << amount
	<< " points of energy!" << std::endl;

	return ;
}
