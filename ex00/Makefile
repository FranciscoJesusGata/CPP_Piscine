# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgata-va <fgata-va@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 16:11:09 by fgata-va          #+#    #+#              #
#    Updated: 2022/01/27 17:15:27 by fgata-va         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++

CFLAGS := -Wall -Werror -Wextra -I. -g

NAME = megaphone

SRC := megaphone.cpp

OBJS := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME) $(NAME).dSYM

re: fclean all
