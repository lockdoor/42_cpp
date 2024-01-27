# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:49:04 by pnamnil           #+#    #+#              #
#    Updated: 2024/01/26 15:23:36 by pnamnil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = uppercase.cpp

all: $(NAME) m

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

m:
	./$(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
