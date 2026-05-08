/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:44:17 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/08 17:46:46 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_NB_CONTACTS 8

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void		addContact(void);
		void		searchContact(void) const;
		static void	displayMenu(void);

	private:
		Contact	_contacts[8];
		int		_nbContacts;
		int		_nextContactIndex;

		void	_displayContacts(void) const;
};

#endif //PHONEBOOK_HPP