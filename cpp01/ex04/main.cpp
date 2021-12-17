/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:05:53 by ade-la-c          #+#    #+#             */
/*   Updated: 2021/12/17 17:08:23 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main( int ac, char **av) {

	{
		if (ac != 4) {
			std::cerr << "Usage : ./replace [s1] [s2] [filename]" << std::endl;
			return 1;
		}
		if (!av[1][0] || !av[2][0]) {
			std::cerr << "String parameters can't be empty" << std::endl;
			return 1;
		}
	}

	std::string		s1 = av[1];
	std::string		s2 = av[2];
	std::string		buf;
	std::string		filename = av[3];
	size_t			pos;
	bool			x = false;

	std::ifstream	ifs(filename.c_str());
	if (!ifs) {
		std::cerr << "The file name you entered doesn't exist" << std::endl;
		return 1;
	}
	std::ofstream	ofs((filename += ".replace").c_str());

	while (!ifs.eof()) {
		if (x == true)
			ofs << buf << std::endl;
		x = true;
		std::getline(ifs, buf);
		while (buf.find(s1) != std::string::npos) {
			pos = buf.find(s1);
			buf.erase(pos, s1.size());
			buf.insert(pos, s2);
		}
	}
	ofs << buf;

	ifs.close();
	ofs.close();
	return 0;
}