/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:25:48 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 15:51:05 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

AAnimal::AAnimal( void ) : type("")
{
	std::cout << "AAnimal default constructor called" << std::endl;

	return;
}

AAnimal::AAnimal( AAnimal const & src )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;

	return;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;

	return;
}

AAnimal & AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal assignment operator called" << std::endl;

	if ( this != &rhs )
		this->type = rhs.type;

	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

std::string	AAnimal::getType( void ) const
{
	return this->type;
}

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void AAnimal::makeSound() const
{
	std::cout << "General AAnimal doesn't make a sound" << std::endl;

	return ;
}
