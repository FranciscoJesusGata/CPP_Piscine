/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:58:53 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/03 15:19:23 by fgata-va         ###   ########.fr       */
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

	std::string	lvls[] = {"debug", "info", "warning", "error"};
	void	(Karen::*functs[])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	for (int i = 0; i < 4; i++) {
		if (level == lvls[i]) {
			(this->*functs[i])();
			return ;
		}
	}
}
