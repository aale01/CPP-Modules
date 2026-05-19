#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string name );
		~ScavTrap( void );

		void attack( const std::string& target );
		void guardGate( void ) const;
};

#endif // SCAVTRAP_H
