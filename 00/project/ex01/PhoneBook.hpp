//
// Created by alebe on 07/05/2026.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(Contact const &contact);
		void	displayContacts(void) const;
		static void	displayMenu(void);

	private:
		Contact	_contacts[8];
		int		_nbContacts;
		int		_nextContactIndex;
};

#endif //PHONEBOOK_HPP