/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 20:28:27 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/11 21:14:29 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if ( argc != 2 )
		return ( std::cout << "Only 1 mandatory argument accepted!" <<
			std::endl, 1);

	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i = 0;
	for (; i < 4; i++) {
		if (levels[i] == argv[1])
			break ;
	}

	Harl harl;

	switch (i)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
			break ;

		case 0:
			for (int j = 0; j < 4; j++)
				harl.complain(levels[j]);
			break ;

		case 1:
			for (int j = 1; j < 4; j++)
				harl.complain(levels[j]);
			break ;

		case 2:
			for (int j = 2; j < 4; j++)
				harl.complain(levels[j]);
			break ;

		case 3:
			for (int j = 3; j < 4; j++)
				harl.complain(levels[j]);
			break ;
	}

	return 0;
}