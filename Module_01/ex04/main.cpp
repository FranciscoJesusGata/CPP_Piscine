/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:33:34 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 19:44:08 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.h"

int	main(int argc, char *argv[]) {

	if (argc != 4) {
		std::cout << "Error: invalid number of arguments" << std::endl;
		std::cout << "Usage: ./replace [file_to_replace] [str_to_replace] [str_that_will_replace]" << std::endl;
		return (1);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}
