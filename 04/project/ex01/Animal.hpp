/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:36:51 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:35:32 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

# include <iostream>

class Animal {
	public:
		Animal( void );
		Animal( Animal const & src );
		virtual ~Animal( void );
		Animal & operator=( Animal const & rhs );

		std::string getType( void ) const;

		virtual void makeSound( void ) const;

	protected:
		std::string type;
};

#endif // ANIMAL_H
