/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:03:47 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 23:48:37 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << "AMateria default constructor called" << std::endl;

	return;
}

AMateria::AMateria( AMateria const & src )
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;

	return;
}

AMateria & AMateria::operator=( AMateria const & rhs )
{
	std::cout << "AMateria assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_type = rhs._type;

	return *this;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor called" << std::endl;

	return;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

std::string const &	AMateria::getType( void ) const
{
	return this->_type;
}

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void AMateria::use( ICharacter & target )
{
	std::cout << "I shouldn't be able to use this on " << target.getName()
		  << std::endl;
}
