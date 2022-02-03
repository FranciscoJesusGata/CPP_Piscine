/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgata-va <fgata-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:38:45 by fgata-va          #+#    #+#             */
/*   Updated: 2022/02/03 12:17:53 by fgata-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.h"

static std::string	replace_in_line(std::string line, std::string search, std::string replace) {

	size_t	offset;
	size_t	start;
	size_t	end;
	std::string	newline;

	start = line.find(search);
	offset = 0;
	while (start != line.npos) {
		end = start + search.size();
		newline += (line.substr(offset, start) + replace);
		offset += end;
		start = line.substr(offset).find(search);
	}
	newline += line.substr(offset);
	if (!newline.size())
		return (line);
	return (newline);
}

void	replace(char *file_name, char *search, char *replace) {

	std::ifstream	infile(file_name);
	std::ofstream	outfile(std::string(file_name) + ".REPLACE");
	std::string		line;

	if (!infile.is_open()) {
		std::cout << "Couldn't open file " << file_name << std::endl;
		return ;
	}
	if (!outfile.is_open()) {
		std::cout << "Couldn't create file " << file_name << ".REPLACE" << std::endl;
		return ;
	}
	while (std::getline(infile, line))
		outfile << replace_in_line(line, std::string(search), std::string(replace)) << std::endl;
}
