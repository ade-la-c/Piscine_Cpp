/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:11:25 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/18 19:55:08 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cmath>

std::string		g_str;
typedef void	(*fct)(int);

bool	particularCase( std::string s ) {

	if (s == "-inff" || s == "+inff" || s == "nanf" || s == "-inf"
	|| s == "+inf" || s == "nan")
		return true;
	return false;
}

void		charType( int value ) {

	char	c = static_cast<char>(value);

	if (value >= ' ' && value <= '~')
		std::cout << "char: '" << c << "'" << std::endl;
	else if (particularCase())
}

void		intType( int value ) {

	std::cout << "int: " << value << std::endl;
}

void		floatType( int value ) {

	float	floatvalue = static_cast<float>(value);

	std::cout << "float: " << floatvalue << std::endl;	// gerer cas particuliers alphabétiques
}

void		doubleType( int value ) {

	double	dvalue = static_cast<double>(value);

	std::cout << "double: " << dvalue << std::endl;	// gerer cas particuliers alphabétiques
}

int		parsing( std::string s ) {

	if (s.length() == 1 && ((s[0] >= 32 && s[0] <= 47) || (s[0] >= 58 && s[0] <= 126))) {
		g_str = "char";
		return s[0];
	}

	size_t	i = 0;
	bool	sign = false;

	if (s == "-inff" || s == "+inff" || s == "nanf" || s == "-inf" || s == "+inf" || s == "nan") {
		g_str = s;
		return 0;
	}

	if (s[i] == '-' || s[i] == '+') {
		i++;
		sign = true;
	}
	i = s.find_first_not_of("0123456789", i);

	if (s.find_first_of("0123456789") == std::string::npos) {
		g_str = "error";
		return 0;
	}

	if (i == std::string::npos) {
		g_str = "int";
		return atoi(s.c_str());
	}

	if (((i == 1 && sign == true) || (i == 0 && sign == false)) && s[i] != '.') {
		g_str = "error";
		return 0;
	}

	else if (s[i] == '.') {
		i = s.find_first_not_of("0123456789", i + 1);

		if (s[i] == 'f' && i + 1 == s.length()) {
			g_str = "float";
			return atof(s.c_str());
		}

		if (i == std::string::npos) {
			g_str = "double";
			return atof(s.c_str());	// pas sur
		}
	}
	g_str = "error";
	return 0;
}

int		main( int ac, char **av ) {

	std::string		str;
	int				value;
	
	if (ac != 2) {
		std::cerr << "Error : program takes one string parameter" << std::endl;
		return 1;
	}

	str = av[1];
	value = parsing(str);
	if (g_str == "error") {
		std::cerr << "Error : parameter entered is not valid" << std::endl;
		return 1;
	}

	std::string		types[4] = { "char", "int", "float", "double" };
	fct				fcts[4] = { &charType, &intType, &floatType, &doubleType };

	for (int i = 0; i < 4; i++)
		fcts[i](value);

	return 0;
}
