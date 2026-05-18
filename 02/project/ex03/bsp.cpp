/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 21:01:42 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/18 21:53:27 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed deltaX(Point const & a, Point const & b)
{
	return b.getX() - a.getX();
}

static Fixed deltaY(Point const & a, Point const & b)
{
	return b.getY() - a.getY();
}

static Fixed cross(Point const& a, Point const& b, Point const& c)
{
    return (deltaX( a, b ) * deltaY( a, c ) - deltaY( a, b ) * deltaX( a, c ));
}

bool bsp(Point const& a, Point const& b, Point const& c, Point const& point)
{
	Fixed d1 = cross(a, b, point);
	Fixed d2 = cross(b, c, point);
	Fixed d3 = cross(c, a, point);

	Fixed d0 = cross(a, b, c);

	return (d1 > 0 && d2 > 0 && d3 > 0 && d0 > 0)
		|| (d1 < 0 && d2 < 0 && d3 < 0 && d0 < 0);
}