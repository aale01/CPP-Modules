/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 04:49:26 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/19 05:41:15 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
