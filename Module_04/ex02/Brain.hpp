/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:16:43 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/15 11:04:40 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain {

	private:
		std::string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &src);

		Brain	&operator=(const Brain &rhs);
		void			setIdea(std::string idea, size_t pos);
		std::string		getIdea(size_t pos) const;
};

#endif
