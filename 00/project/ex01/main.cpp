/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:46:23 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/09 13:43:54 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		phonebook.displayMenu();
		// std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		std::cout << std::endl;

		if (command == "ADD")
		{
			phonebook.addContact();
		}
		else if (command == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return 0;
}