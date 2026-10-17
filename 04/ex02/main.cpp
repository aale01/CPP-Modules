/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:25:48 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/25 15:57:02 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	std::cout << "=== ABSTRACT CLASS TEST ===" << std::endl;

	// AAnimal a; // ERROR: AAnimal is abstract

	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << std::endl;

	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;

	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;

	dog->getBrain()->addIdea("I want a bone");
	cat->getBrain()->addIdea("I want fish");

	std::cout << "Dog idea: " << dog->getBrain()->getIdea(0) << std::endl;

	std::cout << "Cat idea: " << cat->getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;

	std::cout << "=== DEEP COPY TEST ===" << std::endl;

	Dog original;

	original.getBrain()->addIdea("Original idea");

	Dog copy(original);

	copy.getBrain()->addIdea("Copy idea");

	std::cout << "\nOriginal brain: " << std::endl;
	original.getBrain()->getIdeas();

	std::cout << "\nCopy brain: " << std::endl;
	copy.getBrain()->getIdeas();

	std::cout << std::endl;

	delete dog;
	delete cat;

	return (0);
}