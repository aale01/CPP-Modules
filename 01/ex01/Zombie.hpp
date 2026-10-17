/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:05:18 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/10 19:49:06 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		Zombie( void );
		~Zombie( void );

		void setName(const std::string &InputName);

		void announce( void );

	private:
		std::string name;
};

// Zombie  *newZombie( std::string name );
// void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif //ZOMBIE_HPP
