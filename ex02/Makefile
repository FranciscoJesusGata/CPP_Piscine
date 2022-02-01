# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 16:11:09 by fgata-va          #+#    #+#              #
#    Updated: 2022/01/31 21:00:20 by fgata-va         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++

CFLAGS := -Wall -Werror -Wextra -I. -g

NAME = logger

SRC := Account.cpp tests.cpp

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME) $(NAME).dSYM

re: fclean all
