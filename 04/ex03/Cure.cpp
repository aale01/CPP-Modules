/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:20:10 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 23:53:05 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;

	return;
}

Cure::Cure( Cure const & src ) : AMateria( "cure" )
{
	std::cout << "Cure copy constructor called" << std::endl;

	(void)src;

	return;
}

Cure & Cure::operator=( Cure const & rhs )
{
	std::cout << "Cure assignment operator called" << std::endl;

	(void)rhs;

	return *this;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;

	return;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

AMateria * Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
