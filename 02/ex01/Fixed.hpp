/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:08:02 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/18 18:09:23 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const n );
		Fixed( float const f );
		~Fixed( void );

		Fixed & operator=( Fixed const & rhs );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int					_raw;
		static const int	_fractionalBits = 8;
};

std::ostream &	operator<<( std::ostream & os, Fixed const & fixed );

#endif // FIXED_H
