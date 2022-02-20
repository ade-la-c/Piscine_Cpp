/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:26:15 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/20 18:51:11 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_data {

	std::string		name;

}	Data;


uintptr_t	serialize( Data * ptr ) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data *		deserialize( uintptr_t raw ) {

	return reinterpret_cast<Data *>(raw);
}

int		main( void ) {

	Data *		data = new Data;
	data->name = "ade-la-c";

	uintptr_t	serialized = serialize(data);
	Data *		deserialized = deserialize(serialized);

	std::cout << "Serialized struct content :\t" << data->name << std::endl;
	std::cout << "Deserialized struct content :\t" << deserialized->name << std::endl;
	std::cout << "Serialized address :\t\t" << data << std::endl;
	std::cout << "Deserialized address :\t\t" << deserialized << std::endl;

	delete data;

	return 0;
}
