/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:16:09 by fgata-va          #+#    #+#             */
/*   Updated: 2022/01/27 19:31:33 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc) {
		while (*argv[i]) {
			std::cout << (char)toupper(*argv[i]);
			argv[i]++;
		}
		i++;
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
