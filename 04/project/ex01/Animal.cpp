/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:36:50 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:38:33 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Animal::Animal( void ) : type("")
{
	std::cout << "Animal default constructor called" << std::endl;

	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;

	return;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;

	return;
}

Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal assignment operator called" << std::endl;

	if ( this != &rhs )
		this->type = rhs.type;

	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

std::string	Animal::getType( void ) const
{
	return this->type;
}

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void Animal::makeSound() const
{
	std::cout << "General animal doesn't make a sound" << std::endl;

	return ;
}
