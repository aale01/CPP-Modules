/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 20:48:09 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/18 21:35:02 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x( 0 ) , y( 0 )
{
	// std::cout << "Default Constructor called" << std::endl;

	return;
}

Point::Point( Point const & src )
{
	// std::cout << "Copy Constructor called" << std::endl;
	*this = src;

	return;
}

Point::Point( float const x, float const y ) : x( x ) , y( y )
{
	return ;
}

Point::~Point( void )
{
	// std::cout << "Destructor called" << std::endl;

	return;
}

Point & Point::operator=( Point const & rhs )
{
	// std::cout << "Assignment operator called" << std::endl;

	( void )rhs;

	return *this;
}

Fixed Point::getX( void ) const
{
	return this->x;
}

Fixed Point::getY( void ) const
{
	return this->y;
}
