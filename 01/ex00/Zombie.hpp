/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:05:18 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/10 19:48:39 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	public:
		Zombie( std::string name );
		~Zombie();

		void announce( void );

	private:
		std::string name;
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif //ZOMBIE_HPP
