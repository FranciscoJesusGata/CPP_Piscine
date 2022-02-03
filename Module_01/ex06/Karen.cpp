/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:58:53 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/03 16:40:25 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {

	return ;
}

Karen::~Karen(void) {

	return ;
}

void	Karen::debug(void) {

	std::cout << "Niño, ¿me ponê un poquito mâh de hamón en er çerranito por fabôh?" << std::endl;
	return ;
}

void	Karen::info(void) {

	std::cout << "Benga no me çeâ çieço, dôh lonxitâ ná mâh, çi eço no ô ba a quitâh de pobrê." << std::endl;
	return ;
}

void	Karen::warning(void) {

	std::cout << "Mira, tu no çabê quien çoy yo. Me bâ a exâh er hamón como que me yamo María der Carmen." << std::endl;
	return ;
}

void	Karen::error(void) {

	std::cout << "Aora mîmmo bâ a yamâh ar dueño, que le boy a deçîh yo un pâh de coçitâ." << std::endl;
	return ;
}

void	Karen::complain(std::string level) {

	int	lvl = 0;
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (lvl < 4 && level != lvls[lvl])
		lvl++;
	switch (lvl) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
