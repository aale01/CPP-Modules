/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:25:48 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 15:25:48 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"

class Cat : public AAnimal {
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
