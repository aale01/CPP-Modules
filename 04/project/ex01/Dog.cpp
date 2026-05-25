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
	this->_brain = new Brain();

	return;
}

Dog::Dog( Dog const & src ) : Animal( src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	// *this = src;
	this->_brain = new Brain( *( src._brain ) );

	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;

	delete this->_brain;

	return;
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		Animal::operator=( rhs );
		delete this->_brain;
		this->_brain = new Brain( *( rhs._brain ) );
	}

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

Brain * Dog::getBrain( void ) const
{
	return ( this->_brain );
}