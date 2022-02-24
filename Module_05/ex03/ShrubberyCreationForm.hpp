/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:48:49 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/17 21:50:47 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

	class ShrubberyCreationForm: public Form {
		public:
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(ShrubberyCreationForm &src);
			~ShrubberyCreationForm(void);

			ShrubberyCreationForm	&operator=(ShrubberyCreationForm &rhs);
			virtual void	execute(Bureaucrat const &executer) const;
	};
#endif
