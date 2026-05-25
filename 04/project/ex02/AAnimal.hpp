/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:25:48 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 15:43:46 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

# include <iostream>
# include "Brain.hpp"

class AAnimal {
	public:
		AAnimal( void );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal( void );
		AAnimal & operator=( AAnimal const & rhs );

		std::string getType( void ) const;

		virtual void makeSound( void ) const = 0;
		virtual Brain * getBrain( void ) const = 0;


	protected:
		std::string type;
};

#endif // AANIMAL_H
