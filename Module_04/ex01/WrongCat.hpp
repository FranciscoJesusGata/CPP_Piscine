/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:41:42 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/10 23:28:52 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <string>
# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat: public WrongAnimal {

	private:
		Brain	*brain;
	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);

		WrongCat	&operator=(WrongCat const &rhs);

		void		makeSound(void) const;
		void		setIdea(std::string idea, size_t pos);
		std::string	getIdea(size_t pos) const;
};

#endif
