/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:46:55 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/02 15:20:56 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);
};

Zombie	*ZombieHorde(int N, std::string name);

#endif
