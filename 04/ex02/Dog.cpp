/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:25:48 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 15:25:48 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Dog::Dog( void ) : AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;

	this->type = "Dog";
	this->_brain = new Brain();

	return;
}

Dog::Dog( Dog const & src ) : AAnimal( src )
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
		AAnimal::operator=( rhs );
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