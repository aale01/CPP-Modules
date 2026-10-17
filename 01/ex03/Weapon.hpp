#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon( std::string const & type );
		Weapon( void );
		~Weapon( void );

		std::string const & getType( void ) const;
		void setType( std::string const & newValue );

	private:
		std::string type;
};

#endif //WEAPON_HPP
