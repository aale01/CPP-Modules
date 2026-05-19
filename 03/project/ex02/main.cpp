/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 04:48:53 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 06:19:01 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	std::cout << "===== CLAPTRAP TEST =====" << std::endl;

	ClapTrap a("A");

	a.attack("target");
	a.takeDamage(5);
	a.beRepaired(3);

	std::cout << std::endl;

	std::cout << "===== SCAVTRAP TEST =====" << std::endl;

	ScavTrap b("B");

	b.attack("enemy");
	b.takeDamage(20);
	b.beRepaired(10);
	b.guardGate();

	std::cout << std::endl;

	std::cout << "===== FRAGTRAP TEST =====" << std::endl;

	FragTrap c("C");

	c.attack("enemy");
	c.takeDamage(30);
	c.beRepaired(15);
	c.highFivesGuys();

	std::cout << std::endl;

	std::cout << "===== DESTRUCTION TEST =====" << std::endl;

	{
		FragTrap temp("Temp");
	}

	return 0;
}