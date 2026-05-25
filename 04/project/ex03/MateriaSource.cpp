/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:25:17 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 23:55:32 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

MateriaSource::MateriaSource( void ) : _size(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for ( int i = 0; i < MATERIAS_MAX_SIZE; ++i )
		this->_materias[i] = NULL;

	return;
}

MateriaSource::MateriaSource( MateriaSource const & src ) : _size(src._size)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for ( int i = 0; i < src._size; ++i )
		this->_materias[i] = src._materias[i]->clone();
	for ( int i = src._size; i < MATERIAS_MAX_SIZE; ++i )
		this->_materias[i] = NULL;

	return;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	std::cout << "MateriaSource assignment operator called" << std::endl;

	if ( this == &rhs )
		return *this;

	this->_size = rhs._size;
	for ( int i = 0; i < rhs._size; ++i )
	{
		delete this->_materias[i];
		this->_materias[i] = rhs._materias[i]->clone();
	}

	return *this;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for ( int i = 0; i < this->_size; ++i )
		delete this->_materias[i];

	return;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void MateriaSource::learnMateria( AMateria* m )
{
	if ( this->_size < MATERIAS_MAX_SIZE )
		this->_materias[this->_size++] = m->clone();
	else
		std::cout << "MateriaSource::learnMateria() : inventory is full"
	<< std::endl;

	return ;
}

AMateria * MateriaSource::createMateria( std::string const & type )
{
	for ( int i = 0; i < this->_size; ++i )
		if ( this->_materias[i]->getType() == type )
			return ( this->_materias[i]->clone() );

	return NULL;
}
