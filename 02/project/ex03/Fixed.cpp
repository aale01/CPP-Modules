/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:08:02 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/18 20:13:17 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : _raw( 0 )
{
	// std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const & src )
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::Fixed( int const n )
{
	// std::cout << "Int constructor called" << std::endl;

	this->_raw = n << this->_fractionalBits;

	return ;
}

Fixed::Fixed( float const f )
{
	// std::cout << "Float constructor called" << std::endl;

	this->_raw = roundf( f * (1 << this->_fractionalBits) );

	return ;
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;

	return ;
}



Fixed & Fixed::operator=( Fixed const & rhs )
{
	// std::cout << "Assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_raw = rhs._raw;

	return *this ;
}



bool Fixed::operator>( Fixed const & rhs ) const
{
	return ( this->_raw > rhs._raw ) ;
}

bool Fixed::operator<( Fixed const & rhs ) const
{
	return ( this->_raw < rhs._raw ) ;
}

bool Fixed::operator>=( Fixed const & rhs ) const
{
	return ( this->_raw >= rhs._raw ) ;
}

bool Fixed::operator<=( Fixed const & rhs ) const
{
	return ( this->_raw <= rhs._raw ) ;
}

bool Fixed::operator==( Fixed const & rhs ) const
{
	return ( this->_raw == rhs._raw ) ;
}

bool Fixed::operator!=( Fixed const & rhs ) const
{
	return ( this->_raw != rhs._raw ) ;
}



Fixed Fixed::operator+( Fixed const & rhs ) const
{
	Fixed result;

	result._raw = this->_raw + rhs._raw;

	return ( result ) ;
}

Fixed Fixed::operator-( Fixed const & rhs ) const
{
	Fixed result;

	result._raw = this->_raw - rhs._raw;

	return ( result ) ;
}

Fixed Fixed::operator*( Fixed const & rhs ) const
{
	Fixed result;

	result._raw = ( this->_raw * rhs._raw ) >> this->_fractionalBits;

	return ( result ) ;
}

Fixed Fixed::operator/( Fixed const & rhs ) const
{
	Fixed result;

	result._raw = ( this->_raw / rhs._raw ) << this->_fractionalBits;

	return ( result ) ;
}

Fixed & Fixed::operator++()
{
	this->_raw++;

	return *this ;
}

Fixed & Fixed::operator--()
{
	this->_raw--;

	return *this ;
}

Fixed Fixed::operator++( int )
{
	Fixed tmp( *this );

	this->_raw++;

	return tmp ;
}

Fixed Fixed::operator--( int )
{
	Fixed tmp( *this );

	this->_raw--;

	return tmp ;
}



int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;

	return this->_raw ;
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;

	this->_raw = raw;

	return ;
}

float Fixed::toFloat( void ) const
{
	return ( static_cast<float>(this->_raw) / (1 << this->_fractionalBits) );
}

int Fixed::toInt( void ) const
{
	return ( this->_raw >> this->_fractionalBits );
}



Fixed & Fixed::min( Fixed & lhs, Fixed & rhs )
{
	if ( lhs <= rhs )
		return lhs;

	return rhs ;
}

Fixed const & Fixed::min( Fixed const & lhs, Fixed const & rhs )
{
	if ( lhs <= rhs )
		return lhs;

	return rhs ;
}

Fixed & Fixed::max( Fixed & lhs, Fixed & rhs )
{
	if ( lhs >= rhs )
		return lhs;

	return rhs ;
}

Fixed const & Fixed::max( Fixed const & lhs, Fixed const & rhs )
{
	if ( lhs >= rhs )
		return lhs;

	return rhs ;
}



std::ostream &	operator<<( std::ostream & os, Fixed const & fixed )
{
	os << fixed.toFloat();

	return os ;
}
