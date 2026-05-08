/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:44:17 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/08 19:00:23 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <iomanip>
#include <iostream>
#include <strings.h>

PhoneBook::PhoneBook(): _nbContacts(0), _nextContactIndex(0)
{
	displayMenu();
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::displayMenu(void)
{
	std::cout << "Enter one of the following commands:" << std::endl;
	std::cout << "- ADD" << std::endl;
	std::cout << "- SEARCH" << std::endl;
	std::cout << "- EXIT" << std::endl;
	return ;
}

void PhoneBook::addContact(void)
{
	Contact newContact;

	newContact.fillContact();
	this->_contacts[this->_nextContactIndex] = newContact;
	this->_nextContactIndex = (this->_nextContactIndex + 1) % MAX_NB_CONTACTS;
	if (this->_nbContacts < MAX_NB_CONTACTS)
		this->_nbContacts++;
	return ;
}

int stringToInt(const std::string &s)
{
	int result = 0;

	for (size_t i = 0; i < s.length(); i++)
	{
		if (!std::isdigit(s[i]))
			return -1; // errore

		result = result * 10 + (s[i] - '0');
	}

	return result;
}

void PhoneBook::searchContact(void) const
{
	int	index;
	std::string ans;
	this->_displayContacts();
	while (true)
	{
		std::cout <<  "Enter the index of the entry to display: " ;
		std::getline(std::cin, ans);
		try
		{
			index = stringToInt(ans);
		}
		catch (...)
		{
			std::cout << "Invalid input. Try again." << std::endl;
			continue ;
		}
		if (index < 0 || index > this->_nbContacts)
			break ;
	}
	this->_contacts[index].displayContactInfo();
	return ;
}

void PhoneBook::_displayContacts() const
{
	std::cout << "_____________________________________________" << std::endl;
	for (int i = 0; i < this->_nbContacts; i++)
	{
		this->_contacts[i].displayRowContact(i);
	}
	std::cout << "_____________________________________________" << std::endl;
	return ;
}
