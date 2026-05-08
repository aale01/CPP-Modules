/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:44:17 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/08 18:48:01 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

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

void Contact::displayRowContact(int index) const
{
	std::cout << "|" ;
	std::cout << std::setw(10) << index;
	std::cout << "|" ;
	std::cout << std::setw(10) << Contact::formatField(this->_firstName);
	std::cout << "|" ;
	std::cout << std::setw(10) << Contact::formatField(this->_lastName);
	std::cout << "|" ;
	std::cout << std::setw(10) << Contact::formatField(this->_nickName);
	std::cout << "|" ;
	return ;
}

std::string Contact::formatField(std::string const &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::displayContactInfo() const
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
	return ;
}
