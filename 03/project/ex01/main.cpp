/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:14:57 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 04:27:07 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	std::cout << "===== CLAPTRAP TEST =====" << std::endl;

	ClapTrap	a("A");

	a.attack("target");
	a.takeDamage(5);
	a.beRepaired(3);

	std::cout << std::endl;

	std::cout << "===== SCAVTRAP TEST =====" << std::endl;

	ScavTrap	b("B");

	b.attack("enemy");
	b.takeDamage(30);
	b.beRepaired(10);
	b.guardGate();

	std::cout << std::endl;

	std::cout << "===== ENERGY/HITPOINT LIMIT TEST =====" << std::endl;

	ScavTrap	c("C");

	c.takeDamage(200);

	c.attack("nobody");
	c.beRepaired(10);

	std::cout << std::endl;

	std::cout << "===== DESTRUCTION ORDER =====" << std::endl;

	return (0);
}