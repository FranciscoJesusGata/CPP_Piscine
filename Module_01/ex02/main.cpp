/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:28:12 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 15:36:11 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = str;

	stringPTR = &str;
	std::cout << "The memory address of the string: " << &str << std::endl;
	std::cout << "The string memory address in PTR: " << stringPTR << std::endl;
	std::cout << "The string memory address in REF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String from the PTR: " << *stringPTR << std::endl;
	std::cout << "String from the REF: " << stringREF << std::endl;
}
