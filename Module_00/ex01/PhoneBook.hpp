/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:33:53 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/01 12:33:41 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"


class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void		menu(void);

private:

	int			contacts_number;
	Contact		contacts[8];

	void		_add(void);
	void		_search(void) const;
	std::string	_str_truncate(std::string src, size_t max_width) const;
	void		_print_contacts(void) const;
	static bool	_is_number(std::string src);
	void		_contact_info(int index) const;
};

#endif
