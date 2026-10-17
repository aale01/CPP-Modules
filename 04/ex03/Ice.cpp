/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:19:57 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 22:16:18 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;

	return;
}

Ice::Ice( Ice const & src ) : AMateria( "ice" )
{
	std::cout << "Ice copy constructor called" << std::endl;

	(void)src;

	return;
}

Ice & Ice::operator=( Ice const & rhs )
{
	std::cout << "Ice assignment operator called" << std::endl;

	(void)rhs;

	return *this;
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor called" << std::endl;

	return;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

AMateria * Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
		std::endl;
}