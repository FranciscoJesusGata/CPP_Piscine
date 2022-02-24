/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:48:49 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/17 22:39:05 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

	class PresidentialPardonForm: public Form {
		public:
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(PresidentialPardonForm &src);
			~PresidentialPardonForm(void);

			PresidentialPardonForm	&operator=(PresidentialPardonForm &rhs);
			virtual void	execute(Bureaucrat const &executer) const;
	};
#endif
