/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:14:57 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 00:46:26 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	a("A");
	ClapTrap	b("B");

	std::cout << "\n--- Basic attacks ---" << std::endl;
	a.attack("B");
	b.takeDamage(0);

	std::cout << "\n--- Repair ---" << std::endl;
	a.beRepaired(5);

	std::cout << "\n--- Energy consumption test ---" << std::endl;
	for (int i = 0; i < 11; i++)
		a.attack("Training Dummy");

	std::cout << "\n--- Damage test ---" << std::endl;
	b.takeDamage(5);
	b.beRepaired(3);

	std::cout << "\n--- Big damage test ---" << std::endl;
	b.takeDamage(100);

	std::cout << "\n--- Dead ClapTrap test ---" << std::endl;
	b.attack("A");
	b.beRepaired(10);

	std::cout << "\n--- End of program ---" << std::endl;

	return (0);
}