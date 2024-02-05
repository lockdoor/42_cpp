# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:49:04 by pnamnil           #+#    #+#              #
#    Updated: 2024/02/05 06:26:33 by pnamnil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

# CC = gcc
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = inherit.cpp

all: $(NAME) m

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

m:
	./$(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
