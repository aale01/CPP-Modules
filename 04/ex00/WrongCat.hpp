/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:39:57 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:49:19 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

# include <iostream>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( WrongCat const & src );
		~WrongCat( void );
		WrongCat & operator=( WrongCat const & rhs );

		void makeSound( void ) const;
};

#endif // WRONGCAT_H
