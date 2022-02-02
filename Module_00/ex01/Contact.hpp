/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:38:34 by fgata-va          #+#    #+#             */
/*   Updated: 2022/01/31 12:12:02 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
public:

	Contact(void);
	~Contact(void);

	std::string		get_name(void) const;
	void			set_name(std::string name);
	std::string		get_last_name(void) const;
	void			set_last_name(std::string last_name);
	std::string		get_nick(void) const;
	void			set_nick(std::string nick);
	std::string		get_phone(void) const;
	void			set_phone(std::string phone);
	std::string		get_secret(void) const;
	void			set_secret(std::string secret);

private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_darkest_secret;
};

#endif
