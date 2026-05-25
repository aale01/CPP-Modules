/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:25:17 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 23:54:30 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

# define MATERIAS_MAX_SIZE 4

class MateriaSource : public IMateriaSource {
	private:
		AMateria*		_materias[MATERIAS_MAX_SIZE];
		int				_size;

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		MateriaSource & operator=( MateriaSource const & rhs );
		~MateriaSource( void );

		void		learnMateria( AMateria* );
		AMateria*	createMateria(std::string const & type);
};

#endif // MATERIASOURCE_H
