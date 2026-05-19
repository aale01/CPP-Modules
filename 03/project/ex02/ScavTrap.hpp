#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		explicit ScavTrap( std::string name );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		void attack( const std::string& target );
		void guardGate( void ) const;
};

#endif // SCAVTRAP_H
