/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:56:20 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/03 15:10:23 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void) {

	std::string	tests[4] = {"debug", "info", "warning", "error"};
	Karen	marikarmen = Karen();

	for (int i = 0; i < 4; i++) {
		std::cout << "Test " << i + 1 << ": [ " << tests[i] << " ]:" << std::endl;
		marikarmen.complain(tests[i]);
		std::cout << std::endl;
	}
	return (0);
}
