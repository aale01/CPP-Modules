/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:38:45 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:43:25 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

# include <iostream>

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );
		Dog & operator=( Dog const & rhs );

		void makeSound( void ) const;
};

#endif // DOG_H
