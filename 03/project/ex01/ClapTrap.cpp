/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:14:22 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 06:00:55 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap default constructor called" << std::endl;

	return;
}

ClapTrap::ClapTrap( std::string name ) : _name(name),
										_hitPoints(10),
										_energyPoints(10),
										_attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;

	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;

	return;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;

	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "ClapTrap assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}

	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & setter                              */
/* -------------------------------------------------------------------------- */

const std::string& ClapTrap::getName() const
{
	return _name;
}

unsigned int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void ClapTrap::attack( const std::string & target )
{
	if (!this->isFunctional()) {
		std::cout << "ClapTrap " << this->_name << " can't attack."
		<< std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" <<
			std::endl;

	addEnergyPoints(-1);

	return ;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if ( amount > this->_hitPoints )
		amount = this->_hitPoints;

	addHitPoints(-static_cast<int>(amount));

	std::cout << "ClapTrap " << this->_name << " takes " << amount
	<< " points of damage!" << std::endl;

	return ;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (!this->isFunctional()) {
		std::cout << "ClapTrap " << this->_name << " can't be repaired."
		<< std::endl;
		return ;
	}

	addHitPoints(amount);
	addEnergyPoints(-1);

	std::cout << "ClapTrap " << this->_name << " is repaired by " << amount
	<< " points of energy!" << std::endl;

	return ;
}

bool ClapTrap::isFunctional( void ) const
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
		return true ;

	return false ;
}

void ClapTrap::addEnergyPoints( int amount )
{
	this->_energyPoints += amount;
}

void ClapTrap::addHitPoints( int amount )
{
	this->_hitPoints += amount;
}
