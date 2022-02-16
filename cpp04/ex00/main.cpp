/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:05 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/16 13:32:49 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main( void )
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

	}
	std::cout << std::endl;
	{
		const WrongAnimal* meta2 = new WrongAnimal();
		const WrongAnimal* k = new WrongCat();

		std::cout << k->getType() << " " << std::endl;
		k->makeSound(); //will not output the cat sound!
		meta2->makeSound();
	}

	// system("leaks animal");

	return 0;
}
