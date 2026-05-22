/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:45:41 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/22 17:54:17 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "==== Wrong classes tests ====\n";

	const WrongAnimal* metaa = new WrongAnimal();
	const WrongAnimal* jj = new WrongCat();
	const WrongAnimal* ii = new WrongCat();

	std::cout << jj->getType() << " " << std::endl;
	std::cout << ii->getType() << " " << std::endl;
	ii->makeSound();
	jj->makeSound();
	metaa->makeSound();

	delete metaa;
	delete jj;
	delete ii;

	return 0;
}
