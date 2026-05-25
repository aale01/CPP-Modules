/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:07:19 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 23:54:17 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define INVENTORY_MAX_SIZE 4

class Character : public ICharacter {
	private:
		std::string		_name;
		AMateria*		_inventory[INVENTORY_MAX_SIZE];
		int				_size;

	public:
		Character( std::string const & name );
		Character( Character const & src );
		Character & operator=( Character const & rhs );
		~Character( void );

		std::string const & getName( void ) const;
		void                equip( AMateria* m );
		void                unequip( int idx );
		void                use( int idx, ICharacter& target );
};

#endif // CHARACTER_H
