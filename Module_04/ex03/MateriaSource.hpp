/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:22:19 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/16 15:08:53 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "Materia.hpp"
# include "Character.hpp"
# include <string>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria *src) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource {

	private:
		AMateria *_known_materias[4];
		int		_capacity;
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource &src);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource &rhs);

		virtual void learnMateria(AMateria *src);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
