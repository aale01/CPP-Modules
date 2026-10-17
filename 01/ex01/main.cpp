/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:21:27 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/10 19:35:45 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie* horde = zombieHorde(10, "HeapZombie");

	for (int i = 0; i < 10; i++)
		horde[i].announce();

	delete[] horde;
}
