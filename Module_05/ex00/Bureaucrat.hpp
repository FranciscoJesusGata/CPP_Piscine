/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:43:21 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/17 18:25:25 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class Bureaucrat {

	private:
		std::string const	_name;
		unsigned int		_grade;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char*	what() const throw();
		};
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &src);

		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif
