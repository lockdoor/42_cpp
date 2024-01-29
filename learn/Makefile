# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnamnil <pnamnil@student.42bangkok.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:49:04 by pnamnil           #+#    #+#              #
#    Updated: 2024/01/29 10:36:36 by pnamnil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = find.cpp

all: $(NAME) m

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

m:
	./$(NAME) $(SRCS) buf str

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
