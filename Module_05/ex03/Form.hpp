/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:55:39 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/17 21:51:18 by fgata-va         ###   ########.fr       */
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
		std::string const	_target;
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

		class NotSignedException: public std::exception {
			public:
				virtual const char*	what() const throw();
		};

	protected:
		void	checkExecuter(Bureaucrat const &executer) const;
	public:
		Form(std::string name, std::string target, 
			unsigned int sign_grade, unsigned int execute_grade);
		Form(Form const &src);
		virtual ~Form(void);

		Form	&operator=(Form const &rhs);

		std::string		getName(void) const;
		std::string		getTarget(void) const;
		unsigned int	getSignGrade(void) const;
		unsigned int	getExecuteGrade(void) const;
		bool			getSign(void) const;
		void			beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const &executer) const = 0;
};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif
