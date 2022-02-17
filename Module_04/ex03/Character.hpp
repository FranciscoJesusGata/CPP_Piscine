/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:25:33 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 15:21:47 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <string>
# include "Materia.hpp"

class AMateria;

class ICharacter {

	public:
		virtual ~ICharacter() {}

		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};

class Character: public ICharacter {

	private:
		AMateria	*_inventory[4];
		std::string	_name;
	public:
		Character(std::string name);
		Character(Character const &src);
		~Character(void);

		Character	&operator=(Character const &rhs);

		virtual std::string const	&getName(void) const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
};

#endif
