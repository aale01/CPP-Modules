/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:25:48 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 15:25:48 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"

class Dog : public AAnimal {
	public:
		Dog( void );
		Dog( Dog const & src );
		~Dog( void );
		Dog & operator=( Dog const & rhs );

		void makeSound( void ) const;

		Brain * getBrain( void ) const;

	private:
		Brain * _brain;
};

#endif // DOG_H
