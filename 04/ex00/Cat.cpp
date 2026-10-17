/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:39:06 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:43:25 by abecucci         ###   ########.fr       */
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

	return;
}

Cat::Cat( Cat const & src ) : Animal( src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	// *this = src;

	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;

	return;
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat assignment operator called" << std::endl;

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

void Cat::makeSound() const
{
	std::cout << "Cat : meow!" << std::endl;

	return ;
}
