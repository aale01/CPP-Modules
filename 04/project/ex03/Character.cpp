/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:07:19 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 22:11:39 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Character::Character( std::string const & name ) : _name(name), _size(0)
{
	std::cout << "Character default constructor called" << std::endl;
	for ( int i = 0; i < INVENTORY_MAX_SIZE; ++i )
		this->_inventory[i] = NULL;

	return;
}

Character::Character( Character const & src ) :	_name(src._name),
												_size(src._size)
{
	std::cout << "Character copy constructor called" << std::endl;
	for ( int i = 0; i < src._size; ++i )
		this->_inventory[i] = src._inventory[i]->clone();
	for ( int i = src._size; i < INVENTORY_MAX_SIZE; ++i )
		this->_inventory[i] = NULL;

	return;
}

Character & Character::operator=( Character const & rhs )
{
	std::cout << "Character assignment operator called" << std::endl;

	if ( this == &rhs )
		return *this;

	this->_name = rhs._name;
	this->_size = rhs._size;
	for ( int i = 0; i < rhs._size; ++i )
	{
		delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i]->clone();
	}

	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;

	for ( int i = 0; i < this->_size; ++i )
		delete this->_inventory[i];

	return ;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

std::string const &	Character::getName( void ) const
{
	return this->_name;
}

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void Character::equip( AMateria* m )
{
	if (this->_size < INVENTORY_MAX_SIZE)
		this->_inventory[this->_size++] = m->clone();
	else
		std::cout << "Character::equip() : inventory is full" << std::endl;

	return ;
}

void Character::unequip( int idx )
{
	if ( idx >= 0 && idx < this->_size )
	{
		delete this->_inventory[idx];   SBAGLIATO --> CONTENITORE
		idx++;
		while (idx < this->_size)
		{
			this->_inventory[idx - 1] = this->_inventory[idx];
			idx++;
		}
		this->_inventory[this->_size - 1] = NULL;
		this->_size--;
	}
	else if ( idx == 0 )
		std::cout << "Character::unequip() : inventory is empty" << std::endl;
	else
		std::cout << "Character::unequip() : invalid index" << std::endl;

	return ;
}

void Character::use( int idx, ICharacter & target )
{
	if ( idx >= 0 && idx < this->_size )
		this->_inventory[idx]->use(target);
	else if ( idx == 0 )
		std::cout << "Character::use() : inventory is empty" << std::endl;
	else
		std::cout << "Character::use() : invalid index" << std::endl;

	return ;
}
