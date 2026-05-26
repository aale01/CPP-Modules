/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 14:24:59 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/26 14:27:21 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

void floorDrop(AMateria* m)
{
	g_floor.push_back(m);
}

void floorClear()
{
	for (size_t i = 0; i < g_floor.size(); i++)
		delete g_floor[i];
	g_floor.clear();
}