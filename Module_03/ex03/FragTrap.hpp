/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:29:22 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/11 14:48:37 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <string>

class	FragTrap: virtual public ClapTrap {

	public:
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &src);

		FragTrap	&operator=(const FragTrap &rhs);

		void	attack(std::string const &target);

		void		highFiveGuys(void) const;
};

#endif
