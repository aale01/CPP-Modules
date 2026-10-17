/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:39:57 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:45:17 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

WrongCat::WrongCat( void ) : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;

	this->type = "WrongCat";

	return;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal( src )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	// *this = src;

	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;

	return;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat assignment operator called" << std::endl;

	if ( this != &rhs )
		WrongAnimal::operator=( rhs );

	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void WrongCat::makeSound() const
{
	std::cout << "WrongCat : wrong meow!" << std::endl;

	return ;
}
