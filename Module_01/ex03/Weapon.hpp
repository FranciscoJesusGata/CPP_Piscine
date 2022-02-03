/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:47:50 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 15:55:00 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		~Weapon();

		std::string const	&getType(void);
		void	setType(std::string type);
};

#endif
