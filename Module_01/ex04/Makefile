# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 16:11:09 by fgata-va          #+#    #+#              #
#    Updated: 2022/02/03 12:28:50 by fgata-va         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++

CFLAGS := -Wall -Werror -Wextra -I. -g -std=c++98

NAME = replace

SRC := main.cpp Replace.cpp

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME) $(NAME).dSYM tests/*.REPLACE

re: fclean all
