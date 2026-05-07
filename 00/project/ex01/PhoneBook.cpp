//
// Created by alebe on 07/05/2026.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() _nbContacts(0), _nextContactIndex(0)
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