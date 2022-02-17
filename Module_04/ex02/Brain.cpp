/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:16:48 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 17:44:55 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain (void) {

	std::cout << "New Brain created" << std::endl;
	return ;
}

Brain::Brain (const Brain &src) {

	std::cout << "Brain coppied" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain (void) {

	std::cout << "Brain deleted" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &rhs) {

	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

void	Brain::setIdea(std::string idea, size_t pos) {

	if (pos < 100)
		this->ideas[pos] = idea;
	else
		std::cout << "Position invalid" << std::endl;
}

std::string	Brain::getIdea(size_t pos) const {

	if (pos > 99)
	{
		std::cout << "Position invalid" << std::endl;
		return (NULL);
	}
	return (this->ideas[pos]);
}
