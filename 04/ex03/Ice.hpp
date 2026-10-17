/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:19:57 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 22:16:11 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice( void );
		Ice( Ice const & src );
		Ice & operator=( Ice const & rhs );
		~Ice( void );

		virtual AMateria* clone( void ) const;
		virtual void use(ICharacter & target);
};

#endif // ICE_H
