/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:03:47 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 22:16:08 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	_type;

	public:
		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		AMateria & operator=( AMateria const & rhs );
		virtual ~AMateria( void );

		std::string const & getType( void ) const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

#endif // AMATERIA_H
