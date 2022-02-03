/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:56:20 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/03 16:37:28 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char *argv[]) {

	Karen	maricarmen = Karen();

	for (int i = 1; i < argc; i++)
		maricarmen.complain(argv[i]);
	return (0);
}
