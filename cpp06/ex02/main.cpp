/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:55:38 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/20 20:01:39 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base *		generate( void ) {

	Base *	ptr[3] = { new A,
						new B,
						new C };
	srand(time(NULL));
	int		n = std::rand() % 3;

	for (int i = 0; i < 3; i++)
		if (i != n)
			delete ptr[i];

	return ptr[n];
}

void		identify( Base * p ) {

	A *		a = dynamic_cast<A *>(p);
	B *		b = dynamic_cast<B *>(p);
	C *		c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void		identify( Base & p ) {

	try {
		A &		a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch ( std::bad_cast &bc ) {}
	try {
		B &		b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	} catch ( std::bad_cast &bc ) {}
	try {
		C &		c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	} catch ( std::bad_cast &bc ) {}
}

int			main( void ) {

	Base *	ptr = generate();
	Base &	ref = *ptr;

	std::cout << "Ptr identify : ";
	identify(ptr);
	std::cout << "Ref identify : ";
	identify(ref);

	delete ptr;

	return 0;
}
