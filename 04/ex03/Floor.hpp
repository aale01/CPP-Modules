/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 14:24:59 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/26 14:27:21 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_H
#define FLOOR_H

#include "AMateria.hpp"
#include <vector>

class AMateria;

static std::vector<AMateria*> g_floor;

void floorDrop(AMateria* m);
void floorClear();

#endif // FLOOR_H
