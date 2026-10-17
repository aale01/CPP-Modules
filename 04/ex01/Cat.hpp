/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:39:06 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 18:21:41 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

# include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		Cat( Cat const & src );
		~Cat( void );
		Cat & operator=( Cat const & rhs );

		void makeSound( void ) const;

		Brain * getBrain( void ) const;

	private:
		Brain * _brain;
};

#endif // CAT_H
