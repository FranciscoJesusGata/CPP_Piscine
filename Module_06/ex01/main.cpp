/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:10:45 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/23 11:28:45 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Data		*input;
	uintptr_t	serialized;
	Data		*output;

	input = new Data;
	input->number = 42;
	input->info = "The sense of life, the universe and anything else.";
	std::cout << "Original Data constains: " << input->number << ", \"" << input->info << '"' << std::endl;
	serialized = serialize(input);
	std::cout << "Serialized Data: " << serialized << std::endl;
	output = deserialize(serialized);
	std::cout << "Deserialized Data: " << output->number << ", \"" << output->info << '"' << std::endl;
	delete input;
	return (0);
}

