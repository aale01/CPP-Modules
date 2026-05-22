/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:38:45 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:21:58 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Dog::Dog( void ) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;

	this->type = "Dog";

	return;
}

Dog::Dog( Dog const & src ) : Animal( src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	// *this = src;

	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;

	return;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog assignment operator called" << std::endl;

	if ( this != &rhs )
		Animal::operator=( rhs );

	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void Dog::makeSound() const
{
	std::cout << "Dog : woof woof!" << std::endl;

	return ;
}
