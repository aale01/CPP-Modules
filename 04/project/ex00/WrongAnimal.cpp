/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:36:35 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:38:33 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

WrongAnimal::WrongAnimal( void ) : type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;

	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;

	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;

	return;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;

	if ( this != &rhs )
		this->type = rhs.type;

	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

std::string	WrongAnimal::getType( void ) const
{
	return this->type;
}

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void WrongAnimal::makeSound() const
{
	std::cout << "General WrongAnimal doesn't make a sound" << std::endl;

	return ;
}
