/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:03:01 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/21 18:59:19 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "Form.hpp"

class Intern {

	private:
		class UnknownFormException: public std::exception {
			virtual const char	*what() const throw();
		};
	public:
		Intern(void);
		~Intern(void);

		Form	*makeForm(std::string name, std::string target);
};

#endif
