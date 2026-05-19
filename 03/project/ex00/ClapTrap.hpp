/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 00:14:22 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 00:47:42 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
 #define CLAPTRAP_H

# include <iostream>

class ClapTrap {
    public:
		ClapTrap( void );
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const & src );
        ~ClapTrap( void );
        
        ClapTrap &   operator=( ClapTrap const & rhs );

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif // CLAPTRAP_H
