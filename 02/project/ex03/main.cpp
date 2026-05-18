/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:08:02 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/18 22:37:56 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const& a, Point const& b, Point const& c, Point const& point);

static void test(Point const& a, Point const& b, Point const& c, Point const& p, const std::string& name)
{
	std::cout << name << ": "
			  << (bsp(a, b, c, p) ? "INSIDE" : "OUTSIDE")
			  << std::endl;
}

int main()
{
	// 🔺 Triangolo standard
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	std::cout << "=== TRIANGOLO BASE (A(0, 0), B(10, 0), C(0, 10)) ===" <<
		std::endl;

	test(a, b, c, Point(1, 1), "Inside P(1,1)");
	test(a, b, c, Point(2, 2), "Inside P(2,2)");
	test(a, b, c, Point(5, 2), "Inside P(5,2)");

	test(a, b, c, Point(10, 10), "Outside P(10,10)");
	test(a, b, c, Point(-1, -1), "Outside P(-1,-1)");
	test(a, b, c, Point(10, 1), "Outside P(10,1)");


	std::cout << "\n=== BORDO ===" << std::endl;

	test(a, b, c, Point(0, 0), "Vertex A");
	test(a, b, c, Point(10, 0), "Vertex B");
	test(a, b, c, Point(0, 10), "Vertex C");

	test(a, b, c, Point(7.5f, 0), "Edge AB P(7.5, 0)");
	test(a, b, c, Point(5, 5), "Edge hypotenuse P(5, 5)");


	std::cout << "\n=== CASI STRANI ===" << std::endl;

	// Collineare con un lato
	test(a, b, c, Point(5, 0), "On base line AB P(5, 0)");
	test(a, b, c, Point(0, 2), "On CA segment P(0, 2)");

	// Molto vicino al bordo
	test(a, b, c, Point(0.1f, 0.1f), "Near origin P(0.1, 0.1)");

	std::cout << std::endl;

	std::cout << "\n=== TRIANGOLO STRETTO (A(0, 0), B(5, 0), C(2, 100)) ===" <<
		std::endl;

	Point d(0, 0);
	Point e(5, 0);
	Point f(2, 100);

	test(d, e, f, Point(2, 10), "Inside tall triangle P(2, 10)");
	test(d, e, f, Point(5, 50), "Outside tall triangle P(5, 50)");

	std::cout << std::endl;

	std::cout << "\n=== TRIANGOLO DEGENERE (A(0, 0), B(5, 0), C(10, 0)) ===" <<
		std::endl;

	// Tre punti allineati (tutti sull'asse X)
	Point g(0, 0);
	Point h(5, 0);
	Point i(10, 0);

	test(g, h, i, Point(2, 0), "On degenerate line");
	test(g, h, i, Point(2, 1), "Above degenerate line");
	test(g, h, i, Point(2, -1), "Below degenerate line");

	return 0;
}

