/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:58:24 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/17 19:41:23 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value( 0 )
{
	std::cout << "Default Constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_value = rhs.getRawBits();

	return *this ;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->_value ;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;

	this->_value = raw;

	return ;
}
