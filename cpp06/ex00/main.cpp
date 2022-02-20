/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-la-c <ade-la-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:11:25 by ade-la-c          #+#    #+#             */
/*   Updated: 2022/02/20 20:14:27 by ade-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <climits>

std::string		g_str;
bool			g_bool = false;
typedef void	(*fct)(double);

double		particularCase( std::string s ) {

	if (s == "+inff") {
		g_str = "float";
		return INFINITY;
	} if (s == "-inff") {
		g_str = "float";
		return -INFINITY;
	} if (s == "nanf") {
		g_str = "float";
		return NAN;
	} if (s == "+inf") {
		g_str = "double";
		return INFINITY;
	} if (s == "-inf") {
		g_str = "double";
		return -INFINITY;
	} if (s == "nan") {
		g_str = "double";
		return NAN;
	}
	return 0;
}

void		charType( double value ) {

	char	c = static_cast<char>(value);

	std::cout << "char: ";
	if (value >= ' ' && value <= '~')
		std::cout << "'" << c << "'" << std::endl;
	else if (value >= -128 && value <= 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void		intType( double value ) {

	int		num = static_cast<int>(value);

	std::cout << "int: ";
	if (value >= INT32_MAX || value <= INT32_MIN || g_bool == true) {
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << num << std::endl;
}

void		floatType( double value ) {

	float	floatvalue = static_cast<float>(value);

	std::cout << "float: ";
	if ((floatvalue == HUGE_VAL || floatvalue == -HUGE_VAL) && g_bool == false) {
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << std::fixed << std::setprecision(1) << floatvalue;
	std::cout << 'f' << std::endl;
}

void		doubleType( double value ) {

	double	dvalue = static_cast<double>(value);

	std::cout << "double: ";
	if ((dvalue == HUGE_VAL || dvalue == -HUGE_VAL) && g_bool == false) {
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << dvalue << std::endl;
}

double		parsing( std::string s ) {

	if (s.length() == 1 && ((s[0] >= 32 && s[0] <= 47) || (s[0] >= 58 && s[0] <= 126))) {
		g_str = "char";
		return s[0];
	}

	size_t	i = 0;
	bool	sign = false;

	if (s == "-inff" || s == "+inff" || s == "nanf" || s == "-inf" || s == "+inf" || s == "nan") {
		g_bool = true;
		return particularCase(s);
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
		return atof(s.c_str());
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
			return atof(s.c_str());
		}
	}
	g_str = "error";
	return 0;
}

int		main( int ac, char **av ) {

	std::string		str;
	double			value;

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
