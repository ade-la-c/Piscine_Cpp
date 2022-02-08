/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:05 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 15:06:04 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main( void )
{
	{
		const Animal* a[10];

		for (int i = 0; a[i]; i += 2) {
			a[i] = new Dog();
			a[i + 1] = new Cat();
		}
	}
	{	// ex01 default main
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		j->makeSound();
		i->makeSound();
	
		delete j;//should not create a leak
		delete i;
	}
	{
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();

	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();
	}
	{
	// 	const WrongAnimal* meta2 = new WrongAnimal();
	// 	const WrongAnimal* k = new WrongCat();

	// 	std::cout << k->getType() << " " << std::endl;
	// 	k->makeSound(); //will not output the cat sound!
	// 	meta2->makeSound();
	}
	return 0;
}
