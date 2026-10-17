/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:45:41 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 13:45:39 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define NB_ANIMALS 10

int main()
{
	std::cout << "===== BASIC TEST =====" << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	delete j;
	delete i;

	std::cout << "\n\n===== ARRAY TEST =====" << std::endl;

	Animal* animals[NB_ANIMALS];

	for (int k = 0; k < NB_ANIMALS / 2; k++)
		animals[k] = new Dog();

	for (int k = NB_ANIMALS / 2; k < NB_ANIMALS; k++)
		animals[k] = new Cat();


	std::cout << "\n\n===== DELETING ARRAY =====" << std::endl;

	for (int k = 0; k < NB_ANIMALS; k++)
		delete animals[k];


	std::cout << "\n\n===== DEEP COPY TEST =====" << std::endl;

	Dog original;

	original.getBrain()->addIdea("I want food");
	original.getBrain()->addIdea("I want to play");
	original.getBrain()->addIdea("I want to sleep");

	Dog copy(original);

	std::cout << "\nOriginal ideas:" << std::endl;
	original.getBrain()->getIdeas();

	std::cout << "\nCopy ideas:" << std::endl;
	copy.getBrain()->getIdeas();


	std::cout << "\n\n===== ASSIGNMENT OPERATOR TEST =====" << std::endl;

	Cat cat1;
	cat1.getBrain()->addIdea("Catch mice");

	Cat cat2;
	cat2 = cat1;

	std::cout << "\ncat1 idea: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "cat2 idea: " << cat2.getBrain()->getIdea(0) << std::endl;

	std::cout << "\n\n===== DESTRUCTORS =====" << std::endl;
	return 0;
}
