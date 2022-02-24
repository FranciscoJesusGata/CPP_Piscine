/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:09:52 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/24 19:49:48 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>

int	main(int argc, char *argv[]) {

	double	number;
	float	decimal;

	if (argc == 1)
		return (0);
	number = strtod(argv[1], NULL);
	decimal = atof(argv[1]);
	if (!strncmp(argv[1], "nan", 3) || !strncmp(argv[1], "inf", 3)) {

		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << atof(argv[1])  << 'f' << std::endl;
		std::cout << "double: " << number << std::endl;
	} else {
		if ((argv[1][0] < 48 || argv[1][0] > 57) && !number) {
			number = static_cast<double>(argv[1][0]);
			decimal = static_cast<float>(argv[1][0]);
		}
		std::cout << "char: ";
		if (number > 31 && number < 177)
			std::cout << static_cast<char>(number) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		std::cout << "int: ";
		if (number > INT_MAX || number < INT_MIN)
			std::cout << "impossible";
		else
			std::cout << number;
		std::cout << std::endl;
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "float: ";
		std::cout << decimal << 'f' << std::endl;
		std::cout << "double: " << number << std::endl;
	}
}
