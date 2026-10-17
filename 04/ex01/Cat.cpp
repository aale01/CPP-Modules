/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:39:06 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 13:39:52 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Cat::Cat( void ) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;

	this->type = "Cat";
	this->_brain = new Brain();

	return;
}

Cat::Cat( Cat const & src ) : Animal( src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	// *this = src;
	this->_brain = new Brain( *( src._brain ) );

	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;

	delete this->_brain;

	return;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat assignment operator called" << std::endl;

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

void Cat::makeSound() const
{
	std::cout << "Cat : meow!" << std::endl;

	return ;
}

Brain * Cat::getBrain( void ) const
{
	return ( this->_brain );
}