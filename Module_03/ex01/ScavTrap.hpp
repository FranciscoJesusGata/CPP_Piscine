/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:29:22 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:32 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class	ScavTrap: public ClapTrap {

	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &src);

		ScavTrap	&operator=(const ScavTrap &rhs);

		void	attack(std::string const &target);

		void		guardGate(void) const;
};

#endif
