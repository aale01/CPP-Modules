/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:44:17 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/08 18:48:01 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact();
		~Contact();

		void fillContact(void);
		void displayRowContact(int index) const;
		void displayContactInfo(void) const;
		static std::string formatField(std::string const &str);

	private:
		void _setFirstName();
		void _setLastName();
		void _setNickname();
		void _setPhoneNumber();
		void _setDarkestSecret();

		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};
#endif //CONTACT_HPP