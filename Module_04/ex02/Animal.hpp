/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:41:42 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/15 12:24:59 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal {

	protected:
		std::string	type;
		
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal	&operator=(Animal const &rhs);
		std::string		getType(void) const;
		virtual void			makeSound(void) const = 0;
};

#endif
