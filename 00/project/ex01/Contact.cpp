//
// Created by alebe on 07/05/2026.
//

#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void Contact::fillContact()
{
	_setFirstName();
	_setLastName();
	_setNickname();
	_setPhoneNumber();
	_setDarkestSecret();
}

void Contact::_setFirstName( void )
{
	std::cout << "Enter the first name: ";
	std::getline(std::cin, this->_firstName);
	return ;
}

void Contact::_setLastName( void )
{
	std::cout << "Enter the last name: ";
	std::getline(std::cin, this->_lastName);
	return ;
}

void Contact::_setNickname( void )
{
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, this->_nickName);
	return ;
}


void Contact::_setPhoneNumber( void )
{
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, this->_phoneNumber);
	return ;
}

void Contact::_setDarkestSecret( void )
{
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, this->_darkestSecret);
	return ;
}