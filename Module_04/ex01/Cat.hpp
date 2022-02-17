/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:41:42 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/14 19:23:18 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound(void) const;
		void			setIdea(std::string idea, size_t pos);
		std::string		getIdea(size_t pos) const;
};

#endif
