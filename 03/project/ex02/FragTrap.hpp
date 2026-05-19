#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		explicit FragTrap( std::string name );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		void highFivesGuys( void ) const;
};

#endif // FRAGTRAP_H
