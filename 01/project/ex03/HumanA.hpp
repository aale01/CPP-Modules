#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	public:
		HumanA( std::string const & name, Weapon & club);
		~HumanA();

		void attack( void ) const;

	private:
		std::string name;
		Weapon & weapon;
};

#endif //HUMANA_HPP
