/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:48:49 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/17 21:59:53 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

	class RobotomyRequestForm: public Form {
		public:
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(RobotomyRequestForm &src);
			~RobotomyRequestForm(void);

			RobotomyRequestForm	&operator=(RobotomyRequestForm &rhs);
			virtual void	execute(Bureaucrat const &executer) const;
	};
#endif
