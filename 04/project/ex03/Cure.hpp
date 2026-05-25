/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:20:10 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 20:35:25 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure( void );
		Cure( Cure const & src );
		Cure & operator=( Cure const & rhs );
		~Cure( void );

		virtual AMateria* clone( void ) const;
		virtual void use(ICharacter & target);
};

#endif // CURE_H
