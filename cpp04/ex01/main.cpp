/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:05 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/08 19:09:57 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main( void )
{
	{
		int				x = 2;
		const Animal*	a[x];

		for (int i = 0; i < x; i++) {
			if (i % 2)
				a[i] = new Dog();
			else
				a[i] = new Cat();
		}
		std::cout << std::endl;

		for (int i = 0; i < x; i++) {
			a[i]->makeSound();
		}
		std::cout << std::endl;

		for (int i = 0; i < x; i++) {
			delete a[i];
		}
	}
	{	// ex01 default main
		// const Animal* j = new Dog();
		// const Animal* i = new Cat();

		// std::cout << j->getType() << std::endl;
		// std::cout << i->getType() << std::endl;
		// j->makeSound();
		// i->makeSound();
	
		// delete j;//should not create a leak
		// delete i;
	}
	{
		// const Animal* meta = new Animal();
		// const Animal* j = new Dog();
		// const Animal* i = new Cat();

		// std::cout << j->getType() << " " << std::endl;
		// std::cout << i->getType() << " " << std::endl;
		// i->makeSound(); //will output the cat sound!
		// j->makeSound();
		// meta->makeSound();
	}
	{
		// const WrongAnimal* meta2 = new WrongAnimal();
		// const WrongAnimal* k = new WrongCat();

		// std::cout << k->getType() << " " << std::endl;
		// k->makeSound(); //will not output the cat sound!
		// meta2->makeSound();
	}
	return 0;
}
