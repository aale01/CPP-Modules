/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abecucci <abecucci@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 22:47:59 by abecucci          #+#    #+#             */
/*   Updated: 2026/05/26 14:45:50 by abecucci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"
# include "Floor.hpp"

int	main( void )
{
	std::cout << "============================" << std::endl;
	std::cout << "SUBJECT TEST" << std::endl;
	std::cout << "============================" << std::endl;

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;

	std::cout << std::endl;

	std::cout << "============================" << std::endl;
	std::cout << "INVENTORY FULL TEST" << std::endl;
	std::cout << "============================" << std::endl;

	Character	player("player");

	player.equip(new Ice());
	player.equip(new Cure());
	player.equip(new Ice());
	player.equip(new Cure());

	// inventory pieno
	player.equip(new Ice());

	std::cout << std::endl;

	std::cout << "============================" << std::endl;
	std::cout << "INVALID INDEX TEST" << std::endl;
	std::cout << "============================" << std::endl;

	Character enemy("enemy");

	player.use(-1, enemy);
	player.use(42, enemy);

	player.unequip(-1);
	player.unequip(42);

	std::cout << std::endl;

	std::cout << "============================" << std::endl;
	std::cout << "UNEQUIP TEST" << std::endl;
	std::cout << "============================" << std::endl;

	AMateria* floor;

	floor = new Ice();

	player.equip(floor);

	player.use(0, enemy);

	player.unequip(0);

	// non dovrebbe fare nulla
	player.use(0, enemy);

	std::cout << std::endl;

	std::cout << "============================" << std::endl;
	std::cout << "DEEP COPY TEST" << std::endl;
	std::cout << "============================" << std::endl;

	Character original("original");

	original.equip(new Ice());
	original.equip(new Cure());

	Character copy(original);

	copy.use(0, enemy);
	copy.use(1, enemy);

	std::cout << std::endl;

	std::cout << "Destroying original..." << std::endl;

	{
		Character temp(original);
	}

	std::cout << "Original should still work:" << std::endl;

	original.use(0, enemy);
	original.use(1, enemy);

	std::cout << std::endl;

	std::cout << "============================" << std::endl;
	std::cout << "UNKNOWN MATERIA TEST" << std::endl;
	std::cout << "============================" << std::endl;

	AMateria* unknown;

	unknown = src->createMateria("fire");

	if (!unknown)
		std::cout << "Unknown materia correctly returned NULL" << std::endl;

	std::cout << std::endl;

	std::cout << "============================" << std::endl;
	std::cout << "END OF TESTS" << std::endl;
	std::cout << "============================" << std::endl;

	delete src;

	floorClear();

	return (0);
}