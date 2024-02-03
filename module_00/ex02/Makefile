NAME = account

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = tests.cpp Account.cpp

HEADERS = Account.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(OBJS): $(HEADERS) Makefile

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

m:
	./$(NAME) > log

l:
	valgrind ./$(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
