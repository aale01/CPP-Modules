/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 06:07:05 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 18:25:51 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "\n===== DIAMONDTRAP DEEP TEST =====\n";

	DiamondTrap a("Alpha");

	std::cout << "\n--- check identity ---\n";
	a.whoAmI();
	a.getStats();

	std::cout << "\n--- copy constructor ---\n";
	DiamondTrap b(a);
	b.whoAmI();

	std::cout << "\n--- assignment operator ---\n";
	DiamondTrap c("Temp");
	c = a;
	c.whoAmI();

	std::cout << "\n--- polymorphic ambiguity check ---\n";
	a.attack("target_A");
	a.ClapTrap::attack("forced_clap"); // forza disambiguazione (se possibile)
	a.getStats();

	std::cout << "\n--- state before damage ---\n";
	a.attack("target_B");
	a.getStats();

	std::cout << "\n--- heavy damage test ---\n";
	a.takeDamage(90);
	a.attack("should_fail_if_dead_or_no_energy");
	a.getStats();

	std::cout << "\n--- repair test ---\n";
	a.beRepaired(50);
	a.attack("after_repair");
	a.getStats();

	std::cout << "\n--- energy exhaustion loop ---\n";
	for (int i = 0; i < 10; i++)
		a.attack("spam_target");
	a.getStats();

	std::cout << "\n--- final identity check ---\n";
	a.whoAmI();

	std::cout << "\n===== END =====\n";
	return 0;
}