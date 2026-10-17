/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:36:35 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:57:19 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal( void );
		WrongAnimal & operator=( WrongAnimal const & rhs );

		std::string getType( void ) const;

		void makeSound( void ) const;

	protected:
		std::string type;
};

#endif // WRONGANIMAL_H
