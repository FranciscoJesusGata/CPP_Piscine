/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:41:42 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/15 11:04:35 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound(void) const;
		void			setIdea(std::string idea, size_t pos);
		std::string		getIdea(size_t pos) const;
};

#endif
