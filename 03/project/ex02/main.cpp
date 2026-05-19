/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:14:57 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 05:43:06 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
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