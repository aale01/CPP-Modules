//
// Created by alebe on 07/05/2026.
//

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	public:
		Contact();
		~Contact();

		void fillContact();

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