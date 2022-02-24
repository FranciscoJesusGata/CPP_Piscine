/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:55:39 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/23 17:03:01 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_sign_grade;
		unsigned int const	_execute_grade;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char*	what() const throw();
		};

	public:
		Form(std::string name, unsigned int sign_grade, unsigned int execute_grade);
		Form(Form const &src);
		virtual ~Form(void);

		Form	&operator=(Form const &rhs);

		std::string		getName(void) const;
		unsigned int	getSignGrade(void) const;
		unsigned int	getExecuteGrade(void) const;
		bool			getSign(void) const;
		void			beSigned(Bureaucrat const &bureaucrat);
};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif
