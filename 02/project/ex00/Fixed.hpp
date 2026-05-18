/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:58:24 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/17 19:30:20 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

# include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed & operator=( Fixed const & rhs );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int					_value;
		static const int	_fractionalBits = 8;
};

#endif // FIXED_H
