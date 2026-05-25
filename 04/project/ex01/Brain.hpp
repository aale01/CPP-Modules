/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:01:42 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 13:16:11 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>

class Brain {
	public:
		Brain( void );
		Brain( Brain const & src );
		~Brain( void );
		Brain & operator=( Brain const & rhs );

		void				addIdea( std::string idea );
		const std::string&	getIdea( unsigned int index ) const;
		void				getIdeas( void ) const;

	private:
		std::string		_ideas[100];
		unsigned int	_size;
};

#endif // BRAIN_H
