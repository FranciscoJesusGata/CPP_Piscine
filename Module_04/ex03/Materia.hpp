/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:48:51 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 15:21:31 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIA_HPP
# define MATERIA_HPP
# include <string>
# include "Character.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string	_type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria(void);

		std::string const	&getType(void) const;

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

class Ice: public AMateria {

	public:
		Ice(void);
		Ice(Ice const &src);
		~Ice(void);

		Ice		&operator=(Ice const &rhs);

		virtual Ice			*clone(void) const;
		virtual void		use(ICharacter &target);
};

class Cure: public AMateria {

	public:
		Cure(void);
		Cure(Cure const &src);
		~Cure(void);

		Cure		&operator=(Cure const &rhs);

		virtual Cure		*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
