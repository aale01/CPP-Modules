/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:01:42 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 13:31:45 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Brain::Brain( void ) : _size(0)
{
	std::cout << "Brain default constructor called" << std::endl;

	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain copy constructor called" << std::endl;

	*this = src;

	return;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;

	return;
}

Brain & Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain assignment operator called" << std::endl;

	if ( this != &rhs )
	{
		this->_size = rhs._size;
		for (unsigned int i = 0; i < rhs._size; i++)
			this->_ideas[i] = rhs._ideas[i];
	}

	return *this;
}

/* -------------------------------------------------------------------------- */
/*                               Getter & Setter                              */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Member functions                              */
/* -------------------------------------------------------------------------- */

void Brain::addIdea( std::string idea )
{
	if ( this->_size == 100 )
		return ;

	this->_ideas[this->_size++] = idea;

	return ;
}

const std::string & Brain::getIdea( unsigned int index ) const
{
	return this->_ideas[index];
}

void Brain::getIdeas( void ) const
{
	for (unsigned int i = 0; i < this->_size; i++)
		std::cout << this->_ideas[i] << std::endl;

	return ;
}
